#include "common-chax.h"
#include "constants/TOA_characters.h"
#include "TChax.h"

void GetCurrentMC(){
    s8 CurrentMC = CheckPermanentFlag(EVFLAG_AUGUST_TYPE); //0 = heavy, 1= light
    u8 MCID;

    switch (CurrentMC)
    {
    case 0:
        MCID = CHARACTER_PLAY_AUGUST_HEAVY;
        break;
    case 1:
        MCID = CHARACTER_PLAY_AUGUST_LIGHT;
        break;
    default:
        MCID = CHARACTER_PLAY_AUGUST_LIGHT;
        break;
    }

    gEventSlots[0x1]=MCID;
    gEventSlots[0x2]=MCID;

    return;
}

void GetCurrentMCUnitParam(){
    s8 CurrentMC = CheckPermanentFlag(EVFLAG_AUGUST_TYPE); //0 = heavy, 1= light
    u8 MCID;

    switch (CurrentMC)
    {
    case 0:
        MCID = CHARACTER_PLAY_AUGUST_HEAVY;
        break;
    case 1:
        MCID = CHARACTER_PLAY_AUGUST_LIGHT;
        break;
    default:
        MCID = CHARACTER_PLAY_AUGUST_LIGHT;
        break;
    }

    gEventSlots[0x2]=MCID;

    return;
}