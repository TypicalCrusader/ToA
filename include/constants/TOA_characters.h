#pragma once
#ifndef GUARD_CONSTANTS_TOA_CHARACTERS_H
#define GUARD_CONSTANTS_TOA_CHARACTERS_H

enum {
    //CHARACTER_NONE         = 0x00,

    // Player Characters
    CHARACTER_PLAY_AUGUST           = 0x01, //August 
    CHARACTER_PLAY_CYRIC            = 0x02, //Cyric
    CHARACTER_PLAY_NESIA            = 0x03, //Nesia
    CHARACTER_PLAY_DURIN            = 0x04, //Durin
    
/*    
    CHARACTER_MOULDER      = 0x05,
    CHARACTER_VANESSA      = 0x06,
    CHARACTER_ROSS         = 0x07,
    CHARACTER_NEIMI        = 0x08,
    CHARACTER_COLM         = 0x09,
    CHARACTER_GARCIA       = 0x0A,
    CHARACTER_INNES        = 0x0B,
    CHARACTER_LUTE         = 0x0C,
    CHARACTER_NATASHA      = 0x0D,
    CHARACTER_CORMAG       = 0x0E, */
    //CHARACTER_PLAY_AUGUST_LIGHT      = 0x0F, //August - Light
/*    CHARACTER_FORDE        = 0x10,
    CHARACTER_KYLE         = 0x11,
    CHARACTER_AMELIA       = 0x12,
    CHARACTER_ARTUR        = 0x13,
    CHARACTER_GERIK        = 0x14,
    CHARACTER_TETHYS       = 0x15,
    CHARACTER_MARISA       = 0x16,
    CHARACTER_SALEH        = 0x17,
    CHARACTER_EWAN         = 0x18,
    CHARACTER_LARACHEL     = 0x19,
    CHARACTER_DOZLA        = 0x1A,
    CHARACTER_RENNAC       = 0x1C,
    CHARACTER_DUESSEL      = 0x1D,
    CHARACTER_MYRRH        = 0x1E,
    CHARACTER_KNOLL        = 0x1F,
    CHARACTER_JOSHUA       = 0x20,
    CHARACTER_SYRENE       = 0x21,
    CHARACTER_TANA         = 0x22,
    CHARACTER_LYON_CC      = 0x23,
    CHARACTER_ORSON_CC     = 0x24,
    CHARACTER_GLEN_CC      = 0x25,
    CHARACTER_SELENA_CC    = 0x26,
    CHARACTER_VALTER_CC    = 0x27,
    CHARACTER_RIEV_CC      = 0x28,
    CHARACTER_CAELLACH_CC  = 0x29,
    CHARACTER_FADO_CC      = 0x2A,
    CHARACTER_ISMAIRE_CC   = 0x2B,
    CHARACTER_HAYDEN_CC    = 0x2C, */

    //FREE 2D-2F - ENEMY 2-15 - REUSE FOR PLAYABLE, WHY THE FUCK THERE ARE ENEMIES IN BWL SPACE???????????

