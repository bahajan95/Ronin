
#pragma once

typedef enum
{
    TEXTEMOTE_AGREE          = 1,
    TEXTEMOTE_AMAZE          = 2,
    TEXTEMOTE_ANGRY          = 3,
    TEXTEMOTE_APOLOGIZE      = 4,
    TEXTEMOTE_APPLAUD        = 5,
    TEXTEMOTE_BASHFUL        = 6,
    TEXTEMOTE_BECKON         = 7,
    TEXTEMOTE_BEG            = 8,
    TEXTEMOTE_BITE           = 9,
    TEXTEMOTE_BLEED          = 10,
    TEXTEMOTE_BLINK          = 11,
    TEXTEMOTE_BLUSH          = 12,
    TEXTEMOTE_BONK           = 13,
    TEXTEMOTE_BORED          = 14,
    TEXTEMOTE_BOUNCE         = 15,
    TEXTEMOTE_BRB            = 16,
    TEXTEMOTE_BOW            = 17,
    TEXTEMOTE_BURP           = 18,
    TEXTEMOTE_BYE            = 19,
    TEXTEMOTE_CACKLE         = 20,
    TEXTEMOTE_CHEER          = 21,
    TEXTEMOTE_CHICKEN        = 22,
    TEXTEMOTE_CHUCKLE        = 23,
    TEXTEMOTE_CLAP           = 24,
    TEXTEMOTE_CONFUSED       = 25,
    TEXTEMOTE_CONGRATULATE   = 26,
    TEXTEMOTE_COUGH          = 27,
    TEXTEMOTE_COWER          = 28,
    TEXTEMOTE_CRACK          = 29,
    TEXTEMOTE_CRINGE         = 30,
    TEXTEMOTE_CRY            = 31,
    TEXTEMOTE_CURIOUS        = 32,
    TEXTEMOTE_CURTSEY        = 33,
    TEXTEMOTE_DANCE          = 34,
    TEXTEMOTE_DRINK          = 35,
    TEXTEMOTE_DROOL          = 36,
    TEXTEMOTE_EAT            = 37,
    TEXTEMOTE_EYE            = 38,
    TEXTEMOTE_FART           = 39,
    TEXTEMOTE_FIDGET         = 40,
    TEXTEMOTE_FLEX           = 41,
    TEXTEMOTE_FROWN          = 42,
    TEXTEMOTE_GASP           = 43,
    TEXTEMOTE_GAZE           = 44,
    TEXTEMOTE_GIGGLE         = 45,
    TEXTEMOTE_GLARE          = 46,
    TEXTEMOTE_GLOAT          = 47,
    TEXTEMOTE_GREET          = 48,
    TEXTEMOTE_GRIN           = 49,
    TEXTEMOTE_GROAN          = 50,
    TEXTEMOTE_GROVEL         = 51,
    TEXTEMOTE_GUFFAW         = 52,
    TEXTEMOTE_HAIL           = 53,
    TEXTEMOTE_HAPPY          = 54,
    TEXTEMOTE_HELLO          = 55,
    TEXTEMOTE_HUG            = 56,
    TEXTEMOTE_HUNGRY         = 57,
    TEXTEMOTE_KISS           = 58,
    TEXTEMOTE_KNEEL          = 59,
    TEXTEMOTE_LAUGH          = 60,
    TEXTEMOTE_LAYDOWN        = 61,
    TEXTEMOTE_MASSAGE        = 62,
    TEXTEMOTE_MOAN           = 63,
    TEXTEMOTE_MOON           = 64,
    TEXTEMOTE_MOURN          = 65,
    TEXTEMOTE_NO             = 66,
    TEXTEMOTE_NOD            = 67,
    TEXTEMOTE_NOSEPICK       = 68,
    TEXTEMOTE_PANIC          = 69,
    TEXTEMOTE_PEER           = 70,
    TEXTEMOTE_PLEAD          = 71,
    TEXTEMOTE_POINT          = 72,
    TEXTEMOTE_POKE           = 73,
    TEXTEMOTE_PRAY           = 74,
    TEXTEMOTE_ROAR           = 75,
    TEXTEMOTE_ROFL           = 76,
    TEXTEMOTE_RUDE           = 77,
    TEXTEMOTE_SALUTE         = 78,
    TEXTEMOTE_SCRATCH        = 79,
    TEXTEMOTE_SEXY           = 80,
    TEXTEMOTE_SHAKE          = 81,
    TEXTEMOTE_SHOUT          = 82,
    TEXTEMOTE_SHRUG          = 83,
    TEXTEMOTE_SHY            = 84,
    TEXTEMOTE_SIGH           = 85,
    TEXTEMOTE_SIT            = 86,
    TEXTEMOTE_SLEEP          = 87,
    TEXTEMOTE_SNARL          = 88,
    TEXTEMOTE_SPIT           = 89,
    TEXTEMOTE_STARE          = 90,
    TEXTEMOTE_SURPRISED      = 91,
    TEXTEMOTE_SURRENDER      = 92,
    TEXTEMOTE_TALK           = 93,
    TEXTEMOTE_TALKEX         = 94,
    TEXTEMOTE_TALKQ          = 95,
    TEXTEMOTE_TAP            = 96,
    TEXTEMOTE_THANK          = 97,
    TEXTEMOTE_THREATEN       = 98,
    TEXTEMOTE_TIRED          = 99,
    TEXTEMOTE_VICTORY        = 100,
    TEXTEMOTE_WAVE           = 101,
    TEXTEMOTE_WELCOME        = 102,
    TEXTEMOTE_WHINE          = 103,
    TEXTEMOTE_WHISTLE        = 104,
    TEXTEMOTE_WORK           = 105,
    TEXTEMOTE_YAWN           = 106,
    TEXTEMOTE_BOGGLE         = 107,
    TEXTEMOTE_CALM           = 108,
    TEXTEMOTE_COLD           = 109,
    TEXTEMOTE_COMFORT        = 110,
    TEXTEMOTE_CUDDLE         = 111,
    TEXTEMOTE_DUCK           = 112,
    TEXTEMOTE_INSULT         = 113,
    TEXTEMOTE_INTRODUCE      = 114,
    TEXTEMOTE_JK             = 115,
    TEXTEMOTE_LICK           = 116,
    TEXTEMOTE_LISTEN         = 117,
    TEXTEMOTE_LOST           = 118,
    TEXTEMOTE_MOCK           = 119,
    TEXTEMOTE_PONDER         = 120,
    TEXTEMOTE_POUNCE         = 121,
    TEXTEMOTE_PRAISE         = 122,
    TEXTEMOTE_PURR           = 123,
    TEXTEMOTE_PUZZLE         = 124,
    TEXTEMOTE_RAISE          = 125,
    TEXTEMOTE_READY          = 126,
    TEXTEMOTE_SHIMMY         = 127,
    TEXTEMOTE_SHIVER         = 128,
    TEXTEMOTE_SHOO           = 129,
    TEXTEMOTE_SLAP           = 130,
    TEXTEMOTE_SMIRK          = 131,
    TEXTEMOTE_SNIFF          = 132,
    TEXTEMOTE_SNUB           = 133,
    TEXTEMOTE_SOOTHE         = 134,
    TEXTEMOTE_STINK          = 135,
    TEXTEMOTE_TAUNT          = 136,
    TEXTEMOTE_TEASE          = 137,
    TEXTEMOTE_THIRSTY        = 138,
    TEXTEMOTE_VETO           = 139,
    TEXTEMOTE_SNICKER        = 140,
    TEXTEMOTE_STAND          = 141,
    TEXTEMOTE_TICKLE         = 142,
    TEXTEMOTE_VIOLIN         = 143,
    TEXTEMOTE_SMILE          = 163,
    TEXTEMOTE_RASP           = 183,
    TEXTEMOTE_PITY           = 203,
    TEXTEMOTE_GROWL          = 204,
    TEXTEMOTE_BARK           = 205,
    TEXTEMOTE_SCARED         = 223,
    TEXTEMOTE_FLOP           = 224,
    TEXTEMOTE_LOVE           = 225,
    TEXTEMOTE_MOO            = 226,
    TEXTEMOTE_COMMEND        = 243,
    TEXTEMOTE_JOKE           = 329
} TextEmoteType;

