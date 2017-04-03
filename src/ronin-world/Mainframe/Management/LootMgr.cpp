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

#include "StdAfx.h"

initialiseSingleton(LootMgr);

struct loot_tb
{
    uint32 itemid;
    float chance;
};

bool Rand(float chance)
{
    float val = RandomFloat(10000.0f);
    float p = chance * 100.0f;
    return p >= val;
}

bool Rand(uint32 chance)
{
    int32 val = RandomUInt(10000);
    int32 p = int32(chance * 100);
    return p >= val;
}

bool Rand(int32 chance)
{
    int32 val = RandomUInt(10000);
    int32 p = chance * 100;
    return p >= val;
}

template <class T>  // works for anything that has the field 'chance' and is stored in plain array
const T& RandomChoice( const T* variant, int count )
{
    float totalChance = 0;
    for( int i = 0; i < count; i++)
        totalChance += variant[i].chance;

    float val = RandomFloat(totalChance);
    for( int i = 0; i < count; i++)
    {
        val -= variant[i].chance;
        if (val <= 0) return variant[i];
    }
    // should not come here, buf if it does, we should return something reasonable
    return variant[count-1];
}

template <class T>  // works for anything that has the field 'chance' and is stored in plain array
T* RandomChoiceVector( std::vector<std::pair<T*, float> > & variant )
{
    float totalChance = 0;
    float val;
    typename std::vector<std::pair<T*,float> >::iterator itr;

    if(variant.size() == 0)
        return NULL;

    for(itr = variant.begin(); itr != variant.end(); itr++)
        totalChance += itr->second;

    val = RandomFloat(totalChance);

    for(itr = variant.begin(); itr != variant.end(); itr++)
    {
        val -= itr->second;
        if (val <= 0) return itr->first;
    }
    // should not come here, buf if it does, we should return something reasonable
    return variant.begin()->first;
}

LootMgr::LootMgr()
{
    is_loading = false;
}

/*  Guidlines for loading loot:
    Crow: Heavier loot should be loaded first.
    If it has more than 3k, do a delayed load.
*/
void LootMgr::LoadLoot()
{
    //THIS MUST BE CALLED AFTER LOADING OF ITEMS
    is_loading = true;
    LoadLootProp();
    sLog.Debug("LootMgr","Loading loot...");
    LoadLootTables(LOOT_FISHING, &FishingLoot, false);
    is_loading = false;
}

void LootMgr::LoadDelayedLoot()
{
    is_loading = true;
    LoadLootTables(LOOT_CREATURE, &CreatureLoot, true);
    LoadLootTables(LOOT_GAMEOBJECT, &GOLoot, true);
    LoadLootTables(LOOT_GATHERING, &GatheringLoot, true);
    LoadLootTables(LOOT_ITEMS, &ItemLoot, false);
    LoadLootTables(LOOT_PICKPOCKETING, &PickpocketingLoot, false);
    is_loading = false;
}

void LootMgr::GenerateRandomProperties(__LootItem *item)
{
    item->randProp = item->randSeed = 0;
    if(item->proto->RandomPropId == 0 && item->proto->RandomSuffixId == 0)
        return;
    if(item->proto->RandomPropId)
    {

    }
    else
    {

    }
}

