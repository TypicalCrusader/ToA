#include "SilentPromote.h"

//at most 3 values from Queue, 0 - deployindex, 1- class, 2-item
void gSilentPromote(){
    struct Unit *unit = GetUnit(gEventSlotQueue[0]);
    u8 i;

    if(gEventSlots[0xD]<3)
    {
        ApplyUnitPromotion(unit,gEventSlotQueue[1]);        
    }
    else 
    {
        ApplyUnitPromotion(unit,gEventSlotQueue[1]);  
        if ((s32) gEventSlotQueue[2] != (s32)-1) {
            UnitUpdateUsedItem(unit, gEventSlotQueue[2]);
        }                 
    }

    //clear the Queue
    for(i=1;i<=(gEventSlots[0xD]-1);i++)
    {
        gEventSlotQueue[i] = 0;
    }    
    gEventSlots[0xD] = 0;

    return;
}

//takes 2 at most values from slot Queue, 0-classID, 1- itemID + charID from s2/unit location at slotB/active unit/leader + mode in unisgned
void gSilentPromoteFromEventParameter(){
    //0, active leader, -1 active unit, -2 unit location, -3 unitID from S3
    s32 mode = (s32) gEventSlots[0x3] * -1;
    struct Unit *unit = GetUnitStructFromEventParameter(mode);
    u8 temp = gEventSlots[0xD];
    u8 i;
    if(gEventSlots[0xD]<2)
    {
        ApplyUnitPromotion(unit,gEventSlotQueue[0]);
    }
    else
    {
        s32 ItemID = (s32) gEventSlotQueue[1];
        ApplyUnitPromotion(unit,gEventSlotQueue[0]);  
        if ((s32) ItemID != (s32)-1) {
            UnitUpdateUsedItem(unit, ItemID);
        }             
    }

    //clear the Queue
    for(i=1;i<=temp;i++)
    {
        gEventSlotQueue[i] = 0;
    }    
    gEventSlots[0xD] = 0;

    return;
}