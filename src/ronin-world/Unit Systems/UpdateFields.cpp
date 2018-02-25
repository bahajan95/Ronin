
#include "StdAfx.h"

uint16 ObjectUpdateFieldFlags[OBJECT_LENGTH] =
{
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID+1
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_DATA
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_DATA+1
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_TYPE
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_ENTRY
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_SCALE_X
    UF_FLAG_NONE,                                           // OBJECT_FIELD_PADDING
};

uint16 ItemUpdateFieldFlags[ITEM_LENGTH] =
{
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_OWNER
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_OWNER+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_CONTAINED
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_CONTAINED+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_CREATOR
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_CREATOR+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_GIFTCREATOR
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_GIFTCREATOR+1
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_STACK_COUNT
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_DURATION
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_SPELL_CHARGES
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_SPELL_CHARGES+1
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_SPELL_CHARGES+2
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_SPELL_CHARGES+3
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_SPELL_CHARGES+4
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_FLAGS
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_1_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_1_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_1_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_2_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_2_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_2_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_3_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_3_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_3_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_4_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_4_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_4_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_5_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_5_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_5_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_6_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_6_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_6_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_7_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_7_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_7_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_8_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_8_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_8_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_9_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_9_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_9_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_10_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_10_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_10_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_11_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_11_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_11_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_12_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_12_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_12_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_13_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_13_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_13_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_14_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_14_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_14_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_15_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_15_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_15_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_PROPERTY_SEED
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_RANDOM_PROPERTIES_ID
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_DURABILITY
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_MAXDURABILITY
    UF_FLAG_PUBLIC                                          // ITEM_FIELD_CREATE_PLAYED_TIME
};

uint16 ContainerUpdateFieldFlags[CONTAINER_LENGTH] =
{
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_NUM_SLOTS
    UF_FLAG_NONE,                                           // CONTAINER_ALIGN_PAD
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+1
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+2
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+3
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+4
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+5
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+6
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+7
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+8
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+9
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+10
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+11
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+12
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+13
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+14
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+15
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+16
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+17
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+18
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+19
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+20
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+21
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+22
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+23
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+24
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+25
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+26
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+27
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+28
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+29
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+30
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+31
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+32
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+33
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+34
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+35
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+36
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+37
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+38
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+39
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+40
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+41
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+42
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+43
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+44
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+45
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+46
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+47
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+48
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+49
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+50
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+51
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+52
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+53
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+54
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+55
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+56
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+57
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+58
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+59
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+60
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+61
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+62
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+63
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+64
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+65
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+66
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+67
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+68
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+69
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+70
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+71
};