void LootMgr::LoadLootProp()
{
    QueryResult * result = WorldDatabase.Query("SELECT * FROM item_randomprop_groups");
    uint32 id, eid;
    ItemRandomPropertiesEntry * rp;
    ItemRandomSuffixEntry * rs;
    float ch;

    if(result)
    {
        std::map<uint32, RandomPropertyVector>::iterator itr;
        do
        {
            id = result->Fetch()[0].GetUInt32();
            eid = result->Fetch()[1].GetUInt32();
            ch = result->Fetch()[2].GetFloat();

            rp = dbcItemRandomProperties.LookupEntry(eid);
            if(rp == NULL)
            {
                sLog.Error("LoadLootProp", "RandomProp group %u references non-existant randomprop %u.", id, eid);
                continue;
            }

            itr = _randomprops.find(id);
            if(itr == _randomprops.end())
            {
                RandomPropertyVector v;
                v.push_back(std::make_pair(rp, ch));
                _randomprops.insert(std::make_pair(id, v));
            } else itr->second.push_back(std::make_pair(rp,ch));

        } while(result->NextRow());
        delete result;
    }

    result = WorldDatabase.Query("SELECT * FROM item_randomsuffix_groups");
    if(result)
    {
        std::map<uint32, RandomSuffixVector>::iterator itr;
        do
        {
            id = result->Fetch()[0].GetUInt32();
            eid = result->Fetch()[1].GetUInt32();
            ch = result->Fetch()[2].GetFloat();

            rs = dbcItemRandomSuffix.LookupEntry(eid);
            if(rs == NULL)
            {
                sLog.Error("LoadLootProp", "RandomSuffix group %u references non-existant randomsuffix %u.", id, eid);
                continue;
            }

            itr = _randomsuffix.find(id);
            if(itr == _randomsuffix.end())
            {
                RandomSuffixVector v;
                v.push_back(std::make_pair(rs, ch));
                _randomsuffix.insert(std::make_pair(id, v));
            } else itr->second.push_back(std::make_pair(rs,ch));

        } while(result->NextRow());
        delete result;
    }
}

#define LOOT_CLEANUP_MACRO(lootstore) for(LootStore::iterator iter=lootstore.begin(); iter != lootstore.end(); iter++)\
    {\
        for(StoreLootList::iterator itr = iter->second.begin(); itr != iter->second.end(); itr++)\
        {\
            delete [] (*itr)->chance;\
            delete (*itr);\
        }\
        iter->second.clear();\
    }

LootMgr::~LootMgr()
{
    sLog.Notice("LootMgr","Deleting Loot Tables...");
    LOOT_CLEANUP_MACRO(CreatureLoot);
    LOOT_CLEANUP_MACRO(FishingLoot);
    LOOT_CLEANUP_MACRO(GatheringLoot);
    LOOT_CLEANUP_MACRO(GOLoot);
    LOOT_CLEANUP_MACRO(ItemLoot);
    LOOT_CLEANUP_MACRO(PickpocketingLoot);
}

#undef LOOT_CLEANUP_MACRO

