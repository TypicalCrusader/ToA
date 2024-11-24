
#include "CourtApproval.h"

//takes last used byte of perma flags (03005268)
//then take and return value to S1
void gGet4BitEIDInt()
{
    u8 LastPermaFlagByte;
    LastPermaFlagByte = gPermanentFlagBits[24];
    LastPermaFlagByte >>= 4;
    if(LastPermaFlagByte > 15)
    {
        LastPermaFlagByte = 15;
    }

    gEventSlots[0x1] = LastPermaFlagByte;

    return;
}

//Takes value from S1 adds it to LastPermaFlagByte which before is added to gPermanentFlagBits[24] is moved left
void gSet4BitEIDInt()
{
    if(gEventSlots[0x1] > 15)
    {
        gEventSlots[0x1] = 15;
    }

    u8 LastPermaFlagByte = gPermanentFlagBits[24];
    u8 Buffer = gPermanentFlagBits[24];
    LastPermaFlagByte >>= 4; //clear most significant bits 
    Buffer <<=4;//clear least significant bits
    Buffer >>=4;//return

    if(gEventSlots[0x2] == 0) {
        LastPermaFlagByte = LastPermaFlagByte + gEventSlots[0x1];
    }
    else {
        LastPermaFlagByte = gEventSlots[0x1];
    }

    LastPermaFlagByte <<= 4; //move to least significant
    LastPermaFlagByte = LastPermaFlagByte | Buffer;
    gPermanentFlagBits[24] = LastPermaFlagByte;
}