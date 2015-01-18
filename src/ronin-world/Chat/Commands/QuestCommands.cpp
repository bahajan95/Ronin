/***
 * Demonstrike Core
 */

#include "StdAfx.h"

class ChatHandler;

RONIN_INLINE std::string MyConvertIntToString(const int arg)
{
    std::stringstream out;
    out << arg;
    return out.str();
}

RONIN_INLINE std::string MyConvertFloatToString(const float arg)
{
    std::stringstream out;
    out << arg;
    return out.str();
}

std::string RemoveQuestFromPlayer(Player* plr, Quest *qst)
{
    std::string recout = "|cff00ff00";
    bool has = false;

    if ( plr->HasFinishedQuest(qst->id) )
    {
        if( plr->m_completedQuests.find(qst->id) != plr->m_completedQuests.end())
        {
            plr->m_completedQuests.erase(qst->id);
            recout += "Quest removed from finished quests history.\n\n";
            has = true;
        }
    }

    if ( plr->HasFinishedDailyQuest(qst->id) )
    {
        if( plr->m_completedDailyQuests.find(qst->id) != plr->m_completedDailyQuests.end())
        {
            plr->m_completedDailyQuests.erase(qst->id);
            recout += "Quest removed from finished dailies history.\n\n";
            has = true;
        }
    }

    if (plr->HasQuests())
    {
        QuestLogEntry * qLogEntry = plr->GetQuestLogForEntry(qst->id);
        if (qLogEntry)
        {
            CALL_QUESTSCRIPT_EVENT(qst->id, OnQuestCancel)(plr);
            qLogEntry->Finish();

            uint32 srcItem = qst->srcitem;
            // always remove collected items (need to be recollectable again in case of repeatable).
            for( uint32 y = 0; y < 6; y++)
                if( qst->required_item[y] && qst->required_item[y] != srcItem )
                    plr->GetItemInterface()->RemoveInventoryStacks(qst->required_item[y], qst->required_itemcount[y]);

            // Remove all items given by the questgiver at the beginning
            for(uint32 i = 0; i < 4; i++)
                if(qst->receive_items[i] && qst->receive_items[i] != srcItem)
                    plr->GetItemInterface()->RemoveInventoryStacks(qst->receive_items[i], qst->receive_itemcount[i] );
            plr->UpdateNearbyQuestGivers();
            plr->UpdateNearbyGameObjects();
        }
        recout += "Quest removed from current quest log.";
        has = true;
    }

    if(!has)
        recout += "Quest not found on player.";

    recout += "\n\n";

    return recout;

}

bool ChatHandler::HandleQuestLookupCommand(const char * args, WorldSession * m_session)
{
    if(!*args) return false;

    std::string x = std::string(args);
    RONIN_UTIL::TOLOWER(x);
    if(x.length() < 4)
    {
        RedSystemMessage(m_session, "Your search string must be at least 5 characters long.");
        return true;
    }

    BlueSystemMessage(m_session, "Starting search of quests `%s`...", x.c_str());
    uint32 t = getMSTime();

    QuestStorageMap::iterator itr = sQuestMgr.GetQuestStorageBegin(), itrend = sQuestMgr.GetQuestStorageEnd();

    Quest * i;
    uint32 count = 0;
    std::string y, recout;

    while(itr != itrend)
    {
        i = itr->second;

        y = std::string(i->qst_title);
        RONIN_UTIL::TOLOWER(y);

        if(RONIN_UTIL::FindXinYString(x, y))
        {
            std::string questid = MyConvertIntToString(i->id);
            const char * questtitle = i->qst_title;
            recout = "|cff00ccff";
            recout += questid.c_str();
            recout += ": ";
            recout += questtitle;
            recout += "\n";
            SendMultilineMessage(m_session, recout.c_str());

            ++count;
            if(count == 25)
            {
                RedSystemMessage(m_session, "More than 25 results returned. aborting.");
                break;
            }
        }
        itr++;
    }

    if (count == 0)
    {
        recout = "|cff00ccffNo matches found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
    }

    BlueSystemMessage(m_session, "Search completed in %u ms.", getMSTime() - t);

    return true;
}

bool ChatHandler::HandleQuestStatusCommand(const char * args, WorldSession * m_session)
{
    if(!*args) return false;

    Player* plr = getSelectedChar(m_session, true);
    if(!plr)
    {
        plr = m_session->GetPlayer();
        SystemMessage(m_session, "Auto-targeting self.");
    }

    uint32 quest_id = atol(args);
    std::string recout = "|cff00ff00";

    Quest * qst = sQuestMgr.GetQuestPointer(quest_id);
    if(qst)
    {
        if (plr->HasFinishedQuest(quest_id) || plr->HasFinishedDailyQuest(quest_id))
            recout += "Player has already completed that quest.";
        else
        {
            QuestLogEntry * IsPlrOnQuest = plr->GetQuestLogForEntry(quest_id);
            if (IsPlrOnQuest)
                recout += "Player is currently on that quest.";
            else
                recout += "Player has NOT finished that quest.";
        }
    }
    else
    {
        recout += "Quest Id [";
        recout += args;
        recout += "] was not found and unable to add it to the player's quest log.";
    }

    recout += "\n\n";

    SendMultilineMessage(m_session, recout.c_str());

    return true;
}

