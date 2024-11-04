#pragma once

#ifndef SMT_LIKE_RES_H
#define SMT_LIKE_RES_H

#include "common-chax.h"
#include "bmbattle.h"
#include "bmitem.h"

enum {
    RACE_HUMAN = 1,
    RACE_ASCENDED = 2,
    RACE_DRAGON_EARTH =3,
    RACE_DRAGON_LIGHTING = 4,
    RACE_DRAGON_WATER =5,
    RACE_DRAGON_FIRE = 6,
    RACE_DRAGON_DAWN = 7,
    RACE_DRAGON_DUSK = 8,
    RACE_WOLFKIN = 9,
    RACE_FOXKIN = 10,
    RACE_CATKIN = 11,
    RACE_ELDER_DRAGON_DAWN = 11,
    RACE_ELDER_DRAGON_DUSK = 12,
    RACE_INNATH_APEX = 13,
    RACE_NO_RACE = 255
};

const struct RaceStruct {
    u16 uRaceNameID;
    u16 uRaceDescID;

    u8 uRaceRes[0x4];
    u8 uRaceNull[0x4];
    u8 uRaceAbsorb[0x4];
    u8 uRaceWeak[0x4];
};

extern struct RaceStruct const gRaceStruct[0xFF];
extern struct RaceStruct const *const gpRaceStruct[0xFF];

s8 Battle_SMTLikeRes(struct BattleUnit *attacker, struct BattleUnit *defender);

#endif // SMT_LIKE_RES_H