typedef enum
{
    EMOTE_ONESHOT_NONE                  = 0,
    EMOTE_ONESHOT_TALK                  = 1,
    EMOTE_ONESHOT_BOW                   = 2,
    EMOTE_ONESHOT_WAVE                  = 3,
    EMOTE_ONESHOT_CHEER                 = 4,
    EMOTE_ONESHOT_EXCLAMATION           = 5,
    EMOTE_ONESHOT_QUESTION              = 6,
    EMOTE_ONESHOT_EAT                   = 7,
    EMOTE_STATE_DANCE                   = 10,
    EMOTE_ONESHOT_LAUGH                 = 11,
    EMOTE_STATE_SLEEP                   = 12,
    EMOTE_STATE_SIT                     = 13,
    EMOTE_ONESHOT_RUDE                  = 14,
    EMOTE_ONESHOT_ROAR                  = 15,
    EMOTE_ONESHOT_KNEEL                 = 16,
    EMOTE_ONESHOT_KISS                  = 17,
    EMOTE_ONESHOT_CRY                   = 18,
    EMOTE_ONESHOT_CHICKEN               = 19,
    EMOTE_ONESHOT_BEG                   = 20,
    EMOTE_ONESHOT_APPLAUD               = 21,
    EMOTE_ONESHOT_SHOUT                 = 22,
    EMOTE_ONESHOT_FLEX                  = 23,
    EMOTE_ONESHOT_SHY                   = 24,
    EMOTE_ONESHOT_POINT                 = 25,
    EMOTE_STATE_STAND                   = 26,
    EMOTE_STATE_READY_UNARMED           = 27,
    EMOTE_STATE_WORK_SHEATHED           = 28,
    EMOTE_STATE_POINT                   = 29,
    EMOTE_STATE_NONE                    = 30,
    EMOTE_ONESHOT_WOUND                 = 33,
    EMOTE_ONESHOT_WOUND_CRITICAL        = 34,
    EMOTE_ONESHOT_ATTACK_UNARMED        = 35,
    EMOTE_ONESHOT_ATTACK1H              = 36,
    EMOTE_ONESHOT_ATTACK2HTIGHT         = 37,
    EMOTE_ONESHOT_ATTACK2H_LOOSE        = 38,
    EMOTE_ONESHOT_PARRY_UNARMED         = 39,
    EMOTE_ONESHOT_PARRY_SHIELD          = 43,
    EMOTE_ONESHOT_READY_UNARMED         = 44,
    EMOTE_ONESHOT_READY1H               = 45,
    EMOTE_ONESHOT_READY_BOW             = 48,
    EMOTE_ONESHOT_SPELL_PRECAST         = 50,
    EMOTE_ONESHOT_SPELL_CAST            = 51,
    EMOTE_ONESHOT_BATTLE_ROAR           = 53,
    EMOTE_ONESHOT_SPECIALATTACK1H       = 54,
    EMOTE_ONESHOT_KICK                  = 60,
    EMOTE_ONESHOT_ATTACK_THROWN         = 61,
    EMOTE_STATE_STUN                    = 64,
    EMOTE_STATE_DEAD                    = 65,
    EMOTE_ONESHOT_SALUTE                = 66,
    EMOTE_STATE_KNEEL                   = 68,
    EMOTE_STATE_USE_STANDING            = 69,
    EMOTE_ONESHOT_WAVE_NO_SHEATHE       = 70,
    EMOTE_ONESHOT_CHEER_NO_SHEATHE      = 71,
    EMOTE_ONESHOT_EAT_NO_SHEATHE        = 92,
    EMOTE_STATE_STUN_NO_SHEATHE         = 93,
    EMOTE_ONESHOT_DANCE                 = 94,
    EMOTE_ONESHOT_SALUTE_NO_SHEATH      = 113,
    EMOTE_STATE_USE_STANDING_NO_SHEATHE = 133,
    EMOTE_ONESHOT_LAUGH_NO_SHEATHE      = 153,
    EMOTE_STATE_WORK                    = 173,
    EMOTE_STATE_SPELL_PRECAST           = 193,
    EMOTE_ONESHOT_READY_RIFLE           = 213,
    EMOTE_STATE_READY_RIFLE             = 214,
    EMOTE_STATE_WORK_MINING             = 233,
    EMOTE_STATE_WORK_CHOPWOOD           = 234,
    EMOTE_STATE_APPLAUD                 = 253,
    EMOTE_ONESHOT_LIFTOFF               = 254,
    EMOTE_ONESHOT_YES                   = 273,
    EMOTE_ONESHOT_NO                    = 274,
    EMOTE_ONESHOT_TRAIN                 = 275,
    EMOTE_ONESHOT_LAND                  = 293,
    EMOTE_STATE_AT_EASE                 = 313,
    EMOTE_STATE_READY1H                 = 333,
    EMOTE_STATE_SPELL_KNEEL_START       = 353,
    EMOTE_STATE_SUBMERGED               = 373,
    EMOTE_ONESHOT_SUBMERGE              = 374,
    EMOTE_STATE_READY2H                 = 375,
    EMOTE_STATE_READY_BOW               = 376,
    EMOTE_ONESHOT_MOUNT_SPECIAL         = 377,
    EMOTE_STATE_TALK                    = 378,
    EMOTE_STATE_FISHING                 = 379,
    EMOTE_ONESHOT_FISHING               = 380,
    EMOTE_ONESHOT_LOOT                  = 381,
    EMOTE_STATE_WHIRLWIND               = 382,
    EMOTE_STATE_DROWNED                 = 383,
    EMOTE_STATE_HOLD_BOW                = 384,
    EMOTE_STATE_HOLD_RIFLE              = 385,
    EMOTE_STATE_HOLD_THROWN             = 386,
    EMOTE_ONESHOT_DROWN                 = 387,
    EMOTE_ONESHOT_STOMP                 = 388,
    EMOTE_ONESHOT_ATTACK_OFF            = 389,
    EMOTE_ONESHOT_ATTACK_OFF_PIERCE     = 390,
    EMOTE_STATE_ROAR                    = 391,
    EMOTE_STATE_LAUGH                   = 392,
    EMOTE_ONESHOT_CREATURE_SPECIAL      = 393,
    EMOTE_ONESHOT_JUMPLANDRUN           = 394,
    EMOTE_ONESHOT_JUMPEND               = 395,
    EMOTE_ONESHOT_TALK_NO_SHEATHE       = 396,
    EMOTE_ONESHOT_POINT_NO_SHEATHE      = 397,
    EMOTE_STATE_CANNIBALIZE             = 398,
    EMOTE_ONESHOT_JUMPSTART             = 399,
    EMOTE_STATE_DANCESPECIAL            = 400,
    EMOTE_ONESHOT_DANCESPECIAL          = 401,
    EMOTE_ONESHOT_CUSTOM_SPELL_01       = 402,
    EMOTE_ONESHOT_CUSTOM_SPELL_02       = 403,
    EMOTE_ONESHOT_CUSTOM_SPELL_03       = 404,
    EMOTE_ONESHOT_CUSTOM_SPELL_04       = 405,
    EMOTE_ONESHOT_CUSTOM_SPELL_05       = 406,
    EMOTE_ONESHOT_CUSTOM_SPELL_06       = 407,
    EMOTE_ONESHOT_CUSTOM_SPELL_07       = 408,
    EMOTE_ONESHOT_CUSTOM_SPELL_08       = 409,
    EMOTE_ONESHOT_CUSTOM_SPELL_09       = 410,
    EMOTE_ONESHOT_CUSTOM_SPELL_10       = 411,
    EMOTE_STATE_EXCLAIM                 = 412,
    EMOTE_STATE_DANCE_CUSTOM            = 413,
    EMOTE_STATE_SIT_CHAIR_MED           = 415,
    EMOTE_STATE_CUSTOM_SPELL_01         = 416,
    EMOTE_STATE_CUSTOM_SPELL_02         = 417,
    EMOTE_STATE_EAT                     = 418,
    EMOTE_STATE_CUSTOM_SPELL_04         = 419,
    EMOTE_STATE_CUSTOM_SPELL_03         = 420,
    EMOTE_STATE_CUSTOM_SPELL_05         = 421,
    EMOTE_STATE_SPELLEFFECT_HOLD        = 422,
    EMOTE_STATE_EAT_NO_SHEATHE          = 423,
    EMOTE_STATE_MOUNT                   = 424,
    EMOTE_STATE_READY2HL                = 425,
    EMOTE_STATE_SIT_CHAIR_HIGH          = 426,
    EMOTE_STATE_FALL                    = 427,
    EMOTE_STATE_LOOT                    = 428,
    EMOTE_STATE_SUBMERGED_NEW           = 429,
    EMOTE_ONESHOT_COWER                 = 430,
    EMOTE_STATE_COWER                   = 431,
    EMOTE_ONESHOT_USE_STANDING          = 432,
    EMOTE_STATE_STEALTH_STAND           = 433,
    EMOTE_ONESHOT_OMNICAST_GHOUL        = 434,
    EMOTE_ONESHOT_ATTACK_BOW            = 435,
    EMOTE_ONESHOT_ATTACK_RIFLE          = 436,
    EMOTE_STATE_SWIM_IDLE               = 437,
    EMOTE_STATE_ATTACK_UNARMED          = 438,
    EMOTE_ONESHOT_SPELL_CAST_W_SOUND    = 439,
    EMOTE_ONESHOT_DODGE                 = 440,
    EMOTE_ONESHOT_PARRY1H               = 441,
    EMOTE_ONESHOT_PARRY2H               = 442,
    EMOTE_ONESHOT_PARRY2HL              = 443,
    EMOTE_STATE_FLYFALL                 = 444,
    EMOTE_ONESHOT_FLYDEATH              = 445,
    EMOTE_STATE_FLY_FALL                = 446,
    EMOTE_ONESHOT_FLY_SIT_GROUND_DOWN   = 447,
    EMOTE_ONESHOT_FLY_SIT_GROUND_UP     = 448,
    EMOTE_ONESHOT_EMERGE                = 449,
    EMOTE_ONESHOT_DRAGON_SPIT           = 450,
    EMOTE_STATE_SPECIAL_UNARMED         = 451,
    EMOTE_ONESHOT_FLYGRAB               = 452,
    EMOTE_STATE_FLYGRABCLOSED           = 453,
    EMOTE_ONESHOT_FLYGRABTHROWN         = 454,
    EMOTE_STATE_FLY_SIT_GROUND          = 455,
    EMOTE_STATE_WALK_BACKWARDS          = 456,
    EMOTE_ONESHOT_FLYTALK               = 457,
    EMOTE_ONESHOT_FLYATTACK1H           = 458,
    EMOTE_STATE_CUSTOM_SPELL_08         = 459,
    EMOTE_ONESHOT_FLY_DRAGON_SPIT       = 460,
    EMOTE_STATE_SIT_CHAIR_LOW           = 461,
    EMOTE_ONESHOT_STUN                  = 462,
    EMOTE_ONESHOT_SPELL_CAST_OMNI       = 463,
    EMOTE_STATE_READY_THROWN            = 465,
    EMOTE_ONESHOT_WORK_CHOPWOOD         = 466,
    EMOTE_ONESHOT_WORK_MINING           = 467,
    EMOTE_STATE_SPELL_CHANNEL_OMNI      = 468,
    EMOTE_STATE_SPELL_CHANNEL_DIRECTED  = 469,
    EMOTE_STAND_STATE_NONE              = 470,
    EMOTE_STATE_READYJOUST              = 471,
    EMOTE_STATE_STRANGULATE             = 473,
    EMOTE_STATE_READY_SPELL_OMNI        = 474,
    EMOTE_STATE_HOLD_JOUST              = 475,
    EMOTE_ONESHOT_CRY_JAINA             = 476,
    EMOTE_ONESHOT_SPECIAL_UNARMED       = 477,
    EMOTE_STATE_DANCE_NOSHEATHE         = 478,
    EMOTE_ONESHOT_SNIFF                 = 479,
    EMOTE_ONESHOT_DRAGONSTOMP           = 480,
    EMOTE_ONESHOT_KNOCKDOWN             = 482,
    EMOTE_STATE_READ                    = 483,
    EMOTE_ONESHOT_FLYEMOTETALK          = 485,
    EMOTE_STATE_READ_ALLOWMOVEMENT      = 492,
    EMOTE_STATE_READY1H_ALLOW_MOVEMENT  = 505,
    EMOTE_STATE_READY2H_ALLOW_MOVEMENT  = 506,
    EMOTE_ONESHOT_OPEN                  = 517,
    EMOTE_STATE_READ_CHRISTMAS          = 518
} EmoteType;
