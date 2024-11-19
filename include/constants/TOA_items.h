#ifndef GUARD_CONSTANTS_TOA_ITEMS_H
#define GUARD_CONSTANTS_TOA_ITEMS_H

/*
enum {
    ITYPE_SWORD = 0,
    ITYPE_LANCE = 1,
    ITYPE_AXE   = 2,
    ITYPE_BOW   = 3,
    ITYPE_STAFF = 4,
    ITYPE_ANIMA = 5,
    ITYPE_LIGHT = 6,
    ITYPE_DARK  = 7,
    ITYPE_BLLST = 8,
    ITYPE_ITEM  = 9,
    ITYPE_DRAGN = 10,

    ITYPE_11    = 11,
    ITYPE_12    = 12,
};
*/

enum {
//    ITEM_NONE              = 0x00,

    // Swords
/*  ITEM_SWORD_IRON        = 0x01,
    ITEM_SWORD_SLIM        = 0x02,
    ITEM_SWORD_STEEL       = 0x03,
    ITEM_SWORD_SILVER      = 0x04,
    ITEM_BLADE_IRON        = 0x05,
    ITEM_BLADE_STEEL       = 0x06,
    ITEM_BLADE_SILVER      = 0x07,
    ITEM_SWORD_VENIN       = 0x08,
    ITEM_SWORD_RAPIER      = 0x09,*/
    ITEM_SWORD_TYRFANG_SEALED      = 0x0A,
/*    ITEM_SWORD_BRAVE       = 0x0B,
    ITEM_SWORD_SHAMSIR     = 0x0C,
    ITEM_SWORD_KILLER      = 0x0D,
    ITEM_SWORD_ARMORSLAYER = 0x0E,
    ITEM_SWORD_WYRMSLAYER  = 0x0F,
    ITEM_SWORD_LIGHTBRAND  = 0x10,
    ITEM_SWORD_RUNESWORD   = 0x11,
    ITEM_SWORD_LANCEREAVER = 0x12,
    ITEM_SWORD_ZANBATO     = 0x13, */