void LootMgr::LoadLootTables(const char * szTableName, LootStore * LootTable, bool MultiDifficulty)
{
    sLog.Debug("LootMgr","Attempting to load loot from table %s...", szTableName);

    QueryResult *result = WorldDatabase.Query("SELECT * FROM %s ORDER BY entryid ASC",szTableName);
    if(result == NULL)
    {
        sLog.Error("LootMgr", "Loading loot from table %s failed.", szTableName);
        return;
    }

    if(MultiDifficulty) // We have multiple difficulties.
    {
        if(result->GetFieldCount() != 8)
        {
            sLog.Error("LootMgr", "Incorrect structure in table %s(%u/8), loot loading has been cancled to prevent a crash.", szTableName, result->GetFieldCount());
            return;
        }
    }
    else if(result->GetFieldCount() != 5)
    {
        sLog.Error("LootMgr", "Incorrect structure in table %s(%u/5), loot loading has been cancled to prevent a crash.", szTableName, result->GetFieldCount());
        return;
    }

    bool cleanDatabase = mainIni->ReadBoolean("Server", "CleanDatabase", false);
    uint32 count = 0;
    Field *fields = NULL;
    do
    {
        fields = result->Fetch();
        uint32 entry = fields[0].GetUInt32();
        uint32 itemId = fields[1].GetUInt32();
        ItemPrototype *proto = sItemMgr.LookupEntry(itemId);
        if(proto == NULL)
        {
            if(cleanDatabase)
                WorldDatabase.Query("DELETE FROM %s where entryid ='%u' AND itemid = '%u'", szTableName, entry, itemId);
            sLog.Warning("LootMgr", "Loot in %s for %u contains non-existant item(%u).", szTableName, entry, itemId);
            continue;
        }

        StoreLootItem *lootItem = new StoreLootItem();
        lootItem->proto = proto;
        if(lootItem->multiChance = MultiDifficulty) // We have multiple difficulties.
        {
            lootItem->chance = new float[4];
            for(int8 i = 0; i < 4; i++)
            {
                if((lootItem->chance[i] = fields[2+i].GetFloat()) == -1.f)
                    lootItem->chance[i] = RandomFloat(100.f);
            }

            lootItem->minCount = fields[6].GetUInt32();
            lootItem->maxCount = fields[7].GetUInt32();
            for(uint i = 0; i < 4; i++)
                if(lootItem->chance[i] == -1.0f)
                    lootItem->chance[i] = RandomFloat(100.f);
        }
        else // We have one chance, regardless of difficulty.
        {
            if(((lootItem->chance = new float[1])[0] = fields[2].GetFloat()) == -1.f)
                lootItem->chance[0] = RandomFloat(100.f);
            lootItem->minCount = fields[3].GetUInt32();
            lootItem->maxCount = fields[4].GetUInt32();
        }

        // Quest processing
        if(proto->Class == ITEM_CLASS_QUEST)
        {
            std::vector<uint32> *LootSet = NULL;
            if(LootTable == &GOLoot)
            {
                if(_gameobjectquestloot.find(entry) == _gameobjectquestloot.end())
                {
                    LootSet = &_gameobjectquestloot[entry];
                } else LootSet = &_gameobjectquestloot.at(entry);
            }
            else if(LootTable == &CreatureLoot)
            {
                if(_creaturequestloot.find(entry) == _creaturequestloot.end())
                {
                    LootSet = &_creaturequestloot[entry];
                } else LootSet = &_creaturequestloot.at(entry);
            }

            if(LootSet && LootSet->size() <= 5)
                LootSet->push_back(proto->ItemId);
        }

        // Store the item in the loot list
        (*LootTable)[entry].insert(lootItem);
    } while( result->NextRow() );

    sLog.Notice("LootMgr", "%d loot templates loaded from %s", LootTable->size(), szTableName);
    delete result;
}

void LootMgr::PushLoot(StoreLootList *list, ObjectLoot *loot, uint8 difficulty, uint8 team, bool disenchant)
{
    uint32 i;
    uint32 count;
    float nrand = 0;
    float ncount = 0;
    assert(difficulty < 4);

    if (disenchant)
    {
        nrand = RandomUInt(10000) / 100.0f;
        ncount = 0;
    }

    for(auto itr = list->begin(); itr != list->end(); itr++)
    {
        StoreLootItem *storeLoot = (*itr);
        if(storeLoot->proto == NULL)
            continue;

        float chance = storeLoot->chance[difficulty];
        if(chance == 0.0f)
            continue;

        int lucky;
        if (disenchant)
        {
            lucky = nrand >= ncount && nrand <= (ncount+chance);
            ncount+= chance;
        } else lucky = Rand( chance * sWorld.getRate( RATE_DROP0 + storeLoot->proto->Quality ) );

        if( lucky )
        {
            if( storeLoot->minCount < storeLoot->maxCount )
                count = RandomUInt(storeLoot->maxCount - storeLoot->minCount) + storeLoot->minCount;
            else count = storeLoot->maxCount;

            __LootItem itm;
            itm.roll = NULL;
            itm.proto = storeLoot->proto;
            itm.StackSize = count;
            itm.all_passed = false;
            itm.has_looted.clear();
            GenerateRandomProperties(&itm);

            loot->items.push_back(itm);
            if(loot->items.size() == 16)
                break;
        }
    }

    if( loot->items.size() > 16 )
    {
        std::vector<__LootItem>::iterator item_to_remove;
        std::vector<__LootItem>::iterator itr;
        int32 item_quality;
        bool quest_item;
        while( loot->items.size() > 16 )
        {
            item_to_remove = loot->items.begin();
            item_quality = 0;
            quest_item = false;
            for( itr = loot->items.begin(); itr != loot->items.end(); itr++ )
            {
                item_quality = (*itr).proto->Quality;
                quest_item = (*itr).proto->Class == ITEM_CLASS_QUEST;
                if( (*item_to_remove).proto->Quality > item_quality && !quest_item )
                {
                    item_to_remove = itr;
                }
            }
            loot->items.erase( item_to_remove );
        }
    }

}