bool ChatHandler::HandleQuestStartCommand(const char * args, WorldSession * m_session)
{
    if(!*args) return false;

    Player* plr = getSelectedChar(m_session, true);
    if(!plr)
    {
        plr = m_session->GetPlayer();
        SystemMessage(m_session, "Auto-targeting self.");
    }

    uint32 quest_id = atol(args);
    std::string recout = "|cff00ff00";

    Quest * qst = sQuestMgr.GetQuestPointer(quest_id);
    if(qst)
    {
        if (plr->HasFinishedQuest(quest_id) || plr->HasFinishedDailyQuest(quest_id))
            recout += "Player has already completed that quest.";
        else
        {
            QuestLogEntry * IsPlrOnQuest = plr->GetQuestLogForEntry(quest_id);
            if (IsPlrOnQuest)
                recout += "Player is currently on that quest.";
            else
            {
                int32 open_slot = plr->GetOpenQuestSlot();

                if (open_slot == -1)
                {
                    sQuestMgr.SendQuestLogFull(plr);
                    recout += "Player's quest log is full.";
                }
                else
                {
                    QuestLogEntry *qle = new QuestLogEntry();
                    qle->Init(qst, plr, (uint32)open_slot);
                    qle->UpdatePlayerFields();

                    CALL_QUESTSCRIPT_EVENT(quest_id, OnQuestStart)(plr, qle);

                    // If the quest should give any items on begin, give them the items.
                    for(uint8 i = 0; i < 4; i++)
                    {
                        if(qst->receive_items[i] == 0)
                            continue;
                        if(ItemPrototype *proto = sItemMgr.LookupEntry(qst->receive_items[i]))
                            plr->GetItemInterface()->CreateInventoryStacks(proto, qst->receive_itemcount[i]);
                    }

                    if(qst->srcitem && qst->srcitem != qst->receive_items[0])
                    {
                        if(ItemPrototype *proto = sItemMgr.LookupEntry(qst->srcitem))
                            plr->GetItemInterface()->CreateInventoryStacks(proto, std::max(uint16(1), qst->srcitemcount));
                    }

                    plr->UpdateNearbyGameObjects();

                    sHookInterface.OnQuestAccept( plr, qst, NULL );

                    recout += "Quest has been added to the player's quest log.";
                }
            }
        }
    }
    else
    {
        recout += "Quest Id [";
        recout += args;
        recout += "] was not found and unable to add it to the player's quest log.";
    }

    recout += "\n\n";

    SendMultilineMessage(m_session, recout.c_str());
    return true;
}

bool ChatHandler::HandleQuestFinishCommand(const char * args, WorldSession * m_session)
{
    if(!*args)
        return false;

    Player* plr = getSelectedChar(m_session, true);
    if(!plr)
    {
        plr = m_session->GetPlayer();
        SystemMessage(m_session, "Auto-targeting self.");
    }

    uint32 quest_id = atol(args);
    std::string recout = "|cff00ff00";

    Quest * qst = sQuestMgr.GetQuestPointer(quest_id);
    if(qst)
    {
        if (plr->HasFinishedQuest(quest_id) || plr->HasFinishedDailyQuest(quest_id))
            recout += "Player has already completed that quest.\n\n";
        else if(qst->qst_is_repeatable == REPEATABLE_DAILY && plr->GetFinishedDailiesCount() >= 25)
            recout += "Player has reached the maximum number of completed daily quests.\n\n";
        else
        {
            QuestLogEntry * IsPlrOnQuest = plr->GetQuestLogForEntry(quest_id);
            if (IsPlrOnQuest)
            {
                uint32 giver_id = 0;
                std::string my_query = "";

                my_query = "SELECT id FROM creature_quest_starter WHERE quest = " + std::string(args);
                QueryResult *creatureResult = WorldDatabase.Query(my_query.c_str());

                if(creatureResult)
                {
                    Field *creatureFields = creatureResult->Fetch();
                    giver_id = creatureFields[0].GetUInt32();
                    delete creatureResult;
                }
                else
                {
                    my_query = "SELECT id FROM gameobject_quest_starter WHERE quest = " + std::string(args);
                    QueryResult *objectResult = WorldDatabase.Query(my_query.c_str());
                    if(objectResult)
                    {
                        Field *objectFields = objectResult->Fetch();
                        giver_id = objectFields[0].GetUInt32();
                        delete objectResult;
                    }
                }

                if(giver_id == 0)
                    SystemMessage(m_session, "Unable to find quest giver creature or object.");
                else
                {
                    // I need some way to get the guid without targeting the creature or looking through all the spawns...
                    WorldObject* quest_giver = NULL;
                    if(quest_giver)
                    {
                        GreenSystemMessage(m_session, "Found a quest_giver creature.");
                        //WorldPacket data;
                        //sQuestMgr.BuildOfferReward(&data, qst, quest_giver, 1);
                        //m_session->SendPacket(&data);
                        sQuestMgr.GiveQuestRewardReputation(plr, qst, quest_giver);
                    } else RedSystemMessage(m_session, "Unable to find quest_giver object.");
                }

                sQuestMgr.GenerateQuestXP(plr, qst);
                sQuestMgr.BuildQuestComplete(plr, qst);

                IsPlrOnQuest->Finish();
                recout += "Player was on that quest, but has now completed it.";
            }
            else
                recout += "The quest has now been completed for that player.";

            if(qst->qst_is_repeatable == REPEATABLE_DAILY)
                plr->AddToCompletedDailyQuests(quest_id);
            else plr->AddToCompletedQuests(quest_id);
        }
    }
    else
    {
        recout += "Quest Id [";
        recout += args;
        recout += "] was not found and unable to add it to the player's quest log.";
    }

    recout += "\n\n";

    SendMultilineMessage(m_session, recout.c_str());

    return true;
}

