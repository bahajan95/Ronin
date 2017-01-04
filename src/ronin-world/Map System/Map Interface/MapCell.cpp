/*
 * Sandshroud Project Ronin
 * Copyright (C) 2005-2008 Ascent Team <http://www.ascentemu.com/>
 * Copyright (C) 2008-2009 AspireDev <http://www.aspiredev.org/>
 * Copyright (C) 2009-2017 Sandshroud <https://github.com/Sandshroud>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

//
// MapCell.cpp
//

#include "StdAfx.h"

MapCell::MapCell()
{
    _forcedActive = false;
}

MapCell::~MapCell()
{
    UnloadCellData(true);
}

void MapCell::Init(uint32 x, uint32 y, uint32 mapid, MapInstance* instance)
{
    _mapData = instance->GetBaseMap();
    _instance = instance;
    _active = false;
    _loaded = false;
    _x = x;
    _y = y;
    _unloadpending=false;
}

void MapCell::AddObject(WorldObject* obj)
{
    m_fullSet.push_back(obj);
    if(obj->IsPlayer())
    {
        m_objectSet.push_back(obj);
        m_playerSet.push_back(obj);
        return;
    }

    MapCellObjectStorage *objectStorage;
    Loki::AssocVector<uint8, MapCellObjectStorage*>::iterator iter;
    if(uint32 conditionId = obj->getConditionID())
    {
        if((iter = m_conditionStorage.find(conditionId)) == m_conditionStorage.end())
        {
            objectStorage = new MapCellObjectStorage(conditionId);
            m_conditionStorage.insert(std::make_pair(conditionId, objectStorage));
        } else objectStorage = iter->second;

        objectStorage->AddObject(obj);
    }
    else if(uint32 eventId = obj->getEventID())
    {
        if((iter = m_eventStorage.find(eventId)) == m_eventStorage.end())
        {
            objectStorage = new MapCellObjectStorage(eventId);
            m_eventStorage.insert(std::make_pair(eventId, objectStorage));
        } else objectStorage = iter->second;

        objectStorage->AddObject(obj);
    }
    else if(obj->GetPhaseMask() & 0x8000)
        m_objectSet.push_back(obj);
    else
    {
        uint8 phaseBit;
        uint16 phaseMask = obj->GetPhaseMask();
        while((phaseBit = RONIN_UTIL::FirstBitValue<uint16>(phaseMask)) != 0xFF)
        {
            phaseMask &= ~(1<<phaseBit);
            if((iter = m_phaseStorage.find(phaseBit)) == m_phaseStorage.end())
            {
                objectStorage = new MapCellObjectStorage(phaseBit);
                m_phaseStorage.insert(std::make_pair(phaseBit, objectStorage));
            } else objectStorage = iter->second;

            objectStorage->AddObject(obj);
        }
    }
}

void MapCellObjectStorage::AddObject(WorldObject *obj)
{
    m_objectSet.push_back(obj);
}

void MapCell::RemoveObject(WorldObject* obj)
{
    MapCell::CellObjectSet::iterator itr;
    if((itr = std::find(m_fullSet.begin(), m_fullSet.end(), obj)) != m_fullSet.end())
        m_fullSet.erase(itr);

    if(obj->IsPlayer())
    {
        if((itr = std::find(m_objectSet.begin(), m_objectSet.end(), obj)) != m_objectSet.end())
            m_objectSet.erase(itr);
        if((itr = std::find(m_playerSet.begin(), m_playerSet.end(), obj)) != m_playerSet.end())
            m_playerSet.erase(itr);
        return;
    }

    Loki::AssocVector<uint8, MapCellObjectStorage*>::iterator iter;
    if(uint32 conditionId = obj->getConditionID())
    {
        if((iter = m_conditionStorage.find(conditionId)) != m_conditionStorage.end())
            iter->second->RemoveObject(obj);
    }
    else if(uint32 eventId = obj->getEventID())
    {
        if((iter = m_eventStorage.find(eventId)) != m_eventStorage.end())
            iter->second->RemoveObject(obj);
    }
    else if(obj->GetPhaseMask() & 0x8000)
    {
        if((itr = std::find(m_objectSet.begin(), m_objectSet.end(), obj)) != m_objectSet.end())
            m_objectSet.erase(itr);
    }
    else
    {
        uint8 phaseBit;
        uint16 phaseMask = obj->GetPhaseMask();
        while((phaseBit = RONIN_UTIL::FirstBitValue<uint16>(phaseMask)) != 0xFF)
        {
            phaseMask &= ~(1<<phaseBit);
            if((iter = m_phaseStorage.find(phaseBit)) != m_phaseStorage.end())
                iter->second->RemoveObject(obj);
        }
    }

}

bool MapCell::HasPlayers(uint16 phaseMask)
{
    return !m_playerSet.empty();
}

void MapCellObjectStorage::RemoveObject(WorldObject *obj)
{
    MapCell::CellObjectSet::iterator itr;
    if((itr = std::find(m_objectSet.begin(), m_objectSet.end(), obj)) != m_objectSet.end())
        m_objectSet.erase(itr);
}

void MapCell::FillObjectSets(WorldObject *obj, std::set<WoWGuid> &guids, std::set<WorldObject*> &objs, uint16 phaseMask, std::vector<uint32> conditionAccess, std::vector<uint32> eventAccess)
{
    Loki::AssocVector<uint8, MapCellObjectStorage*>::iterator iter;
    // Check active conditions and map conditions to see what we have here
    for(std::vector<uint32>::iterator itr = conditionAccess.begin(); itr != conditionAccess.end(); itr++)
    {
        if((iter = m_conditionStorage.find(*itr)) == m_conditionStorage.end() || iter->second->isEmpty())
            continue;
        for(MapCell::CellObjectSet::iterator itr2 = iter->second->GetObjectSet()->begin(); itr2 != iter->second->GetObjectSet()->end(); itr2++)
        {
            if(obj == *itr2)
                continue;
            if((*itr2)->IsActiveObject() && !(*itr2)->IsActivated())
                continue;

            guids.insert((*itr2)->GetGUID());
            if(!obj->IsInRangeSet(*itr2))
                objs.insert(*itr2);
        }
    }

    // Check active events or event access to see what we have here
    for(std::vector<uint32>::iterator itr = eventAccess.begin(); itr != eventAccess.end(); itr++)
    {
        if((iter = m_eventStorage.find(*itr)) == m_eventStorage.end() || iter->second->isEmpty())
            continue;
        for(MapCell::CellObjectSet::iterator itr2 = iter->second->GetObjectSet()->begin(); itr2 != iter->second->GetObjectSet()->end(); itr2++)
        {
            if(obj == *itr2)
                continue;
            if((*itr2)->IsActiveObject() && !(*itr2)->IsActivated())
                continue;

            guids.insert((*itr2)->GetGUID());
            if(!obj->IsInRangeSet(*itr2))
                objs.insert(*itr2);
        }
    }

    // We're parsing based on bits directly, not on masked 32bit values, if we're capped return false here
    for(Loki::AssocVector<uint8, MapCellObjectStorage*>::iterator iter = m_phaseStorage.begin(); iter != m_phaseStorage.end(); iter++)
    {
        if((phaseMask & (((uint32)1) << iter->first)) == 0 || iter->second->isEmpty())
            continue;
        for(MapCell::CellObjectSet::iterator itr = iter->second->GetObjectSet()->begin(); itr != iter->second->GetObjectSet()->end(); itr++)
        {
            if(obj == *itr)
                continue;
            if((*itr)->IsActiveObject() && !(*itr)->IsActivated())
                continue;

            guids.insert((*itr)->GetGUID());
            if(!obj->IsInRangeSet(*itr))
                objs.insert(*itr);
        }
    }

    // Check anything leftover in all other subphases
    for(MapCell::CellObjectSet::iterator itr = m_objectSet.begin(); itr != m_objectSet.end(); itr++)
    {
        if(obj == *itr)
            continue;
        if((*itr)->IsActiveObject() && !(*itr)->IsActivated())
            continue;

        guids.insert((*itr)->GetGUID());
        if(!obj->IsInRangeSet(*itr))
            objs.insert(*itr);
    }
}

void MapCell::ProcessSetRemovals(WorldObject *obj, ObjectRemovalCallback *callback, bool forced)
{
    for(MapCell::CellObjectSet::iterator itr = m_fullSet.begin(); itr != m_fullSet.end(); itr++)
        (*callback)(obj, (*itr)->GetGUID(), forced);
}

void MapCell::SetActivity(bool state)
{
    uint32 x = _x/8, y = _y/8;
    if(state && _unloadpending)
        CancelPendingUnload();
    else if(!state && !_unloadpending)
        QueueUnloadPending();
    _active = state;
}

uint32 MapCell::LoadCellData(CellSpawns * sp)
{
    if(_loaded == true)
        return 0;

    // start calldown for cell map loading
    _mapData->CellLoaded(_x, _y);
    _loaded = true;

    // check if we have a spawn map, otherwise no use continuing
    if(sp == NULL)
        return 0;

    uint32 loadCount = 0, mapId = _instance->GetMapId();
    //MapInstance *pInstance = NULL;//_instance->IsInstance() ? castPtr<InstanceMgr>(_instance) : NULL;
    if(sp->CreatureSpawns.size())//got creatures
    {
        for(CreatureSpawnList::iterator i=sp->CreatureSpawns.begin();i!=sp->CreatureSpawns.end();++i)
        {
            CreatureSpawn *spawn = *i;
            if(Creature *c = _instance->CreateCreature(spawn->guid))
            {
                c->Load(mapId, spawn->x, spawn->y, spawn->z, spawn->o, _instance->iInstanceMode, spawn);
                c->SetInstanceID(_instance->GetInstanceID());
                if(!c->CanAddToWorld())
                {
                    c->Destruct();
                    continue;
                }

                c->PushToWorld(_instance);
                loadCount++;
            }
        }
    }

    if(sp->GameObjectSpawns.size())//got GOs
    {
        for(GameObjectSpawnList::iterator i = sp->GameObjectSpawns.begin(); i != sp->GameObjectSpawns.end(); i++)
        {
            GameObjectSpawn *spawn = *i;
            if(GameObject *go = _instance->CreateGameObject(spawn->guid))
            {
                go->Load(mapId, spawn->x, spawn->y, spawn->z, 0.f, spawn->rX, spawn->rY, spawn->rZ, spawn->rAngle, spawn);
                go->SetInstanceID(_instance->GetInstanceID());

                go->PushToWorld(_instance);
                loadCount++;
            }
        }
    }
    return loadCount;
}

void MapCell::UnloadCellData(bool preDestruction)
{
    if(_loaded == false)
        return;

    _loaded = false;
    for(Loki::AssocVector<uint8, MapCellObjectStorage*>::iterator itr = m_phaseStorage.begin(); itr != m_phaseStorage.end(); itr++)
    {
        itr->second->UnloadCellData(_unloadpending, preDestruction);
        if( !preDestruction && _unloadpending )
            continue;
        delete itr->second;
        itr->second = NULL;
    }

    if( preDestruction || !_unloadpending )
        m_phaseStorage.clear();

    if(m_fullSet.size())
    {
        std::set<WorldObject*> deletionSet;
        //This time it's simpler! We just remove everything :)
        for(MapCell::CellObjectSet::iterator itr = m_fullSet.begin(); itr != m_fullSet.end(); itr++)
        {
            WorldObject *obj = (*itr);
            if(obj == NULL)
                continue;

            if( !preDestruction && _unloadpending )
            {
                if(obj->GetHighGUID() == HIGHGUID_TYPE_TRANSPORTER)
                    continue;

                if(obj->GetTypeId() == TYPEID_CORPSE && obj->GetUInt32Value(CORPSE_FIELD_OWNER) != 0)
                    continue;
            }

            if( obj->IsInWorld())
                obj->RemoveFromWorld();

            deletionSet.insert(obj);
        }
        m_fullSet.clear();

        while(deletionSet.size())
        {
            WorldObject *obj = *deletionSet.begin();
            deletionSet.erase(deletionSet.begin());
            obj->Destruct();
        }
    }

    // Start calldown for cell map unloading
    _mapData->CellUnloaded(_x, _y);
}

void MapCellObjectStorage::UnloadCellData(bool pendingUnload, bool preDestruction)
{
    if(m_objectSet.size())
    {
        //This time it's simpler! We just remove everything :)
        MapCell::CellObjectSet set(m_objectSet);
        for(MapCell::CellObjectSet::iterator itr = set.begin(); itr != set.end(); itr++)
        {
            WorldObject *obj = (*itr);
            if(obj == NULL)
                continue;

            if( !preDestruction && pendingUnload )
            {
                if(obj->GetHighGUID() == HIGHGUID_TYPE_TRANSPORTER)
                    continue;

                if(obj->GetTypeId() == TYPEID_CORPSE && obj->GetUInt32Value(CORPSE_FIELD_OWNER) != 0)
                    continue;
            }

            if( obj->IsInWorld())
                obj->RemoveFromWorld();

            obj->Destruct();
        }
        m_objectSet.clear();
    }
}

void MapCell::QueueUnloadPending()
{
    if(_unloadpending)
        return;

    _unloadpending = true;
    sLog.Debug("MapCell", "Queueing pending unload of cell %u %u", _x, _y);
}

void MapCell::CancelPendingUnload()
{
    sLog.Debug("MapCell", "Cancelling pending unload of cell %u %u", _x, _y);
    if(!_unloadpending)
        return;
}

void MapCell::Unload()
{
    if(_active)
        return;

    sLog.Debug("MapCell", "Unloading cell %u %u", _x, _y);
    UnloadCellData(false);
    _unloadpending = false;
}
