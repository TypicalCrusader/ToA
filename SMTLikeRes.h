#pragma once

#ifndef SMT_LIKE_RES_H
#define SMT_LIKE_RES_H

#include "common-chax.h"
#include "bmbattle.h"

struct RaceStruct {
    u16 uRaceNameID;
    u16 uRaceDescID;

    u8 uRaceRes[0x3];
    u8 uRaceNull[0x3];
    u8 uRaceAbsorb[0x3];
    u8 uRaceWeak[0x3];
};

extern struct RaceStruct Race[0xFF];

f32 Battle_SMTLikeRes(struct BattleUnit *attacker, struct BattleUnit *defender);

#endif // SMT_LIKE_RES_H