void LootMgr::FillCreatureLoot(ObjectLoot * loot,uint32 loot_id, uint8 difficulty, uint8 team)
{
    loot->items.clear();
    loot->gold = 0;

    LootStore::iterator tab = CreatureLoot.find(loot_id);
    if( CreatureLoot.end() == tab)
        return;
    PushLoot(&tab->second, loot, difficulty, team, false);
}

void LootMgr::FillGOLoot(ObjectLoot * loot,uint32 loot_id, uint8 difficulty, uint8 team)
{
    loot->items.clear ();
    loot->gold = 0;

    LootStore::iterator tab = GOLoot.find(loot_id);
    if( GOLoot.end() == tab)
        return;
    PushLoot(&tab->second, loot, difficulty, team, false);
}

void LootMgr::FillFishingLoot(ObjectLoot * loot,uint32 loot_id)
{
    loot->items.clear();
    loot->gold = 0;

    LootStore::iterator tab = FishingLoot.find(loot_id);
    if( FishingLoot.end() == tab)
        return;
    PushLoot(&tab->second, loot, 0, 0, false);
}

void LootMgr::FillGatheringLoot(ObjectLoot * loot,uint32 loot_id)
{
    loot->items.clear();
    loot->gold = 0;

    LootStore::iterator tab = GatheringLoot.find(loot_id);
    if(tab == GatheringLoot.end())
        return;
    PushLoot(&tab->second, loot, 0, 0, false);
}

void LootMgr::FillPickpocketingLoot(ObjectLoot * loot,uint32 loot_id)
{
    loot->items.clear();
    loot->gold = 0;

    LootStore::iterator tab = PickpocketingLoot.find(loot_id);
    if( PickpocketingLoot.end() == tab)
        return;
    PushLoot(&tab->second, loot, 0, 0, false);
}

void LootMgr::FillItemLoot(ObjectLoot *loot, uint32 loot_id, uint8 team)
{
    loot->items.clear();
	// Todo: item gold
    loot->gold = 0 * sWorld.getRate(RATE_MONEY);

    LootStore::iterator tab = ItemLoot.find(loot_id);
    if( ItemLoot.end()==tab)
        return;
    PushLoot(&tab->second, loot, 0, team, false);
}

bool LootMgr::CanGODrop(uint32 LootId,uint32 itemid)
{
    LootStore::iterator tab =GOLoot.find(LootId);
    if( GOLoot.end() == tab)
        return false;
    StoreLootList *list = &tab->second;
    for(auto itr = list->begin(); itr != list->end(); itr++)
        if((*itr)->proto->ItemId == itemid)
            return true;
    return false;
}

//THIS should be cached
bool LootMgr::IsPickpocketable(uint32 creatureId)
{
    LootStore::iterator tab = PickpocketingLoot.find(creatureId);
    if( PickpocketingLoot.end() == tab)
        return false;
    return true;
}

//THIS should be cached
bool LootMgr::IsSkinnable(uint32 creatureId)
{
    LootStore::iterator tab = GatheringLoot.find(creatureId);
    if( tab != GatheringLoot.end())
        return true;
    return false;
}

//THIS should be cached
bool LootMgr::IsFishable(uint32 zoneid)
{
    LootStore::iterator tab = FishingLoot.find(zoneid);
    return tab != FishingLoot.end();
}