    // Summoned Characters
/*    CHARACTER_SUMMON_LYON  = 0x3B,
    CHARACTER_SUMMON_KNOLL = 0x3E,
    CHARACTER_SUMMON_EWAN  = 0x3F,

    // Boss/Unique Enemy Characters
    CHARACTER_LYON         = 0x40,   
    CHARACTER_MORVA        = 0x41,
    CHARACTER_ORSON_CH5X   = 0x42,
    CHARACTER_VALTER       = 0x43, */
    CHARACTER_LORGIS       = 0x44, // Lorgis
    CHARACTER_ASCALON      = 0x45, // Ascalon - END OF BWL
/*    CHARACTER_BREGUET      = 0x46, 
    CHARACTER_BONE         = 0x47,
    CHARACTER_BAZBA        = 0x48,
    CHARACTER_ENTOUMBED_CH4 = 0x49,
    CHARACTER_SAAR         = 0x4A,
    CHARACTER_NOVALA       = 0x4B,
    CHARACTER_MURRAY       = 0x4C,
    CHARACTER_TIRADO       = 0x4D,
    CHARACTER_BINKS        = 0x4E,
    CHARACTER_PABLO        = 0x4F,
    CHARACTER_MAELDUIN_CHUnk = 0x50, // TODO: which chapter?
    CHARACTER_AIAS         = 0x51,
    CHARACTER_CARLYLE      = 0x52,
    CHARACTER_CAELLACH     = 0x53,
    CHARACTER_PABLO_2      = 0x54, // TODO: which chapter?

    // FREE - 55 - ENEMY16

    CHARACTER_GORGON_CHUnk = 0x56, // TODO: which chapter?
    CHARACTER_RIEV         = 0x57,

    // FREE - 58-59 -ENEMY16,17

    CHARACTER_GHEB         = 0x5A,
    CHARACTER_BERAN        = 0x5B,
    CHARACTER_CYCLOPS_CHUnk = 0x5C,
    CHARACTER_WIGHT_CHUnk  = 0x5D,
    CHARACTER_DEATHGOYLE_CHUnk = 0x5E,

    // FREE 5F-65 - Mummy, Enemy19,20,21,22, Hunter, Bandit1, Bandit2

    CHARACTER_BANDIT_CH5   = 0x66,
    CHARACTER_ONEILL       = 0x68,
    CHARACTER_GLEN         = 0x69,
    CHARACTER_ZONTA        = 0x6A,
    CHARACTER_VIGARDE      = 0x6B,
    CHARACTER_LYON_FINAL   = 0x6C,
    CHARACTER_ORSON        = 0x6D, */
    //Cult soldiers
    CHARACTER_CULT_SOLDIER_RANGE_M  = 0x6E,
    CHARACTER_CULT_SOLDIER_RANGE_F  = 0x6F,
    CHARACTER_CULT_SOLDIER_HEAVY_M  = 0x70,
    CHARACTER_CULT_SOLDIER_FLYER_F  = 0x71,
    CHARACTER_CULT_SOLDIER_DMAGE_M  = 0x72,
    CHARACTER_CULT_SOLDIER_DMAGE_F  = 0x73,
    CHARACTER_CULT_SOLDIER_EMAGE_M  = 0x74,
    CHARACTER_CULT_SOLDIER_CAVLR_M  = 0x75,
    CHARACTER_CULT_SOLDIER_CAVLR_F  = 0x76,
    CHARACTER_CULT_SOLDIER_DRAGN_M  = 0x77,
    CHARACTER_CULT_SOLDIER_MYRYM_M  = 0x78,
    CHARACTER_CULT_SOLDIER_MYRYM_F  = 0x79,  
    CHARACTER_CULT_SOLDIER_LANCR_M  = 0x7A,
    CHARACTER_CULT_SOLDIER_LANCR_F  = 0x7B,        
    //Imperial troops
    CHARACTER_IMPR_SOLDIER_FLYER_M  = 0x7C, 
    CHARACTER_IMPR_SOLDIER_FLYER_F  = 0x7D,
    CHARACTER_IMPR_SOLDIER_CAVLR_M  = 0x7E,
    CHARACTER_IMPR_SOLDIER_CAVLR_F  = 0x7F,
    CHARACTER_IMPR_SOLDIER_LMAGE_M  = 0x80,
    CHARACTER_IMPR_SOLDIER_LMAGE_F  = 0x81,
    CHARACTER_IMPR_SOLDIER_MYRYM_M  = 0x82,
    CHARACTER_IMPR_SOLDIER_MYRYM_F  = 0x83,
    CHARACTER_IMPR_SOLDIER_LANCR_M  = 0x84,
    CHARACTER_IMPR_SOLDIER_LANCR_F  = 0x85, 
    CHARACTER_IMPR_SOLDIER_HEAVY_M  = 0xBA,
    CHARACTER_IMPR_SOLDIER_EMAGE_M  = 0xC1,
    CHARACTER_IMPR_SOLDIER_EMAGE_F  = 0xC2,
    //Echean troops
    CHARACTER_ECHE_SOLDIER_CAVLR_M  = 0x86,
    CHARACTER_ECHE_SOLDIER_CAVLR_F  = 0x87,
    CHARACTER_ECHE_SOLDIER_LMAGE_M  = 0x88,
    CHARACTER_ECHE_SOLDIER_LMAGE_F  = 0x89,
    CHARACTER_ECHE_SOLDIER_MYRYM_M  = 0x8A,
    CHARACTER_ECHE_SOLDIER_MYRYM_F  = 0x8B,
    CHARACTER_ECHE_SOLDIER_LANCR_M  = 0x8C,
    CHARACTER_ECHE_SOLDIER_LANCR_F  = 0x8D,  
    CHARACTER_ECHE_SOLDIER_PALAD_M  = 0x8E,
    CHARACTER_ECHE_SOLDIER_PALAD_F  = 0x8F,         
    CHARACTER_ECHE_SOLDIER_ARCHR_M  = 0x90,
    CHARACTER_ECHE_SOLDIER_ARCHR_F  = 0x91,
    CHARACTER_ECHE_SOLDIER_EMAGE_M  = 0x92,
    CHARACTER_ECHE_SOLDIER_EMAGE_F  = 0x93,             
    //Rebel troops
    CHARACTER_REBL_SOLDIER_CAVLR_M  = 0x94,
    CHARACTER_REBL_SOLDIER_CAVLR_F  = 0x95,
    CHARACTER_REBL_SOLDIER_MYRYM_M  = 0x96,
    CHARACTER_REBL_SOLDIER_MYRYM_F  = 0x97,
    CHARACTER_REBL_SOLDIER_LANCR_M  = 0x98,
    CHARACTER_REBL_SOLDIER_LANCR_F  = 0x9A,       
    CHARACTER_REBL_SOLDIER_ARCHR_M  = 0x9B,
    CHARACTER_REBL_SOLDIER_ARCHR_F  = 0x9C,
    CHARACTER_REBL_SOLDIER_EMAGE_M  = 0x9D,
    CHARACTER_REBL_SOLDIER_EMAGE_F  = 0x9E, 
    //Penbar troops
    CHARACTER_PENB_SOLDIER_CAVLR_M  = 0x9F,
    CHARACTER_PENB_SOLDIER_CAVLR_F  = 0xA0,
    CHARACTER_PENB_SOLDIER_LMAGE_M  = 0xA1,
    CHARACTER_PENB_SOLDIER_LMAGE_F  = 0xA2,
    CHARACTER_PENB_SOLDIER_MYRYM_M  = 0xA3,
    CHARACTER_PENB_SOLDIER_LANCR_M  = 0xA4,
    CHARACTER_PENB_SOLDIER_PALAD_M  = 0xA5, 
    CHARACTER_PENB_SOLDIER_ARCHR_M  = 0xA6,
    CHARACTER_PENB_SOLDIER_EMAGE_M  = 0xA7,
    //Drosian troops
    CHARACTER_DROS_SOLDIER_CAVLR_M  = 0xA8,
    CHARACTER_DROS_SOLDIER_CAVLR_F  = 0xA9,
    CHARACTER_DROS_SOLDIER_DMAGE_M  = 0xAA,
    CHARACTER_DROS_SOLDIER_DMAGE_F  = 0xAB,
    CHARACTER_DROS_SOLDIER_MYRYM_M  = 0xAC,
    CHARACTER_DROS_SOLDIER_MYRYM_F  = 0xAD,
    CHARACTER_DROS_SOLDIER_LANCR_M  = 0xAE,
    CHARACTER_DROS_SOLDIER_LANCR_F  = 0xAF,  
    CHARACTER_DROS_SOLDIER_GKNGT_M  = 0xB0,      
    CHARACTER_DROS_SOLDIER_ARCHR_M  = 0xB1,
    CHARACTER_DROS_SOLDIER_ARCHR_F  = 0xB2,
    CHARACTER_DROS_SOLDIER_EMAGE_M  = 0xB3,
    //brigands  
    CHARACTER_BRIG_SOLDIER_BRIGN_M  = 0xB4,
    CHARACTER_BRIG_SOLDIER_CAVLR_M  = 0xB5,
    CHARACTER_BRIG_SOLDIER_EMAGE_M  = 0xB6,
    CHARACTER_BRIG_SOLDIER_MYRYM_M  = 0xB7,
    CHARACTER_BRIG_SOLDIER_ARCHR_M  = 0xB8,
    CHARACTER_BRIG_SOLDIER_DRAGN_M  = 0xB9,         
    //BA - IMPR_SOLDIER_HEAVY_M
    //Dragons
    CHARACTER_DRAG_SOLDIER_TDRAG_M  = 0xBB,
    CHARACTER_DRAG_SOLDIER_TDRAG_F  = 0xBC,
    CHARACTER_DRAG_SOLDIER_EDRAG_M  = 0xBD,
    CHARACTER_DRAG_SOLDIER_EDRAG_F  = 0xBF, 
    CHARACTER_BOSS_FINAL_INNATH     = 0xBE,
    // Apparition - ascalon and co
    CHARACTER_APPR_SOLDIER_CAVLR_M  = 0xCD,
    CHARACTER_APPR_SOLDIER_CAVLR_F  = 0xCE,
    CHARACTER_APPR_SOLDIER_LMAGE_M  = 0xCF,
    CHARACTER_APPR_SOLDIER_LMAGE_F  = 0xD0,
    CHARACTER_APPR_SOLDIER_MYRYM_M  = 0xD1,
    CHARACTER_APPR_SOLDIER_MYRYM_F  = 0xD2,
    CHARACTER_APPR_SOLDIER_LANCR_M  = 0xD3,
    CHARACTER_APPR_SOLDIER_LANCR_F  = 0xD4,  
    CHARACTER_APPR_SOLDIER_PALAD_M  = 0xD5,
    CHARACTER_APPR_SOLDIER_PALAD_F  = 0xD6,         
    CHARACTER_APPR_SOLDIER_ARCHR_M  = 0xD7,
    CHARACTER_APPR_SOLDIER_ARCHR_F  = 0xD8,
    CHARACTER_APPR_SOLDIER_EMAGE_M  = 0xD9,
    CHARACTER_APPR_SOLDIER_EMAGE_F  = 0xDA,  
    //Foxkin
    CHARACTER_FOXK_SOLDIER_CAVLR_F  = 0xCE,
    CHARACTER_FOXK_SOLDIER_LMAGE_F  = 0xD0,
    CHARACTER_FOXK_SOLDIER_MYRYM_F  = 0xD2,
    CHARACTER_FOXK_SOLDIER_LANCR_F  = 0xD4,         
    CHARACTER_FOXK_SOLDIER_ARCHR_F  = 0xD8,
    CHARACTER_FOXK_SOLDIER_EMAGE_F  = 0xDA, 
    //Wolfkin
    CHARACTER_WOLF_SOLDIER_CAVLR_M  = 0xDB,
    CHARACTER_WOLF_SOLDIER_LMAGE_M  = 0xDC,
    CHARACTER_WOLF_SOLDIER_MYRYM_M  = 0xDE,
    CHARACTER_WOLF_SOLDIER_LANCR_M  = 0xDF,     
    CHARACTER_WOLF_SOLDIER_ARCHR_M  = 0xE1,
    CHARACTER_WOLF_SOLDIER_EMAGE_M  = 0xE2,
    //Catkin
    CHARACTER_CATK_SOLDIER_CAVLR_M  = 0xE3,
    CHARACTER_CATK_SOLDIER_CAVLR_F  = 0xE4,
    CHARACTER_CATK_SOLDIER_LMAGE_M  = 0xE5,
    CHARACTER_CATK_SOLDIER_LMAGE_F  = 0xE6,
    CHARACTER_CATK_SOLDIER_MYRYM_M  = 0xE7,
    CHARACTER_CATK_SOLDIER_MYRYM_F  = 0xE8,
    CHARACTER_CATK_SOLDIER_LANCR_M  = 0xE9,
    CHARACTER_CATK_SOLDIER_LANCR_F  = 0xEA,         
    CHARACTER_CATK_SOLDIER_ARCHR_M  = 0xEB,
    CHARACTER_CATK_SOLDIER_ARCHR_F  = 0xEC,
    CHARACTER_CATK_SOLDIER_EMAGE_M  = 0xED,
    CHARACTER_CATK_SOLDIER_EMAGE_F  = 0xEE, 

