
#include "SMTLikeRes.h"
/*


uses unused _u23 pad byte of char table

main features
- take byte from char table, use its value as index for race struct which in fact is equal to race type
- race struct, u16 name id, u16 descid, u8 uRaceRes[0x3], u8 uRaceNull[0x3], u8 u8RaceWeak[0x3], u8 u8RaceAbsorb[0x3] no pad since its 4 aligned
- values in Res, Null, Weak, Absorb are equal to weapon type value 0xFF = unused
- hooks to real battle calc and it kinda overrides it
- affinity can increase certain weapon types power
- returns f32 as it uses the value to calc final damage I KNOW THIS IS BAD FOR PERFORMANCE BUT PLEASE tELL ME HOW TO HANDLE THIS SHIT OTHERWISE

OUTPUT
- no race stuff = 1.0
- RES = 0.5 of normal dmg
- NUL = 0 of normal dmg
- ABS = -1 of normal dmg
- WEK = 1.5 of normal dmg

FUTURE TODO
- add pictures to appear on res/nul/weak/absr attack
*/

struct RaceStruct Race[0xFF];

s8 Battle_SMTLikeRes(struct BattleUnit *attacker, struct BattleUnit *defender)
{
    if(defender->unit.pCharacterData->_u23 != 0xFF) //race exist
    {
        u8 i;

        //bc i block it from running useless code it shouldnt be all that bad
        //i hope

        for(i=0;i<=4;i++)
        {
            if(Race[defender->unit.pCharacterData->_u23].uRaceRes[i] != 0xFF )
            {
                if(Race[defender->unit.pCharacterData->_u23].uRaceRes[i] == attacker->weaponType )
                {
                    return 2; 
                }               
            }      
            if(Race[defender->unit.pCharacterData->_u23].uRaceNull[i] != 0xFF )
            {
                if(Race[defender->unit.pCharacterData->_u23].uRaceNull[i] == attacker->weaponType )
                {
                    return 0;
                }               
            }  
            if(Race[defender->unit.pCharacterData->_u23].uRaceAbsorb[i] != 0xFF )
            {
                if(Race[defender->unit.pCharacterData->_u23].uRaceAbsorb[i] == attacker->weaponType )
                {
                    return -1;
                }               
            }              
            if(Race[defender->unit.pCharacterData->_u23].uRaceWeak[i] != 0xFF )
            {
                if(Race[defender->unit.pCharacterData->_u23].uRaceWeak[i] == attacker->weaponType )
                {
                    return 15; 
                }               
            }                                
        }

        return 1;
    }
    else{ //race doesnt exist
        return 1;
    }
}