void LootMgr::AddLoot(ObjectLoot* loot, uint32 itemid, uint32 mincount, uint32 maxcount, uint32 ffa_loot)
{
    uint32 i;
    uint32 count;
    ItemPrototype *itemproto = sItemMgr.LookupEntry(itemid);

    if( itemproto )// this check is needed until loot DB is fixed
    {
        if( mincount == maxcount )
            count = maxcount;
        else
            count = RandomUInt(maxcount - mincount) + mincount;

        for( i = 0; i < loot->items.size(); i++ )
        {
            //itemid rand match a already placed item, if item is stackable and unique(stack), increment it, otherwise skips
            if((loot->items[i].proto == itemproto) && itemproto->MaxCount > 0 && ((loot->items[i].StackSize + count <= (uint32)itemproto->MaxCount)))
            {
                if(itemproto->Unique > 0 && ((loot->items[i].StackSize+count) < (uint32)itemproto->Unique))
                {
                    loot->items[i].StackSize += count;
                    break;
                }
                else if (!itemproto->Unique)
                {
                    loot->items[i].StackSize += count;
                    break;
                }
            }
        }

        if( i != loot->items.size() )
            return;

        __LootItem itm;
        itm.proto = itemproto;
        itm.StackSize = count;
        itm.roll = NULL;
        itm.all_passed = false;
        itm.has_looted.clear();
        GenerateRandomProperties(&itm);
        loot->items.push_back(itm);
    }
}

LootRoll::LootRoll()
{
}

void LootRoll::Init(uint32 timer, uint32 groupcount, uint64 guid, uint32 slotid, uint32 itemid, uint32 randProp, uint32 randSeed, MapInstance* instance)
{
    _instance = instance;
    _groupcount = groupcount;
    _guid = guid;
    _slotid = slotid;
    _itemid = itemid;
    _randomProp = randProp;
    _randomSeed = randSeed;
    _remaining = groupcount;
}

LootRoll::~LootRoll()
{

}

void LootRoll::Finalize()
{
    if( !mLootLock.AttemptAcquire() ) // only one finalization, please. players on different maps can roll, too, so this is needed.
        return;

    // this we will have to finalize with groups types.. for now
    // we'll just assume need before greed. person with highest roll
    // in need gets the item.

    uint32 highest = 0;
    int8 hightype = -1;
    uint64 player = 0;

    WorldPacket data(34);

    for(std::map<WoWGuid, uint32>::iterator itr = m_NeedRolls.begin(); itr != m_NeedRolls.end(); itr++)
    {
        if(itr->second > highest)
        {
            highest = itr->second;
            player = itr->first;
            hightype = NEED;
        }
    }

    if(!highest)
    {
        for(std::map<WoWGuid, uint32>::iterator itr = m_GreedRolls.begin(); itr != m_GreedRolls.end(); itr++)
        {
            if(itr->second > highest)
            {
                highest = itr->second;
                player = itr->first;
                hightype = GREED;
            }
        }

        for(std::map<WoWGuid, uint32>::iterator itr = m_DisenchantRolls.begin(); itr != m_DisenchantRolls.end(); itr++)
        {
            if(itr->second > highest)
            {
                highest = itr->second;
                player = itr->first;
                hightype = DISENCHANT;
            }
        }
    }


    ObjectLoot * pLoot = 0;
    uint32 guidtype = GUID_HIPART(_guid);
    if( guidtype == HIGHGUID_TYPE_UNIT )
    {
        if(Creature* pc = _instance->GetCreature(_guid))
            pLoot = pc->GetLoot();
    }
    else if( guidtype == HIGHGUID_TYPE_GAMEOBJECT )
    {
        if(GameObject* go = _instance->GetGameObject(_guid))
            pLoot = go->GetLoot();
    }

    if(!pLoot)
    {
        delete this;
        return;
    }

    if(_slotid >= pLoot->items.size())
    {
        delete this;
        return;
    }

    pLoot->items.at(_slotid).roll = NULL;

    uint32 itemid = pLoot->items.at(_slotid).proto->ItemId;
    uint32 amt = pLoot->items.at(_slotid).StackSize;
    if(!amt)
    {
        delete this;
        return;
    }

    Player* _player = (player) ? _instance->GetPlayer((uint32)player) : NULL;
    if(!player || !_player)
    {
        /* all passed */
        data.Initialize(SMSG_LOOT_ALL_PASSED);
        data << _guid << _groupcount << _itemid << _randomProp << _randomSeed;
        std::set<WoWGuid>::iterator pitr = m_passRolls.begin();
        while(_player == NULL && pitr != m_passRolls.end())
        {
            _player = _instance->GetPlayer( (*(pitr)) );
            ++pitr;
        }

        if( _player != NULL )
        {
            if(_player->InGroup())
                _player->GetGroup()->SendPacketToAll(&data);
            else _player->PushPacket(&data);
        }

        /* item can now be looted by anyone :) */
        pLoot->items.at(_slotid).all_passed = true;
        delete this;
        return;
    }

    pLoot->items.at(_slotid).roll = 0;
    data.Initialize(SMSG_LOOT_ROLL_WON);
    data << _guid << _slotid << _itemid << _randomProp << _randomSeed;
    data << _player->GetGUID() << uint8(highest) << uint8(hightype);
    if(_player->InGroup())
        _player->GetGroup()->SendPacketToAll(&data);
    else _player->PushPacket(&data);

    if(hightype == DISENCHANT)
    {
        // TODO:LOOT DISENCHANT

        // Set a looter, doesn't matter who.
        pLoot->items.at(_slotid).has_looted.insert(_player->GetLowGUID());

        //Send "finish" packet
        data.Initialize(SMSG_LOOT_REMOVED);
        data << uint8(_slotid);
        for(LooterSet::iterator itr = pLoot->looters.begin(); itr != pLoot->looters.end(); itr++)
            if(Player *plr = _player->GetMapInstance()->GetPlayer(*itr))
                plr->PushPacket(&data);
        delete this;    //end here and skip the rest
        return;
    }

    // TODO:LOOT

    // Set a looter, doesn't matter who.
    pLoot->items.at(_slotid).has_looted.insert(_player->GetLowGUID());

    // this gets sent to all looters
    data.Initialize(SMSG_LOOT_REMOVED);
    data << uint8(_slotid);
    for(LooterSet::iterator itr = pLoot->looters.begin(); itr != pLoot->looters.end(); itr++)
        if(Player *plr = _player->GetMapInstance()->GetPlayer(*itr))
            plr->PushPacket(&data);
    delete this;
}