bool ChatHandler::HandleQuestItemCommand(const char * args, WorldSession * m_session)
{
    if(!*args) return false;

    std::string my_item_lookup = "SELECT item, item_count FROM gameobject_quest_item_binding WHERE quest = " + std::string(args);

    QueryResult *result = WorldDatabase.Query(my_item_lookup.c_str());

    std::string recout;

    if(!result)
    {
        recout = "|cff00ccffNo matches found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
        return true;
    }

    recout = "|cff00ff00Quest item matches: itemid: count -> Name\n\n";
    SendMultilineMessage(m_session, recout.c_str());

    uint32 count = 0;

    do
    {
        Field *fields = result->Fetch();
        uint32 id = fields[0].GetUInt32();
        std::string itemid  = MyConvertIntToString(id);
        std::string itemcnt = MyConvertIntToString(fields[1].GetUInt32());
        ItemPrototype* tmpItem = sItemMgr.LookupEntry(id);
        recout = "|cff00ccff";
        recout += itemid.c_str();
        recout += ": ";
        recout += itemcnt.c_str();
        recout += " -> ";
        recout += tmpItem->Name1;
        recout += "\n";

        SendMultilineMessage(m_session, recout.c_str());

        count++;

        if(count == 25)
        {
            RedSystemMessage(m_session, "More than 25 results returned. aborting.");
            break;
        }
    }while (result->NextRow());

    delete result;

    if (count == 0)
    {
        recout = "|cff00ccffNo matches found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
    }

    return true;
}

bool ChatHandler::HandleQuestGiverCommand(const char * args, WorldSession * m_session)
{
    if(!*args) return false;

    std::string recout;

    std::string my_query1 = "SELECT id FROM creature_quest_starter WHERE quest = " + std::string(args);
    QueryResult *objectResult1 = WorldDatabase.Query(my_query1.c_str());

    if(objectResult1)
    {
        std::string creatureId1 = MyConvertIntToString(objectResult1->Fetch()[0].GetUInt32());
        delete objectResult1;

        if (CreatureData *creatureData = sCreatureDataMgr.GetCreatureData(atol(creatureId1.c_str())))
        {
            my_query1 = "SELECT id FROM creature_spawns WHERE entry = " + creatureId1;
            QueryResult *spawnResult1 = WorldDatabase.Query(my_query1.c_str());

            std::string spawnId1;
            if(spawnResult1)
            {
                Field *fields = spawnResult1->Fetch();
                spawnId1 = fields[0].GetString();

                delete spawnResult1;
            } else spawnId1 = "N/A";

            recout = "|cff00ccffQuest Starter found: creature id, spawnid, name\n\n";
            SendMultilineMessage(m_session, recout.c_str());

            recout = "|cff00ccff";
            recout += creatureId1.c_str();
            recout += ", ";
            recout += spawnId1.c_str();
            recout += ", ";
            recout += creatureData->Name;
            recout += "\n\n";
            SendMultilineMessage(m_session, recout.c_str());
        }
        else
        {
            recout = "|cff00ccffNo creature quest starter info found.\n\n";
            SendMultilineMessage(m_session, recout.c_str());
        }

    }
    else
    {
        recout = "|cff00ccffNo creature quest starters found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
    }

    std::string my_query2 = "SELECT id FROM gameobject_quest_starter WHERE quest = " + std::string(args);
    QueryResult *objectResult2 = WorldDatabase.Query(my_query2.c_str());

    if(objectResult2)
    {
        std::string itemId2 = MyConvertIntToString(objectResult2->Fetch()[0].GetUInt32());
        delete objectResult2;

        if (ItemPrototype *itemResult2 = sItemMgr.LookupEntry(atol(itemId2.c_str())))
        {
            my_query2 = "SELECT id FROM gameobject_spawns WHERE entry = " + itemId2;
            QueryResult *spawnResult2 = WorldDatabase.Query(my_query2.c_str());

            std::string spawnId2;
            if(spawnResult2)
            {
                Field *fields = spawnResult2->Fetch();
                spawnId2 = fields[0].GetString();

                delete spawnResult2;
            } else spawnId2 = "N/A";

            recout = "|cff00ccffQuest starter found: object id, spawnid, name\n\n";
            SendMultilineMessage(m_session, recout.c_str());

            recout = "|cff00ccff";
            recout += itemId2.c_str();
            recout += ", ";
            recout += spawnId2.c_str();
            recout += ", ";
            recout += itemResult2->Name1;
            recout += "\n\n";
            SendMultilineMessage(m_session, recout.c_str());
        }
        else
        {
            recout = "|cff00ccffNo object quest starter info found.\n\n";
            SendMultilineMessage(m_session, recout.c_str());
        }
    }
    else
    {
        recout = "|cff00ccffNo object quest starters found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
    }

    return true;
}

