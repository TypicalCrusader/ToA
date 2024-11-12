
#include "CourtApproval.h"

//takes last used byte of perma flags (03005268) 
//since there are 199 perma flags and 200 values we bitshift 1 right
//then take and return value to S1
void CheckCourtApprovalValue()
{
    u8 LastPermaFlagByte;
    LastPermaFlagByte = gPermanentFlagBits[196];
    LastPermaFlagByte >>= 1;
    LastPermaFlagByte <<= 4;
    LastPermaFlagByte >>= 4;
    if(LastPermaFlagByte > 15)
    {
        LastPermaFlagByte = 15;
    }

    gEventSlots[0x1] = LastPermaFlagByte;

    return;
}

//Takes value from S1 adds it to LastPermaFlagByte which before is added to gPermanentFlagBits[196] is moved left
void SetCourtApprovalValue()
{
    u8 LastPermaFlagByte;
    LastPermaFlagByte = gPermanentFlagBits[196]; //Index of flag we want is FlagID - 100 - 1 so if we want 4 from last then its 196 = 297
    LastPermaFlagByte >>= 1; //take last unused bit (200)
    LastPermaFlagByte <<= 4; //clear 
    LastPermaFlagByte >>= 4; 

    if(gEventSlots[0x2] == 0) {
        LastPermaFlagByte = LastPermaFlagByte + gEventSlots[0x1];
    }
    else {
        LastPermaFlagByte = gEventSlots[0x1];
    }
    if(LastPermaFlagByte > 15)
    {
        LastPermaFlagByte = 15;
    }

    LastPermaFlagByte <<= 1;
    gPermanentFlagBits[196] = gPermanentFlagBits[196] | LastPermaFlagByte;
}