    CHARACHER_ALLY_AURELIAN_LORGIS  = 0xC0,

    //C1,C2 - IMPR_EMAGE_M AND F
    CHARACTER_BOSS_CH6_CULT_SUMMNR  = 0xC3,
    CHARACTER_BOSS_CH1_BRIG_SHANK   = 0xC4,
    //FREE C6 - 63, 64

    CHARACTER_ALLY_DROSIAN_IMPERAT  = 0xC5,

    //FREE C6 - Enemy65

    CHARACTER_BOSS_ASKON_EMPEROR        = 0xC7, // Emperor
    CHARACTER_BOSS_ASKON_EMPRESS        = 0xC8, // Empress
    CHARACTER_BOSS_KIMUZ_HOMONCULLI     = 0xC9, // Kimuz - homonculli
    CHARACTER_BOSS_ELAN_HOMONCULLI      = 0xCA, // Elan - homonculi
    CHARACTER_BOSS_DORIN_HOMONCULLI     = 0xCB, // Dorin - homonculli
    CHARACTER_BOSS_ORON_HOMONCULLI      = 0xCC, // Oron - homonculli

    //FREE CD - RaustenKnight1
    //FREE 0xf1- 0XF3
    //18 char ids free

/*    CHARACTER_CITIZEN      = 0xFC,
    CHARACTER_ARENA_OPPONENT = 0xFD,
    CHARACTER_WALL         = 0xFE,
    CHARACTER_SNAG         = 0xFF, */
};

#endif // GUARD_CONSTANTS_TOA_CHARACTERS_H
