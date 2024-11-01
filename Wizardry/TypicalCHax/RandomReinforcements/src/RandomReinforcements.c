#include "common-chax.h"

void NextRN_100_to_S1(){
    gEventSlots[0x1] = NextRN_100();
}

//5 slots 0-0-19, 1-20-39, 2 40-59, 3 60-79, 4 80-100. 
//sets S1 to one of following: 1000, 1001, 1002, 1003, 1004
//yes, that is label number, yes in EA scope it might not work
//but here lies a terra incognita
void SelectNextReinforcements(){
    u8 rng = NextRN_100();

    switch (rng)
    {
    case 0 ... 19:
        gEventSlots[0x1] = 1000;
        break;
    case 20 ... 39:
        gEventSlots[0x1] = 1001;
        break;
    case 40 ... 59:
        gEventSlots[0x1] = 1002;
        break;
    case 60 ... 79:
        gEventSlots[0x1] = 1003;
        break;
    case 80 ... 100:
        gEventSlots[0x1] = 1004;
        break;                           
    default:
        gEventSlots[0x1] = 1000;
        break;
    }

    return;
}