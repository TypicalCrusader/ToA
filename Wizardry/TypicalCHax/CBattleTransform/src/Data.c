#include "Data.h"

const struct TransformTable gTranformStruct[] = {
    {
        .jid = CLASS_MANAKETE,
        .iid = ITEM_DRAGONSTONE_FIRE,
        .gMainAnim= 0xb8,
        .gIntroAnim= 0xb4,
        .gExitAnim= 0xb5,
        .gNoWPNAnim= 0xb6,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_MANAKETE,
        .iid = ITEM_DRAGONSTONE_WIND,
        .gMainAnim= 0x0,
        .gIntroAnim= 0xb4,
        .gExitAnim= 0xb5,
        .gNoWPNAnim= 0xb6,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_MANAKETE,
        .iid = ITEM_DRAGONSTONE_ICE,
        .gMainAnim= 0x0,
        .gIntroAnim= 0xb4,
        .gExitAnim= 0xb5,
        .gNoWPNAnim= 0xb6,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_MANAKETE,
        .iid = ITEM_DRAGONSTONE_EARTH,
        .gMainAnim= 0xb7,
        .gIntroAnim= 0xb4,
        .gExitAnim= 0xb5,
        .gNoWPNAnim= 0xb6,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_MANAKETE_2, //dawn M
        .iid = ITEM_DRAGONSTONE_DAWN,
        .gMainAnim= BANIM_INDEX_MYRRH_MAIN,
        .gIntroAnim= BANIM_INDEX_MYRRH_INTRO,
        .gExitAnim= BANIM_INDEX_MYRRH_EXIT,
        .gNoWPNAnim= BANIM_INDEX_MYRRH_NOWPN,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_GORGON, //dusk M
        .iid = ITEM_DRAGONSTONE_DUSK,
        .gMainAnim= 0xb9,
        .gIntroAnim= 0xbc,
        .gExitAnim= 0xBA,
        .gNoWPNAnim= 0xbd,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_CYCLOPS, //innath
        .iid = ITEM_DRAGONSTONE_DECAY,
        .gMainAnim= 0xc2,
        .gIntroAnim= 0xc4,
        .gExitAnim= 0xc3,
        .gNoWPNAnim= 0x77,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_MANAKETE_MYRRH,
        .iid = ITEM_DRAGONSTONE_FIRE,
        .gMainAnim= 0xb8,
        .gIntroAnim= 0xb4,
        .gExitAnim= 0xb5,
        .gNoWPNAnim= 0xb6,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_MANAKETE_MYRRH,
        .iid = ITEM_DRAGONSTONE_WIND,
        .gMainAnim= 0x0,
        .gIntroAnim= 0xb4,
        .gExitAnim= 0xb5,
        .gNoWPNAnim= 0xb6,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_MANAKETE_MYRRH,
        .iid = ITEM_DRAGONSTONE_ICE,
        .gMainAnim= 0x0,
        .gIntroAnim= 0xb4,
        .gExitAnim= 0xb5,
        .gNoWPNAnim= 0xb6,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_MANAKETE_MYRRH,
        .iid = ITEM_DRAGONSTONE_EARTH,
        .gMainAnim= 0xb7,
        .gIntroAnim= 0xb4,
        .gExitAnim= 0xb5,
        .gNoWPNAnim= 0xb6,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_MOGALL, //dawn F
        .iid = ITEM_DRAGONSTONE_DAWN,
        .gMainAnim= BANIM_INDEX_MYRRH_MAIN,
        .gIntroAnim= BANIM_INDEX_MYRRH_INTRO,
        .gExitAnim= BANIM_INDEX_MYRRH_EXIT,
        .gNoWPNAnim= BANIM_INDEX_MYRRH_NOWPN,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    },
    {
        .jid = CLASS_ARCH_MOGALL, //dusk F
        .iid = ITEM_DRAGONSTONE_DUSK,
        .gMainAnim= 0xb9,
        .gIntroAnim= 0xbc,
        .gExitAnim= 0xBA,
        .gNoWPNAnim= 0xbd,
        .TransformStartSound= 0xDE, //howl
        .TransformFinishSound= 0xDC, //transform
        .UntransformSound= 0xDD, //untransform
    }, 
};