bool ChatHandler::HandleQuestListStarterCommand(const char * args, WorldSession * m_session)
{
    uint32 quest_giver = 0;
    if(*args)
        quest_giver = atol(args);
    else
    {
        WoWGuid guid = m_session->GetPlayer()->GetSelection();
        if (guid.empty())
        {
            SystemMessage(m_session, "You must target an npc or specify an id.");
            return true;
        }

        Creature* unit = m_session->GetPlayer()->GetMapMgr()->GetCreature(guid);
        if(unit!=NULL)
        {
            if (!unit->isQuestGiver())
            {
                SystemMessage(m_session, "Unit is not a valid quest giver.");
                return true;
            }

            if (!unit->HasQuests())
            {
                SystemMessage(m_session, "NPC does not have any quests.");
                return true;
            }

            quest_giver = unit->GetEntry();
        }
    }

    std::string recout = "|cff00ff00Quest matches: id: title\n\n";
    SendMultilineMessage(m_session, recout.c_str());

    uint32 count = 0;
    uint32 quest_id = 0;
    Quest * qst;

    QueryResult *creatureResult = WorldDatabase.Query("SELECT quest FROM creature_quest_starter WHERE id = %u", quest_giver);

    if(!creatureResult)
    {
        recout = "|cff00ccffNo quests found for the specified NPC id.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
        return true;
    }

    do
    {
        Field *fields = creatureResult->Fetch();
        uint32 quest_id = fields[0].GetUInt32();

        qst = sQuestMgr.GetQuestPointer(quest_id);
        if(qst==NULL)
            continue;

        std::string qid  = MyConvertIntToString(quest_id);
        const char * qname = qst->qst_title;

        recout = "|cff00ccff";
        recout += qid.c_str();
        recout += ": ";
        recout += qname;
        recout += "\n";

        SendMultilineMessage(m_session, recout.c_str());

        count++;

        if(count == 25)
        {
            RedSystemMessage(m_session, "More than 25 results returned. aborting.");
            break;
        }
    }while (creatureResult->NextRow());

    delete creatureResult;

    if (count == 0)
    {
        recout = "|cff00ccffNo matches found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
    }

    return true;
}

bool ChatHandler::HandleQuestListFinisherCommand(const char * args, WorldSession * m_session)
{
    uint32 quest_giver = 0;
    if(*args)
        quest_giver = atol(args);
    else
    {
        WoWGuid guid = m_session->GetPlayer()->GetSelection();
        if (guid.empty())
        {
            SystemMessage(m_session, "You must target an npc or specify an id.");
            return true;
        }

        if(Creature* unit = m_session->GetPlayer()->GetMapMgr()->GetCreature(guid))
        {
            if (!unit->isQuestGiver())
            {
                SystemMessage(m_session, "Unit is not a valid quest giver.");
                return true;
            }

            if (!unit->HasQuests())
            {
                SystemMessage(m_session, "NPC does not have any quests.");
                return true;
            }

            quest_giver = unit->GetEntry();
        }
    }

    std::string recout = "|cff00ff00Quest matches: id: title\n\n";
    SendMultilineMessage(m_session, recout.c_str());

    uint32 count = 0;
    uint32 quest_id = 0;
    Quest * qst;

    QueryResult *creatureResult = WorldDatabase.Query("SELECT quest FROM creature_quest_finisher WHERE id = %u", quest_giver);

    if(!creatureResult)
    {
        recout = "|cff00ccffNo quests found for the specified NPC id.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
        return true;
    }

    do
    {
        Field *fields = creatureResult->Fetch();
        uint32 quest_id = fields[0].GetUInt32();

        qst = sQuestMgr.GetQuestPointer(quest_id);
        if(qst==NULL)
            continue;

        std::string qid  = MyConvertIntToString(quest_id);
        const char * qname = qst->qst_title;

        recout = "|cff00ccff";
        recout += qid.c_str();
        recout += ": ";
        recout += qname;
        recout += "\n";

        SendMultilineMessage(m_session, recout.c_str());

        count++;

        if(count == 25)
        {
            RedSystemMessage(m_session, "More than 25 results returned. aborting.");
            break;
        }
    }while (creatureResult->NextRow());

    delete creatureResult;

    if (count == 0)
    {
        recout = "|cff00ccffNo matches found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
    }

    return true;
}

