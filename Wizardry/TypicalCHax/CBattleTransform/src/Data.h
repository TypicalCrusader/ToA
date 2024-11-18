#include "common-chax.h"
#include "constants/TOA_items.h"

#define MAXTRANSFORMTABLESIZE 13
//2X air, dusk, dawn, innath,flame,earth,thunder,ice 1X decay

struct TransformTable {
    u8 jid; //class
    u16 iid; //item
    u8 gMainAnim;
    u8 gIntroAnim;
    u8 gExitAnim;
    u8 gNoWPNAnim;
    u16 TransformStartSound;
    u16 TransformFinishSound;
    u16 UntransformSound;
};

extern struct TransformTable const gTranformStruct[];
extern struct TransformTable const *const gpTranformStruct[];