    // Lances
/*    ITEM_LANCE_IRON        = 0x14,
    ITEM_LANCE_SLIM        = 0x15,
    ITEM_LANCE_STEEL       = 0x16,
    ITEM_LANCE_SILVER      = 0x17,
    ITEM_LANCE_VENIN       = 0x18,
    ITEM_LANCE_BRAVE       = 0x19,
    ITEM_LANCE_KILLER      = 0x1A,
    ITEM_LANCE_HORSESLAYER = 0x1B,
    ITEM_LANCE_JAVELIN     = 0x1C,
    ITEM_LANCE_SPEAR       = 0x1D,
    ITEM_LANCE_AXEREAVER   = 0x1E,

    // Axes
    ITEM_AXE_IRON          = 0x1F,
    ITEM_AXE_STEEL         = 0x20,
    ITEM_AXE_SILVER        = 0x21,
    ITEM_AXE_VENIN         = 0x22,
    ITEM_AXE_BRAVE         = 0x23,
    ITEM_AXE_KILLER        = 0x24,
    ITEM_AXE_HALBERD       = 0x25,
    ITEM_AXE_HAMMER        = 0x26,
    ITEM_AXE_DEVIL         = 0x27,
    ITEM_AXE_HANDAXE       = 0x28,
    ITEM_AXE_TOMAHAWK      = 0x29,
    ITEM_AXE_SWORDREAVER   = 0x2A,
    ITEM_AXE_SWORDSLAYER   = 0x2B,
    ITEM_AXE_HATCHET       = 0x2C,

    // Bows
    ITEM_BOW_IRON          = 0x2D,
    ITEM_BOW_STEEL         = 0x2E,
    ITEM_BOW_SILVER        = 0x2F,
    ITEM_BOW_VENIN         = 0x30,
    ITEM_BOW_KILLER        = 0x31,
    ITEM_BOW_BRAVE         = 0x32,
    ITEM_BOW_SHORTBOW      = 0x33,
    ITEM_BOW_LONGBOW       = 0x34,

    // Ballistas
    ITEM_BALLISTA_REGULAR  = 0x35,
    ITEM_BALLISTA_LONG     = 0x36,
    ITEM_BALLISTA_KILLER   = 0x37,

    // Anima tomes
    ITEM_ANIMA_FIRE        = 0x38,
    ITEM_ANIMA_THUNDER     = 0x39,
    ITEM_ANIMA_ELFIRE      = 0x3A,
    ITEM_ANIMA_BOLTING     = 0x3B,
    ITEM_ANIMA_FIMBULVETR  = 0x3C,
    ITEM_ANIMA_FORBLAZE    = 0x3D,
    ITEM_ANIMA_EXCALIBUR   = 0x3E,

    // Light tomes
    ITEM_LIGHT_LIGHTNING   = 0x3F,
    ITEM_LIGHT_SHINE       = 0x40,
    ITEM_LIGHT_DIVINE      = 0x41,
    ITEM_LIGHT_PURGE       = 0x42,
    ITEM_LIGHT_AURA        = 0x43,
    ITEM_LIGHT_LUCE        = 0x44,

    // Dark tomes
    ITEM_DARK_FLUX         = 0x45,
    ITEM_DARK_LUNA         = 0x46,
    ITEM_DARK_NOSFERATU    = 0x47,
    ITEM_DARK_ECLIPSE      = 0x48,
    ITEM_DARK_FENRIR       = 0x49,
    ITEM_DARK_GLEIPNIR     = 0x4A,

    // Staves
    ITEM_STAFF_HEAL        = 0x4B,
    ITEM_STAFF_MEND        = 0x4C,
    ITEM_STAFF_RECOVER     = 0x4D,
    ITEM_STAFF_PHYSIC      = 0x4E,
    ITEM_STAFF_FORTIFY     = 0x4F,
    ITEM_STAFF_RESTORE     = 0x50,
    ITEM_STAFF_SILENCE     = 0x51,
    ITEM_STAFF_SLEEP       = 0x52,
    ITEM_STAFF_BERSERK     = 0x53,
    ITEM_STAFF_WARP        = 0x54,
    ITEM_STAFF_RESCUE      = 0x55,
    ITEM_STAFF_TORCH       = 0x56,
    ITEM_STAFF_REPAIR      = 0x57,
    ITEM_STAFF_UNLOCK      = 0x58,
    ITEM_STAFF_BARRIER     = 0x59,

    // Random dragon axe
    ITEM_AXE_DRAGON        = 0x5A,

    // Stat boosters
    ITEM_BOOSTER_HP        = 0x5B,
    ITEM_BOOSTER_POW       = 0x5C,
    ITEM_BOOSTER_SKL       = 0x5D,
    ITEM_BOOSTER_SPD       = 0x5E,
    ITEM_BOOSTER_LCK       = 0x5F,
    ITEM_BOOSTER_DEF       = 0x60,
    ITEM_BOOSTER_RES       = 0x61,
    ITEM_BOOSTER_MOV       = 0x62,
    ITEM_BOOSTER_CON       = 0x63,

    // Promotion items
    ITEM_HEROCREST         = 0x64,
    ITEM_KNIGHTCREST       = 0x65,
    ITEM_ORIONSBOLT        = 0x66,
    ITEM_ELYSIANWHIP       = 0x67,
    ITEM_GUIDINGRING       = 0x68,

    // items
    ITEM_CHESTKEY          = 0x69,
    ITEM_DOORKEY           = 0x6A,
    ITEM_LOCKPICK          = 0x6B,
    ITEM_VULNERARY         = 0x6C,
    ITEM_ELIXIR            = 0x6D,
    ITEM_PUREWATER         = 0x6E,
    ITEM_ANTITOXIN         = 0x6F,
    ITEM_TORCH             = 0x70,
    ITEM_DELPHISHIELD      = 0x71,
    ITEM_MEMBERCARD        = 0x72,
    ITEM_SILVERCARD        = 0x73,
    ITEM_WHITEGEM          = 0x74,
    ITEM_BLUEGEM           = 0x75,
    ITEM_REDGEM            = 0x76,

    // From here onwards organization is a myth
    ITEM_GOLD              = 0x77,
    ITEM_LANCE_REGINLEIF   = 0x78,
    ITEM_CHESTKEY_BUNDLE   = 0x79,
    ITEM_MINE              = 0x7A,
    ITEM_LIGHTRUNE         = 0x7B,
    ITEM_HOPLON_SHIELD     = 0x7C,
    ITEM_FILLAS_MIGHT      = 0x7D,
    ITEM_NINISS_GRACE      = 0x7E,
    ITEM_THORS_IRE         = 0x7F,
    ITEM_SETS_LITANY       = 0x80,
    ITEM_SWORD_SHADOWKILLR = 0x81,
    ITEM_LANCE_BRIGHTLANCE = 0x82,
    ITEM_AXE_FIENDCLEAVER  = 0x83,
    ITEM_BOW_BEACONBOW     = 0x84,
    ITEM_SWORD_SIEGLINDE   = 0x85,
    ITEM_AXE_BATTLEAXE     = 0x86,
    ITEM_LIGHT_IVALDI      = 0x87,
    ITEM_MASTERSEAL        = 0x88,
    ITEM_METISSTOME        = 0x89,
    ITEM_HEAVENSEAL        = 0x8A,
    ITEM_MONSTER_SHARPCLAW = 0x8B,
    ITEM_STAFF_LATONA      = 0x8C,
    ITEM_LANCE_DRAGON      = 0x8D,
    ITEM_LANCE_VIDOFNIR    = 0x8E,
    ITEM_DARK_NAGLFAR      = 0x8F,
    ITEM_MONSTER_WRETCHAIR = 0x90,
    ITEM_SWORD_AUDHULMA    = 0x91,
    ITEM_LANCE_SIEGMUND    = 0x92,
    ITEM_AXE_GARM          = 0x93,
    ITEM_BOW_NIDHOGG       = 0x94,
    ITEM_LANCE_HEAVYSPEAR  = 0x95,
    ITEM_LANCE_SHORTSPEAR  = 0x96,
    ITEM_OCEANSEAL         = 0x97,
    ITEM_LUNARBRACE        = 0x98,
    ITEM_SOLARBRACE        = 0x99,
    ITEM_1G                = 0x9A,
    ITEM_5G                = 0x9B,
    ITEM_10G               = 0x9C,
    ITEM_50G               = 0x9D,
    ITEM_100G              = 0x9E,
    ITEM_3000G             = 0x9F,
    ITEM_5000G             = 0xA0,
    ITEM_SWORD_WINDSWORD   = 0xA1,
    ITEM_VULNERARY_2       = 0xA2, // TODO: figure out what this really is
    ITEM_UNK_GREENNOTE     = 0xA3, // ^
    ITEM_UNK_REDNOTE       = 0xA4, // ^
    ITEM_DANCE             = 0xA5,
    ITEM_NIGHTMARE         = 0xA6,
    ITEM_DEMONSTONE        = 0xA7,
    ITEM_DEMONLIGHT        = 0xA8,
    ITEM_RAVAGER           = 0xA9,
    ITEM_DIVINESTONE       = 0xAA,
    ITEM_MONSTER_DEMONSURG = 0xAB,
    ITEM_MONSTER_SHADOWSHT = 0xAC,
    ITEM_MONSTER_ROTTENCLW = 0xAD,
    ITEM_MONSTER_FETIDCLW  = 0xAE,
    ITEM_MONSTER_VENINCLW  = 0xAF,
    ITEM_MONSTER_LTHLTALON = 0xB0,
    ITEM_MONSTER_FIREFANG  = 0xB1,
    ITEM_MONSTER_HELLFANG  = 0xB2,
    ITEM_MONSTER_EVILEYE   = 0xB3,
    ITEM_MONSTER_CRIMSNEYE = 0xB4,
    ITEM_MONSTER_STONE     = 0xB5,
    ITEM_ANIMA_AIRCALIBUR  = 0xB6,
    ITEM_JUNAFRUIT         = 0xB7,
    ITEM_150G              = 0xB8,
    ITEM_200G              = 0xB9,
    ITEM_BLACKGEM          = 0xBA,
    ITEM_GOLDGEM           = 0xBB,
    */
    ITEM_DRAGONSTONE_FIRE = 0xB5,
    ITEM_DRAGONSTONE_WIND = 0xB6,
    ITEM_DRAGONSTONE_THUNDER = 0xBE,
    ITEM_DRAGONSTONE_ICE = 0xBF,
    ITEM_DRAGONSTONE_EARTH = 0xC0,
    ITEM_DRAGONSTONE_DAWN = 0xc1,
    ITEM_DRAGONSTONE_DUSK = 0xc2,
    ITEM_DRAGONSTONE_DECAY = 0xc3,
    ITEM_BREATH_HATRED = 0xC4,
/*
    ITEM_UNK_C4            = 0xC4,
    ITEM_UNK_C5            = 0xC5,
    ITEM_UNK_C6            = 0xC6,
    ITEM_UNK_C7            = 0xC7,
    ITEM_UNK_C8            = 0xC8,
    ITEM_UNK_C9            = 0xC9,
    ITEM_UNK_CA            = 0xCA,
    ITEM_UNK_CB            = 0xCB,
    ITEM_UNK_CC            = 0xCC,
    ITEM_UNK_CD            = 0xCD, */
};

#endif // GUARD_CONSTANTS_TOA_ITEMS_H
