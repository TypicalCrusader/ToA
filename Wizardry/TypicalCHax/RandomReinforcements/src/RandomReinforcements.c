#include "common-chax.h"
#include "TChax.h"

void HeroUnitPointoS2()
{
    if(CheckFlag(EVFLAG_AUGUST_TYPE) == 1 )
    {
        gEventSlots[2] = gEventSlotQueue[0];
    }
    else {
        gEventSlots[2] = gEventSlotQueue[0];       
    }
    gEventSlots[0xD] = 0;
    u8 it;    
    for(it=0;it<=2;it++)
    {
        gEventSlotQueue[it] = 0;
    }    
    return;
}

//takes x values from slot Queue, number x is set in s0xD aka Event Queue, x < 10
void UnitPointertoS2Rand()
{
    u8 temp = (gEventSlots[0xD]-1);
    u8 RandomReinforcementSite = Roll1RN((gEventSlots[0xD]-1));
    gEventSlots[2] = gEventSlotQueue[RandomReinforcementSite];
    gEventSlots[0xD] = 0;
    u8 it;        
    for(it=0;it<=(temp-1);it++)
    {
        gEventSlotQueue[it] = 0;
    }

    return;
}

void UnitPointertoS2Diff()
{      
    if (gPlaySt.chapterStateBits & PLAY_FLAG_TUTORIAL)
    {
        gEventSlots[0x2] = gEventSlotQueue[0];
    }
    else if (gPlaySt.chapterStateBits & PLAY_FLAG_HARD)
    {
        gEventSlots[0x2] = gEventSlotQueue[2];
    }
    else
    {
        gEventSlots[0x2] = gEventSlotQueue[1];
    }

    u8 it; 
    for(it=0;it<=(gEventSlots[0xD]-1);it++)
    {
        gEventSlotQueue[it] = 0;
    }
    gEventSlots[0xD] = 0;

    return;
}