void LootRoll::PlayerRolled(PlayerInfo* pInfo, uint8 choice)
{
    if(m_NeedRolls.find(pInfo->charGuid) != m_NeedRolls.end() || m_GreedRolls.find(pInfo->charGuid) != m_GreedRolls.end() || m_DisenchantRolls.find(pInfo->charGuid) != m_DisenchantRolls.end())
        return; // dont allow cheaters

    ItemPrototype* proto = sItemMgr.LookupEntry(_itemid);
    if(proto == NULL)
        return; // Shouldn't happen.

    mLootLock.Acquire();

    int roll = RandomUInt(99)+1;
    // create packet
    WorldPacket data(SMSG_LOOT_ROLL, 34);
    data << _guid << _slotid << pInfo->charGuid;
    data << _itemid << _randomProp << _randomSeed;

    if(!pInfo->m_loggedInPlayer)
        choice = PASS;
    bool acceptableroll = true;
    switch(choice)
    {
    case NEED:
        {
            if(pInfo->m_loggedInPlayer->CanNeedItem(proto))
            {
                m_NeedRolls.insert( std::make_pair(pInfo->charGuid, roll) );
                data << uint8(roll) << uint8(NEED);
            }
            else
            {
                m_passRolls.insert( pInfo->charGuid );
                data << uint8(128) << uint8(128);
            }
        }break;
    case GREED:
        {
            m_GreedRolls.insert( std::make_pair(pInfo->charGuid, roll) );
            data << uint8(roll) << uint8(GREED);
        }break;
    case DISENCHANT:
        {
            /*if(acceptableroll)
            {
                if(proto->DisenchantReqSkill < 0)
                    acceptableroll = false;
                else if(pInfo->m_Group)
                    acceptableroll = pInfo->m_Group->HasAcceptableDisenchanters(proto->DisenchantReqSkill);
                else
                    acceptableroll = (pInfo->m_loggedInPlayer->_HasSkillLine(333) && (pInfo->m_loggedInPlayer->_GetSkillLineCurrent(333) > uint32(proto->DisenchantReqSkill)));
            }*/

            if(acceptableroll)
            {
                m_DisenchantRolls.insert( std::make_pair(pInfo->charGuid, roll) );
                data << uint8(roll) << uint8(DISENCHANT);
            }
            else
            {
                m_passRolls.insert( pInfo->charGuid );
                data << uint8(128) << uint8(128);
            }
        }break;
    default: //pass
        {
            m_passRolls.insert( pInfo->charGuid );
            data << uint8(128) << uint8(128);
        }break;
    }

    data << uint8(0);

    if(pInfo->m_Group)
        pInfo->m_Group->SendPacketToAll(&data);
    else if(pInfo->m_loggedInPlayer)
        pInfo->m_loggedInPlayer->PushPacket(&data);

    // check for early completion
    if(!--_remaining)
    {
        mLootLock.Release(); // so we can call the other lock in a sec.
        // kill event early
        Finalize();
        return;
    }

    mLootLock.Release();
}