bool ChatHandler::HandleQuestAddStartCommand(const char * args, WorldSession * m_session)
{
    if(!*args) return false;

    WoWGuid guid = m_session->GetPlayer()->GetSelection();
    if (guid.empty())
    {
        SystemMessage(m_session, "You must target an npc.");
        return false;
    }

    Creature* unit = m_session->GetPlayer()->GetMapMgr()->GetCreature(guid);
    if(!unit)
    {
        SystemMessage(m_session, "You must target an npc.");
        return false;
    }

    if (!unit->isQuestGiver())
    {
        SystemMessage(m_session, "Unit is not a valid quest giver.");
        return false;
    }

    uint32 quest_id = atol(args);
    Quest * qst = sQuestMgr.GetQuestPointer(quest_id);

    if (qst == NULL)
    {
        SystemMessage(m_session, "Invalid quest selected, unable to add quest to the specified NPC.");
        return false;
    }

    std::string quest_giver = MyConvertIntToString(unit->GetEntry());

    std::string my_query1 = "SELECT id FROM creature_quest_starter WHERE id = " + quest_giver + " AND quest = " + std::string(args);
    QueryResult *selectResult1 = WorldDatabase.Query(my_query1.c_str());
    if (selectResult1)
    {
        delete selectResult1;
        SystemMessage(m_session, "Quest was already found for the specified NPC.");
    }
    else
    {
        std::string my_insert1 = "INSERT INTO creature_quest_starter (id, quest) VALUES (" + quest_giver + "," + std::string(args) + ")";
        QueryResult *insertResult1 = WorldDatabase.Query(my_insert1.c_str());
        if (insertResult1)
            delete insertResult1;
    }

    std::string my_query2 = "SELECT id FROM gameobject_quest_starter WHERE id = " + quest_giver + " AND quest = " + std::string(args);
    QueryResult *selectResult2 = WorldDatabase.Query(my_query2.c_str());
    if (selectResult2)
        delete selectResult2;
    else
    {
        std::string my_insert2 = "INSERT INTO gameobject_quest_starter (id, quest) VALUES (" + quest_giver + "," + std::string(args) + ")";
        QueryResult *insertResult2 = WorldDatabase.Query(my_insert2.c_str());
        if (insertResult2)
            delete insertResult2;
    }

    sQuestMgr.LoadQuests();

    if ( unit->HasQuests() )
    {
        if(unit->GetQuestRelation(qst->id))
        {
            QuestRelation *qstrel = new QuestRelation();
            qstrel->qst = qst;
            qstrel->type = QUESTGIVER_QUEST_START;
            unit->DeleteQuest(qstrel);
        }
    }
    unit->_LoadQuests();

    const char * qname = qst->qst_title;

    std::string recout = "|cff00ff00Added Quest to NPC as starter: ";
    recout += "|cff00ccff";
    recout += qname;
    recout += "\n\n";
    SendMultilineMessage(m_session, recout.c_str());

    return true;
}

bool ChatHandler::HandleQuestAddFinishCommand(const char * args, WorldSession * m_session)
{
    if(!*args)
        return false;

    WoWGuid guid = m_session->GetPlayer()->GetSelection();
    if (guid.empty())
    {
        SystemMessage(m_session, "You must target an npc.");
        return false;
    }

    Creature* unit = m_session->GetPlayer()->GetMapMgr()->GetCreature(guid);
    if(!unit)
    {
        SystemMessage(m_session, "You must target an npc.");
        return false;
    }

    if (!unit->isQuestGiver())
    {
        SystemMessage(m_session, "Unit is not a valid quest giver.");
        return false;
    }

    uint32 quest_id = atol(args);
    Quest * qst = sQuestMgr.GetQuestPointer(quest_id);

    if (qst == NULL)
    {
        SystemMessage(m_session, "Invalid quest selected, unable to add quest to the specified NPC.");
        return false;
    }

    std::string quest_giver = MyConvertIntToString(unit->GetEntry());
    std::string my_query1 = "SELECT id FROM creature_quest_finisher WHERE id = " + quest_giver + " AND quest = " + std::string(args);
    QueryResult *selectResult1 = WorldDatabase.Query(my_query1.c_str());
    if (selectResult1)
    {
        delete selectResult1;
        SystemMessage(m_session, "Quest was already found for the specified NPC.");
    }
    else
    {
        std::string my_insert1 = "INSERT INTO creature_quest_finisher (id, quest) VALUES (" + quest_giver + "," + std::string(args) + ")";
        QueryResult *insertResult1 = WorldDatabase.Query(my_insert1.c_str());
        if (insertResult1)
            delete insertResult1;
    }

    std::string my_query2 = "SELECT id FROM gameobject_quest_finisher WHERE id = " + quest_giver + " AND quest = " + std::string(args);
    QueryResult *selectResult2 = WorldDatabase.Query(my_query2.c_str());
    if (selectResult2)
        delete selectResult2;
    else
    {
        std::string my_insert2 = "INSERT INTO gameobject_quest_finisher (id, quest) VALUES (" + quest_giver + "," + std::string(args) + ")";
        QueryResult *insertResult2 = WorldDatabase.Query(my_insert2.c_str());
        if (insertResult2)
            delete insertResult2;
    }

    sQuestMgr.LoadQuests();

    if ( unit->HasQuests() )
    {
        if(unit->GetQuestRelation(qst->id))
        {
            QuestRelation *qstrel = new QuestRelation();
            qstrel->qst = qst;
            qstrel->type = QUESTGIVER_QUEST_END;
            unit->DeleteQuest(qstrel);
        }
    }
    unit->_LoadQuests();

    const char * qname = qst->qst_title;

    std::string recout = "|cff00ff00Added Quest to NPC as finisher: ";
    recout += "|cff00ccff";
    recout += qname;
    recout += "\n\n";
    SendMultilineMessage(m_session, recout.c_str());

    return true;
}

