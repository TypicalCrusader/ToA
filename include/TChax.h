#pragma once
#include "common-chax.h"

void GetCurrentMC();
//Abomination
void gSet4BitEIDInt();
void gGet4BitEIDInt();
u8 CheckCurrentPath();
void ReturnCurrentPathtoS1();
void SetCurrentPath();
//Silient PROM
void gSilentPromote();
void gSilientPromoteFromS2();