uint16 UnitUpdateFieldFlags[UNIT_LENGTH] =
{
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHARM
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHARM+1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_SUMMON
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_SUMMON+1
    UF_FLAG_PRIVATE,                                        // UNIT_FIELD_CRITTER
    UF_FLAG_PRIVATE,                                        // UNIT_FIELD_CRITTER+1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHARMEDBY
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHARMEDBY+1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_SUMMONEDBY
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_SUMMONEDBY+1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CREATEDBY
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CREATEDBY+1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_TARGET
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_TARGET+1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHANNEL_OBJECT
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHANNEL_OBJECT+1
    UF_FLAG_PUBLIC,                                         // UNIT_CHANNEL_SPELL
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BYTES_0
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_HEALTH
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER2
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER3
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER4
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER5
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXHEALTH
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER2
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER3
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER4
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | 0x80,                 // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | 0x80,                 // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | 0x80,                 // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | 0x80,                 // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | 0x80,                 // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | 0x80,                 // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | 0x80,                 // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | 0x80,                 // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | 0x80,                 // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | 0x80,                 // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER+4
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_LEVEL
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_FACTIONTEMPLATE
    UF_FLAG_PUBLIC,                                         // UNIT_VIRTUAL_ITEM_SLOT_ID
    UF_FLAG_PUBLIC,                                         // UNIT_VIRTUAL_ITEM_SLOT_ID+1
    UF_FLAG_PUBLIC,                                         // UNIT_VIRTUAL_ITEM_SLOT_ID+2
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_FLAGS
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_FLAGS_2
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_AURASTATE
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BASEATTACKTIME
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BASEATTACKTIME+1
    UF_FLAG_PRIVATE,                                        // UNIT_FIELD_RANGEDATTACKTIME
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BOUNDINGRADIUS
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_COMBATREACH
    UF_FLAG_DYNAMIC,                                        // UNIT_FIELD_DISPLAYID
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_NATIVEDISPLAYID
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MOUNTDISPLAYID
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_MINDAMAGE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_MAXDAMAGE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_MINOFFHANDDAMAGE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_MAXOFFHANDDAMAGE
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BYTES_1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_PETNUMBER
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_PET_NAME_TIMESTAMP
    UF_FLAG_OWNER,                                          // UNIT_FIELD_PETEXPERIENCE
    UF_FLAG_OWNER,                                          // UNIT_FIELD_PETNEXTLEVELEXP
    UF_FLAG_DYNAMIC,                                        // UNIT_DYNAMIC_FLAGS
    UF_FLAG_PUBLIC,                                         // UNIT_MOD_CAST_SPEED
    UF_FLAG_PUBLIC|UF_FLAG_DYNAMIC,                         // UNIT_MOD_CAST_HASTE
    UF_FLAG_PUBLIC,                                         // UNIT_CREATED_BY_SPELL
    UF_FLAG_DYNAMIC,                                        // UNIT_NPC_FLAGS
    UF_FLAG_PUBLIC,                                         // UNIT_NPC_EMOTESTATE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_STAT0
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_STAT1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_STAT2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_STAT3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_STAT4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POSSTAT0
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POSSTAT1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POSSTAT2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POSSTAT3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POSSTAT4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_NEGSTAT0
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_NEGSTAT1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_NEGSTAT2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_NEGSTAT3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_NEGSTAT4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+6
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+6
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+6
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BASE_MANA
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_BASE_HEALTH
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BYTES_2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_ATTACK_POWER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_ATTACK_POWER_MOD_POS
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_ATTACK_POWER_MOD_NEG
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_ATTACK_POWER_MULTIPLIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RANGED_ATTACK_POWER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RANGED_ATTACK_POWER_MOD_POS
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RANGED_ATTACK_POWER_MOD_NEG
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_MINRANGEDDAMAGE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_MAXRANGEDDAMAGE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+6
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+6
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_MAXHEALTHMODIFIER
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_HOVERHEIGHT
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXITEMLEVEL
    UF_FLAG_NONE                                            // UNIT_FIELD_PADDING
};