int32 LootRoll::event_GetInstanceID()
{
    return _instance->GetInstanceID();
}

void LootMgr::FillObjectLootMap(std::map<uint32, std::vector<uint32> > *dest)
{
    sLog.Debug("LootMgr","Generating object loot map...");
    QueryResult *result = WorldDatabase.Query("SELECT entryid, itemid FROM objectloot");
    if( result != NULL )
    {
        do
        {
            uint32 itemid = result->Fetch()[1].GetUInt32();
            uint32 objid = result->Fetch()[0].GetUInt32();

            std::map<uint32, std::vector<uint32> >::iterator vtr = dest->find(itemid);
            if( vtr == dest->end() )
            {
                std::vector<uint32> tv;
                tv.push_back(objid);
                dest->insert(std::make_pair(itemid, tv));
            } else vtr->second.push_back(objid);
        } while (result->NextRow());
        delete result;
    }
}

bool ObjectLoot::HasLoot(Player* Looter)
{
    // check gold
    if( gold > 0 )
        return true;

    return HasItems(Looter);
}

bool ObjectLoot::HasItems(Player* Looter)
{
    // check items
    for(std::vector<__LootItem>::iterator itr = items.begin(); itr != items.end(); itr++)
    {
        if(itr->has_looted.size())
            continue;

        ItemPrototype * proto = itr->proto;
        if(proto == NULL)
            continue;
        //quest items check. type 4/5
        //quest items that dont start quests.
        if((proto->Bonding == ITEM_BIND_QUEST) && !(proto->QuestId) && !Looter->HasQuestForItem(proto->ItemId))
            continue;
        if((proto->Bonding == ITEM_BIND_QUEST2) && !(proto->QuestId) && !Looter->HasQuestForItem(proto->ItemId))
            continue;

        //quest items that start quests need special check to avoid drops all the time.
        if((proto->Bonding == ITEM_BIND_QUEST) && (proto->QuestId) && Looter->GetQuestLogForEntry(proto->QuestId))
            continue;
        if((proto->Bonding == ITEM_BIND_QUEST2) && (proto->QuestId) && Looter->GetQuestLogForEntry(proto->QuestId))
            continue;
        if((proto->Bonding == ITEM_BIND_QUEST) && (proto->QuestId) && Looter->HasFinishedQuest(proto->QuestId))
            continue;
        if((proto->Bonding == ITEM_BIND_QUEST2) && (proto->QuestId) && Looter->HasFinishedQuest(proto->QuestId))
            continue;

        //check for starting item quests that need questlines.
        if((proto->QuestId && proto->Bonding != ITEM_BIND_QUEST && proto->Bonding != ITEM_BIND_QUEST2))
        {
            bool HasRequiredQuests = true;
            Quest * pQuest = sQuestMgr.GetQuestPointer(proto->QuestId);
            if(pQuest == NULL)
                continue;

            //check if its a questline.
            for(uint32 i = 0; i < pQuest->count_requiredquests; i++)
            {
                if(pQuest->required_quests[i])
                {
                    if(Looter->HasFinishedQuest(pQuest->required_quests[i]) || !Looter->GetQuestLogForEntry(pQuest->required_quests[i]))
                    {
                        HasRequiredQuests = false;
                        break;
                    }
                }
            }

            if(!HasRequiredQuests)
                continue;
        }
        return true;
    }
    return false;
}