bool ChatHandler::HandleQuestAddBothCommand(const char * args, WorldSession * m_session)
{
    if(!*args)
        return false;

    bool bValid = ChatHandler::HandleQuestAddStartCommand(args, m_session);

    if (bValid)
        ChatHandler::HandleQuestAddFinishCommand(args, m_session);

    return true;
}

bool ChatHandler::HandleQuestDelStartCommand(const char * args, WorldSession * m_session)
{
    if(!*args)
        return false;

    WoWGuid guid = m_session->GetPlayer()->GetSelection();
    if (guid.empty())
    {
        SystemMessage(m_session, "You must target an npc.");
        return false;
    }

    Creature* unit = m_session->GetPlayer()->GetMapMgr()->GetCreature(guid);
    if(!unit)
    {
        SystemMessage(m_session, "You must target an npc.");
        return false;
    }

    if (!unit->isQuestGiver())
    {
        SystemMessage(m_session, "Unit is not a valid quest giver.");
        return false;
    }

    uint32 quest_id = atol(args);
    Quest * qst = sQuestMgr.GetQuestPointer(quest_id);
    if (qst == NULL)
    {
        SystemMessage(m_session, "Invalid Quest selected.");
        return false;
    }

    std::string quest_giver = MyConvertIntToString(unit->GetEntry());

    std::string my_query1 = "SELECT id FROM creature_quest_starter WHERE id = " + quest_giver + " AND quest = " + std::string(args);
    if (QueryResult *selectResult1 = WorldDatabase.Query(my_query1.c_str()))
        delete selectResult1;
    else
    {
        SystemMessage(m_session, "Quest was NOT found for the specified NPC.");
        return false;
    }

    std::string my_delete1 = "DELETE FROM creature_quest_starter WHERE id = " + quest_giver + " AND quest = " + std::string(args);
    if (QueryResult *deleteResult1 = WorldDatabase.Query(my_delete1.c_str()))
        delete deleteResult1;

    std::string my_query2 = "SELECT id FROM gameobject_quest_starter WHERE id = " + quest_giver + " AND quest = " + std::string(args);
    if (QueryResult *selectResult2 = WorldDatabase.Query(my_query2.c_str()))
    {
        delete selectResult2;

        std::string my_delete2 = "DELETE FROM gameobject_quest_starter WHERE id = " + quest_giver + " AND quest = " + std::string(args);
        if(QueryResult *deleteResult2 = WorldDatabase.Query(my_delete2.c_str()))
            delete deleteResult2;
    }

    sQuestMgr.LoadQuests();

    if(unit->HasQuests())
    {
        if(unit->GetQuestRelation(quest_id))
        {
            QuestRelation *qstrel = new QuestRelation();
            qstrel->qst = qst;
            qstrel->type = QUESTGIVER_QUEST_START;
            unit->DeleteQuest(qstrel);
        }
    }
    unit->_LoadQuests();

    const char * qname = qst->qst_title;

    std::string recout = "|cff00ff00Deleted Quest from NPC: ";
    recout += "|cff00ccff";
    recout += qname;
    recout += "\n\n";
    SendMultilineMessage(m_session, recout.c_str());

    return true;
}

