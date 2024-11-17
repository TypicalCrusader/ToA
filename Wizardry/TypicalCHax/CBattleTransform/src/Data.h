#include "common-chax.h"

struct TransformTable {
    u8 jid; //class
    u16 iid; //item
    u16 gMainAnim;
    u16 gIntroAnim;
    u16 gExitAnim;
    u16 gNoWPNAnim;
    u16 TransformStartSound;
    u16 TransformFinishSound;
    u16 UntransformSound;
}

extern struct TransformTable const gTranformStruct[];
extern struct TransformTable const *const gpTranformStruct[];