uint16 PlayerUpdateFieldFlags[PLAYER_LENGTH] =
{
    UF_FLAG_PUBLIC,                                         // PLAYER_DUEL_ARBITER
    UF_FLAG_PUBLIC,                                         // PLAYER_DUEL_ARBITER+1
    UF_FLAG_PUBLIC,                                         // PLAYER_FLAGS
    UF_FLAG_PUBLIC,                                         // PLAYER_GUILDRANK
    UF_FLAG_PUBLIC,                                         // PLAYER_GUILDDELETE_DATE
    UF_FLAG_PUBLIC,                                         // PLAYER_GUILDLEVEL
    UF_FLAG_PUBLIC,                                         // PLAYER_BYTES
    UF_FLAG_PUBLIC,                                         // PLAYER_BYTES_2
    UF_FLAG_PUBLIC,                                         // PLAYER_BYTES_3
    UF_FLAG_PUBLIC,                                         // PLAYER_DUEL_TEAM
    UF_FLAG_PUBLIC,                                         // PLAYER_GUILD_TIMESTAMP
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_1_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_1_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_1_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_1_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_1_4
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_2_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_2_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_2_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_2_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_2_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_3_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_3_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_3_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_3_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_3_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_4_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_4_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_4_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_4_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_4_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_5_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_5_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_5_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_5_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_5_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_6_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_6_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_6_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_6_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_6_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_7_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_7_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_7_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_7_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_7_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_8_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_8_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_8_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_8_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_8_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_9_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_9_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_9_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_9_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_9_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_10_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_10_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_10_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_10_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_10_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_11_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_11_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_11_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_11_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_11_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_12_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_12_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_12_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_12_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_12_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_13_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_13_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_13_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_13_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_13_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_14_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_14_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_14_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_14_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_14_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_15_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_15_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_15_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_15_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_15_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_16_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_16_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_16_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_16_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_16_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_17_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_17_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_17_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_17_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_17_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_18_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_18_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_18_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_18_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_18_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_19_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_19_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_19_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_19_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_19_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_20_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_20_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_20_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_20_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_20_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_21_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_21_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_21_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_21_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_21_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_22_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_22_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_22_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_22_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_22_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_23_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_23_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_23_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_23_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_23_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_24_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_24_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_24_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_24_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_24_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_25_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_25_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_25_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_25_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_25_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_26_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_26_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_26_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_26_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_26_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_27_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_27_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_27_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_27_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_27_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_28_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_28_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_28_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_28_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_28_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_29_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_29_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_29_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_29_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_29_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_30_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_30_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_30_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_30_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_30_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_31_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_31_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_31_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_31_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_31_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_32_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_32_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_32_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_32_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_32_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_33_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_33_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_33_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_33_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_33_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_34_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_34_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_34_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_34_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_34_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_35_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_35_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_35_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_35_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_35_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_36_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_36_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_36_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_36_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_36_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_37_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_37_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_37_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_37_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_37_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_38_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_38_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_38_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_38_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_38_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_39_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_39_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_39_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_39_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_39_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_40_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_40_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_40_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_40_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_40_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_41_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_41_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_41_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_41_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_41_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_42_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_42_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_42_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_42_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_42_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_43_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_43_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_43_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_43_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_43_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_44_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_44_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_44_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_44_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_44_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_45_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_45_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_45_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_45_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_45_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_46_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_46_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_46_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_46_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_46_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_47_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_47_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_47_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_47_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_47_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_48_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_48_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_48_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_48_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_48_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_49_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_49_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_49_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_49_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_49_5
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_50_1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_50_2
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_50_3
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_50_3+1
    UF_FLAG_PRIVATE | UF_FLAG_PARTY_MEMBER,                 // PLAYER_QUEST_LOG_50_5
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_1_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_1_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_2_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_2_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_3_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_3_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_4_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_4_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_5_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_5_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_6_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_6_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_7_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_7_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_8_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_8_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_9_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_9_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_10_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_10_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_11_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_11_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_12_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_12_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_13_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_13_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_14_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_14_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_15_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_15_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_16_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_16_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_17_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_17_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_18_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_18_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_19_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_19_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_CHOSEN_TITLE
    UF_FLAG_PUBLIC,                                         // PLAYER_FAKE_INEBRIATION
    UF_FLAG_NONE,                                           // PLAYER_FIELD_PAD_0
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+24
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+25
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+26
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+27
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+28
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+29
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+30
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+31
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+32
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+33
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+34
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+35
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+36
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+37
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+38
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+39
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+40
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+41
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+42
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+43
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+44
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+45
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+25
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+26
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+27
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+28
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+29
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+30
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+31
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+25
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+26
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+27
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+28
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+29
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+30
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+31
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+32
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+33
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+34
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+35
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+36
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+37
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+38
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+39
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+40
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+41
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+42
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+43
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+44
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+45
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+46
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+47
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+48
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+49
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+50
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+51
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+52
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+53
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+54
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+55
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FARSIGHT
    UF_FLAG_PRIVATE,                                        // PLAYER_FARSIGHT+1
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES+1
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES1
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES1+1
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES2
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES2+1
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES3
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES3+1
    UF_FLAG_PRIVATE,                                        // PLAYER_XP
    UF_FLAG_PRIVATE,                                        // PLAYER_NEXT_LEVEL_XP
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+1
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+2
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+3
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+4
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+5
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+6
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+7
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+8
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+9
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+10
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+11
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+12
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+13
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+14
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+15
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+16
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+17
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+18
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+19
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+20
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+21
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+22
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+23
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+24
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+25
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+26
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+27
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+28
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+29
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+30
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+31
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+32
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+33
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+34
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+35
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+36
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+37
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+38
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+39
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+40
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+41
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+42
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+43
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+44
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+45
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+46
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+47
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+48
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+49
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+50
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+51
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+52
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+53
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+54
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+55
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+56
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+57
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+58
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+59
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+60
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+61
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+62
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_LINEID_0+63
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+1
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+2
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+3
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+4
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+5
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+6
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+7
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+8
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+9
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+10
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+11
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+12
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+13
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+14
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+15
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+16
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+17
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+18
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+19
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+20
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+21
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+22
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+23
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+24
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+25
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+26
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+27
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+28
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+29
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+30
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+31
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+32
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+33
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+34
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+35
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+36
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+37
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+38
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+39
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+40
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+41
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+42
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+43
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+44
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+45
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+46
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+47
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+48
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+49
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+50
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+51
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+52
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+53
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+54
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+55
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+56
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+57
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+58
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+59
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+60
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+61
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+62
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_STEP_0+63
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+1
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+2
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+3
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+4
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+5
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+6
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+7
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+8
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+9
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+10
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+11
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+12
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+13
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+14
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+15
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+16
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+17
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+18
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+19
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+20
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+21
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+22
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+23
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+24
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+25
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+26
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+27
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+28
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+29
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+30
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+31
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+32
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+33
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+34
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+35
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+36
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+37
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+38
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+39
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+40
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+41
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+42
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+43
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+44
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+45
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+46
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+47
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+48
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+49
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+50
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+51
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+52
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+53
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+54
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+55
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+56
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+57
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+58
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+59
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+60
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+61
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+62
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_RANK_0+63
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+1
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+2
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+3
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+4
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+5
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+6
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+7
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+8
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+9
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+10
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+11
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+12
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+13
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+14
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+15
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+16
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+17
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+18
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+19
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+20
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+21
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+22
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+23
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+24
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+25
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+26
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+27
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+28
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+29
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+30
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+31
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+32
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+33
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+34
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+35
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+36
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+37
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+38
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+39
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+40
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+41
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+42
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+43
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+44
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+45
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+46
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+47
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+48
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+49
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+50
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+51
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+52
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+53
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+54
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+55
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+56
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+57
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+58
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+59
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+60
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+61
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+62
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MAX_RANK_0+63
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+1
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+2
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+3
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+4
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+5
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+6
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+7
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+8
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+9
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+10
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+11
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+12
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+13
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+14
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+15
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+16
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+17
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+18
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+19
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+20
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+21
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+22
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+23
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+24
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+25
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+26
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+27
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+28
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+29
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+30
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+31
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+32
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+33
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+34
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+35
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+36
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+37
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+38
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+39
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+40
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+41
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+42
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+43
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+44
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+45
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+46
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+47
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+48
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+49
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+50
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+51
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+52
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+53
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+54
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+55
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+56
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+57
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+58
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+59
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+60
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+61
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+62
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_MODIFIER_0+63
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+1
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+2
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+3
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+4
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+5
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+6
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+7
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+8
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+9
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+10
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+11
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+12
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+13
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+14
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+15
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+16
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+17
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+18
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+19
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+20
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+21
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+22
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+23
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+24
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+25
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+26
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+27
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+28
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+29
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+30
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+31
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+32
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+33
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+34
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+35
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+36
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+37
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+38
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+39
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+40
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+41
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+42
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+43
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+44
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+45
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+46
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+47
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+48
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+49
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+50
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+51
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+52
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+53
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+54
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+55
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+56
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+57
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+58
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+59
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+60
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+61
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+62
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_TALENT_0+63
    UF_FLAG_PRIVATE,                                        // PLAYER_CHARACTER_POINTS
    UF_FLAG_PRIVATE,                                        // PLAYER_TRACK_CREATURES
    UF_FLAG_PRIVATE,                                        // PLAYER_TRACK_RESOURCES
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPERTISE
    UF_FLAG_PRIVATE,                                        // PLAYER_OFFHAND_EXPERTISE
    UF_FLAG_PRIVATE,                                        // PLAYER_BLOCK_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_DODGE_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_PARRY_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_CRIT_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_RANGED_CRIT_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_OFFHAND_CRIT_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_SHIELD_BLOCK
    UF_FLAG_PRIVATE,                                        // PLAYER_SHIELD_BLOCK_CRIT_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_MASTERY
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+25
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+26
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+27
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+28
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+29
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+30
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+31
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+32
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+33
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+34
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+35
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+36
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+37
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+38
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+39
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+40
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+41
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+42
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+43
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+44
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+45
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+46
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+47
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+48
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+49
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+50
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+51
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+52
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+53
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+54
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+55
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+56
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+57
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+58
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+59
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+60
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+61
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+62
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+63
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+64
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+65
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+66
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+67
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+68
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+69
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+70
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+71
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+72
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+73
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+74
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+75
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+76
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+77
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+78
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+79
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+80
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+81
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+82
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+83
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+84
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+85
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+86
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+87
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+88
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+89
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+90
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+91
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+92
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+93
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+94
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+95
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+96
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+97
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+98
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+99
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+100
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+101
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+102
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+103
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+104
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+105
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+106
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+107
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+108
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+109
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+110
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+111
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+112
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+113
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+114
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+115
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+116
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+117
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+118
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+119
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+120
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+121
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+122
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+123
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+124
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+125
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+126
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+127
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+128
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+129
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+130
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+131
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+132
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+133
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+134
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+135
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+136
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+137
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+138
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+139
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+140
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+141
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+142
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+143
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+144
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+145
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+146
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+147
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+148
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+149
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+150
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+151
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+152
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+153
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+154
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+155
    UF_FLAG_PRIVATE,                                        // PLAYER_REST_STATE_EXPERIENCE
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COINAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COINAGE+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_HEALING_DONE_POS
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_HEALING_PCT
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_HEALING_DONE_PCT
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_WEAPON_DMG_MULTIPLIERS
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_WEAPON_DMG_MULTIPLIERS+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_WEAPON_DMG_MULTIPLIERS+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_SPELL_POWER_PCT
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_OVERRIDE_SPELL_POWER_BY_AP_PCT
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_TARGET_RESISTANCE
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BYTES
    UF_FLAG_PRIVATE,                                        // PLAYER_SELF_RES_SPELL
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PVP_MEDALS
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KILLS
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_LIFETIME_HONORBALE_KILLS
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BYTES2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_WATCHED_FACTION_INDEX
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+25
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BATTLEGROUND_RATING
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MAX_LEVEL
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_RUNE_REGEN_1
    UF_FLAG_PRIVATE,                                        // PLAYER_RUNE_REGEN_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_RUNE_REGEN_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_RUNE_REGEN_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_NO_REAGENT_COST_1
    UF_FLAG_PRIVATE,                                        // PLAYER_NO_REAGENT_COST_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_NO_REAGENT_COST_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_GLYPHS_ENABLED
    UF_FLAG_PRIVATE,                                        // PLAYER_PET_SPELL_POWER
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESEARCHING_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESEARCHING_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESEARCHING_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESEARCHING_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESEARCHING_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESEARCHING_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESEARCHING_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESEARCHING_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESERACH_SITE_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESERACH_SITE_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESERACH_SITE_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESERACH_SITE_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESERACH_SITE_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESERACH_SITE_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESERACH_SITE_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_RESERACH_SITE_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_PROFESSION_SKILL_LINE_1
    UF_FLAG_PRIVATE,                                        // PLAYER_PROFESSION_SKILL_LINE_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_UI_HIT_MODIFIER
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_UI_SPELL_HIT_MODIFIER
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_HOME_REALM_TIME_OFFSET
    UF_FLAG_PRIVATE|UF_FLAG_DYNAMIC,                        // PLAYER_FIELD_MOD_HASTE
    UF_FLAG_PRIVATE|UF_FLAG_DYNAMIC,                        // PLAYER_FIELD_MOD_RANGED_HASTE
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_PET_HASTE
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_HASTE_REGEN
};