bool ChatHandler::HandleQuestDelFinishCommand(const char * args, WorldSession * m_session)
{
    if(!*args)
        return false;

    WoWGuid guid = m_session->GetPlayer()->GetSelection();
    if (guid.empty())
    {
        SystemMessage(m_session, "You must target an npc.");
        return false;
    }

    Creature* unit = m_session->GetPlayer()->GetMapMgr()->GetCreature(guid);
    if(!unit)
    {
        SystemMessage(m_session, "You must target an npc.");
        return false;
    }

    if (!unit->isQuestGiver())
    {
        SystemMessage(m_session, "Unit is not a valid quest giver.");
        return false;
    }

    uint32 quest_id = atol(args);
    Quest * qst = sQuestMgr.GetQuestPointer(quest_id);

    if (qst == NULL)
    {
        SystemMessage(m_session, "Invalid Quest selected.");
        return false;
    }

    std::string quest_giver = MyConvertIntToString(unit->GetEntry());

    std::string my_query1 = "SELECT id FROM creature_quest_finisher WHERE id = " + quest_giver + " AND quest = " + std::string(args);
    QueryResult *selectResult1 = WorldDatabase.Query(my_query1.c_str());
    if (selectResult1)
        delete selectResult1;
    else
    {
        SystemMessage(m_session, "Quest was NOT found for the specified NPC.");
        return true;
    }

    std::string my_delete1 = "DELETE FROM creature_quest_finisher WHERE id = " + quest_giver + " AND quest = " + std::string(args);
    QueryResult *deleteResult1 = WorldDatabase.Query(my_delete1.c_str());
    if (deleteResult1)
        delete deleteResult1;

    std::string my_query2 = "SELECT id FROM gameobject_quest_finisher WHERE id = " + quest_giver + " AND quest = " + std::string(args);
    QueryResult *selectResult2 = WorldDatabase.Query(my_query2.c_str());
    if (selectResult2)
    {
        delete selectResult2;

        std::string my_delete2 = "DELETE FROM gameobject_quest_finisher WHERE id = " + quest_giver + " AND quest = " + std::string(args);
        QueryResult *deleteResult2 = WorldDatabase.Query(my_delete2.c_str());
        if (deleteResult2)
            delete deleteResult2;
    }

    sQuestMgr.LoadQuests();
    if(unit->HasQuests())
    {
        if(unit->GetQuestRelation(quest_id))
        {
            QuestRelation *qstrel = new QuestRelation();
            qstrel->qst = qst;
            qstrel->type = QUESTGIVER_QUEST_END;
            unit->DeleteQuest(qstrel);
        }
    }
    unit->_LoadQuests();

    const char * qname = qst->qst_title;

    std::string recout = "|cff00ff00Deleted Quest from NPC: ";
    recout += "|cff00ccff";
    recout += qname;
    recout += "\n\n";
    SendMultilineMessage(m_session, recout.c_str());

    return true;
}

bool ChatHandler::HandleQuestDelBothCommand(const char * args, WorldSession * m_session)
{
    if(!*args)
        return false;

    bool bValid = ChatHandler::HandleQuestDelStartCommand(args, m_session);

    if (bValid)
        ChatHandler::HandleQuestDelFinishCommand(args, m_session);

    return true;
}

bool ChatHandler::HandleQuestFinisherCommand(const char * args, WorldSession * m_session)
{
    if(!*args) return false;

    std::string recout;

    std::string my_query1 = "SELECT id FROM creature_quest_finisher WHERE quest = " + std::string(args);
    QueryResult *objectResult1 = WorldDatabase.Query(my_query1.c_str());

    if(objectResult1)
    {
        Field *fields = objectResult1->Fetch();
        std::string creatureId1 = MyConvertIntToString(fields[0].GetUInt32());

        delete objectResult1;

        std::string creatureName1 = "N/A";
        CreatureData *creatureResult1 = sCreatureDataMgr.GetCreatureData(atol(creatureId1.c_str()));

        if(creatureResult1)
        {
            creatureName1 = creatureResult1->Name;

            my_query1 = "SELECT id FROM creature_spawns WHERE entry = " + creatureId1;
            QueryResult *spawnResult1 = WorldDatabase.Query(my_query1.c_str());

            std::string spawnId1;
            if(spawnResult1)
            {
                Field *fields = spawnResult1->Fetch();
                spawnId1 = fields[0].GetString();

                delete spawnResult1;
            } else spawnId1 = "N/A";

            recout = "|cff00ccffQuest Finisher found: creature id, spawnid, name\n\n";
            SendMultilineMessage(m_session, recout.c_str());

            recout = "|cff00ccff";
            recout += creatureId1.c_str();
            recout += ", ";
            recout += spawnId1.c_str();
            recout += ", ";
            recout += creatureName1.c_str();
            recout += "\n\n";
            SendMultilineMessage(m_session, recout.c_str());
        }
        else
        {
            recout = "|cff00ccffNo creature quest finisher info found.\n\n";
            SendMultilineMessage(m_session, recout.c_str());
        }
    }
    else
    {
        recout = "|cff00ccffNo creature quest finishers found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
    }

    std::string my_query2 = "SELECT id FROM gameobject_quest_finisher WHERE quest = " + std::string(args);
    QueryResult *objectResult2 = WorldDatabase.Query(my_query2.c_str());

    if(objectResult2)
    {
        Field *fields = objectResult2->Fetch();
        std::string itemId2 = MyConvertIntToString(fields[0].GetUInt32());

        delete objectResult2;

        std::string itemName2 = "N/A";
        ItemPrototype *itemResult2 = sItemMgr.LookupEntry(atol(itemId2.c_str()));
        if (itemResult2)
        {
            itemName2 = itemResult2->Name1;

            my_query2 = "SELECT id FROM gameobject_spawns WHERE entry = " + itemId2;
            QueryResult *spawnResult2 = WorldDatabase.Query(my_query2.c_str());

            std::string spawnId2;
            if(spawnResult2)
            {
                Field *fields = spawnResult2->Fetch();
                spawnId2 = fields[0].GetString();

                delete spawnResult2;
            } else spawnId2 = "N/A";

            recout = "|cff00ccffQuest Finisher found: object id, spawnid, name\n\n";
            SendMultilineMessage(m_session, recout.c_str());

            recout = "|cff00ccff";
            recout += itemId2.c_str();
            recout += ", ";
            recout += spawnId2.c_str();
            recout += ", ";
            recout += itemName2.c_str();
            recout += "\n\n";
            SendMultilineMessage(m_session, recout.c_str());
        }
        else
        {
            recout = "|cff00ccffNo object quest finisher info found.\n\n";
            SendMultilineMessage(m_session, recout.c_str());
        }
    }
    else
    {
        recout = "|cff00ccffNo object quest finishers found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
    }

    return true;
}

