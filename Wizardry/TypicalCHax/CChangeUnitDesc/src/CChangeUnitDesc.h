#pragma once

#include "common-chax.h"
#include "TOA_characters.h"
#include "characters.h"
#include "TOA_event-flags.h"
#include "statscreen.h"

#ifndef CCHANGE_UNIT_DESC_H
#define CCHANGE_UNIT_DESC_H

const struct CharDesc {
    s8 UnitID;
    u16 NewDesc;
    u8 ClassID;
    u16 FlagID;
    u8 Path;
};

extern struct CharDesc const gCharDescStruct[];
extern struct CharDesc const *const gpCharDescStruct[];


#endif //CCHANGE_UNIT_DESC_H