uint16 GameObjectUpdateFieldFlags[GAMEOBJECT_LENGTH] =
{
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_FIELD_CREATED_BY
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_FIELD_CREATED_BY+1
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_DISPLAYID
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_FLAGS
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_PARENTROTATION
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_PARENTROTATION+1
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_PARENTROTATION+2
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_PARENTROTATION+3
    UF_FLAG_DYNAMIC,                                        // GAMEOBJECT_DYNAMIC
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_FACTION
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_LEVEL
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_BYTES_1
};

uint16 DynamicObjectUpdateFieldFlags[DYNAMICOBJECT_LENGTH] =
{
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_CASTER
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_CASTER+1
    UF_FLAG_DYNAMIC,                                        // DYNAMICOBJECT_BYTES
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_SPELLID
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_RADIUS
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_CASTTIME
};

uint16 CorpseUpdateFieldFlags[CORPSE_LENGTH] =
{
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_OWNER
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_OWNER+1
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_PARTY
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_PARTY+1
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_DISPLAY_ID
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+1
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+2
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+3
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+4
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+5
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+6
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+7
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+8
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+9
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+10
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+11
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+12
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+13
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+14
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+15
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+16
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+17
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+18
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_BYTES_1
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_BYTES_2
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_FLAGS
    UF_FLAG_DYNAMIC,                                        // CORPSE_FIELD_DYNAMIC_FLAGS
};

uint16 AreaTriggerUpdateFieldFlags[AREATRIGGER_LENGTH] =
{
    UF_FLAG_PUBLIC,                                         // AREATRIGGER_SPELLID
    UF_FLAG_PUBLIC,                                         // AREATRIGGER_SPELLVISUALID
    UF_FLAG_PUBLIC,                                         // AREATRIGGER_DURATION
    UF_FLAG_PUBLIC,                                         // AREATRIGGER_FINAL_POS
    UF_FLAG_PUBLIC,                                         // AREATRIGGER_FINAL_POS+1
    UF_FLAG_PUBLIC,                                         // AREATRIGGER_FINAL_POS+2
};