bool ChatHandler::HandleQuestSpawnCommand(const char * args, WorldSession * m_session)
{
    if(!*args) return false;

    std::string recout;

    std::string my_query = "SELECT id FROM creature_quest_starter WHERE quest = " + std::string(args);
    QueryResult *objectResult = WorldDatabase.Query(my_query.c_str());

    std::string starterId;
    if(objectResult)
    {
        Field *fields = objectResult->Fetch();
        starterId = MyConvertIntToString(fields[0].GetUInt32());
    }
    else
    {
        recout = "|cff00ccffNo quest starters found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
        return true;
    }

    delete objectResult;

    std::string starterName = "N/A";
    CreatureData *creatureResult = sCreatureDataMgr.GetCreatureData(atol(starterId.c_str()));

    if(creatureResult)
        starterName = creatureResult->Name;
    else
    {
        recout = "|cff00ccffNo quest starter info found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
        return true;
    }

    my_query = "SELECT map, position_x, position_y, position_z, orientation FROM creature_spawns WHERE entry = " + starterId;
    QueryResult *spawnResult = WorldDatabase.Query(my_query.c_str());

    if(!spawnResult)
    {
        recout = "|cff00ccffNo spawn location for quest starter was found.\n\n";
        SendMultilineMessage(m_session, recout.c_str());
        return true;
    }

    Field *fields = spawnResult->Fetch();
    uint32 locmap = fields[0].GetUInt32();
    float x = fields[1].GetFloat();
    float y = fields[2].GetFloat();
    float z = fields[3].GetFloat();
    float o = fields[4].GetFloat();

    delete spawnResult;

    recout = "|cff00ccffPorting to Quest Starter/Giver: id, name\n\n";
    SendMultilineMessage(m_session, recout.c_str());

    recout = "|cff00ccff";
    recout += starterId.c_str();
    recout += ", ";
    recout += starterName.c_str();
    recout += "\n\n";
    SendMultilineMessage(m_session, recout.c_str());

    m_session->GetPlayer()->SafeTeleport(locmap, 0, LocationVector(x, y, z, o));

    return true;
}

bool ChatHandler::HandleQuestLoadCommand(const char * args, WorldSession * m_session)
{
    BlueSystemMessage(m_session, "Load of quests from the database has been initiated ...", "");
    uint32 t = getMSTime();

    sQuestMgr.LoadQuests();

    BlueSystemMessage(m_session, "Load completed in %u ms.", getMSTime() - t);

    WoWGuid guid = m_session->GetPlayer()->GetSelection();
    if (guid.empty())
        return true;

    Creature* unit = m_session->GetPlayer()->GetMapMgr()->GetCreature(guid);
    if(!unit)
        return true;

    if (!unit->isQuestGiver())
        return true;

    // If player targeted a questgiver assume they want the NPC reloaded, too
    unit->_LoadQuests();

    return true;
}

bool ChatHandler::HandleQuestRemoveCommand(const char * args, WorldSession * m_session)
{
    if(!*args) return false;

    Player* plr = getSelectedChar(m_session, true);
    if(!plr)
    {
        plr = m_session->GetPlayer();
        SystemMessage(m_session, "Auto-targeting self.");
    }

    std::string recout = "";
    uint32 quest_id = atol(args);
    Quest * qst = sQuestMgr.GetQuestPointer(quest_id);

    if(qst)
        recout = RemoveQuestFromPlayer(plr, qst);
    else recout = "Invalid quest selected, unable to remove.\n\n";

    SystemMessage(m_session, recout.c_str());

    return true;
}

bool ChatHandler::HandleQuestRewardCommand(const char * args, WorldSession * m_session)
{
    if(!*args) return false;

    std::string recout = "";

    recout += "\n\n";
    SendMultilineMessage(m_session, recout.c_str());

    return true;
}