#include "SMTLikeRes.h"

const struct RaceStruct gRaceStruct[0xFF] = {
    [RACE_HUMAN] = {
        .uRaceNameID = RACE_HUMAN_NAME_ID,
        .uRaceDescID = RACE_HUMAN_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_LANCE,
            [1] = ITYPE_SWORD,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceNull = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceAbsorb = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_11,
            [1] = ITYPE_DRAGN,
            [2] = 0xFF,
            [3] = 0xFF,
        }
    },
    [RACE_ASCENDED] = {
        .uRaceNameID = RACE_ASCENDED_NAME_ID,
        .uRaceDescID = RACE_ASCENDED_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_LANCE,
            [1] = ITYPE_SWORD,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceNull = {
            [0] = ITYPE_LIGHT,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceAbsorb = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_DARK,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        }
    },
    [RACE_DRAGON_EARTH] = {
        .uRaceNameID = RACE_DRAGON_EARTH_NAME_ID,
        .uRaceDescID = RACE_DRAGON_EARTH_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_ANIMA,
            [1] = ITYPE_DARK,
            [2] = ITYPE_LIGHT,
            [3] = 0xFF,
        },
        .uRaceNull = {
            [0] = ITYPE_SWORD,
            [1] = ITYPE_AXE,
            [2] = ITYPE_LANCE,
            [3] = ITYPE_BOW,
        },
        .uRaceAbsorb = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_DRAGN,
            [1] = ITYPE_11, //DRAGONSTONE
            [2] = 0xFF, 
            [3] = 0xFF, 
        }     
    },
    [RACE_DRAGON_LIGHTING] = {
        .uRaceNameID = RACE_DRAGON_LIGHTING_NAME_ID,
        .uRaceDescID = RACE_DRAGON_LIGHTING_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_SWORD,
            [1] = ITYPE_AXE,
            [2] = ITYPE_LANCE,
            [3] = ITYPE_BOW,
        },
        .uRaceNull = {
            [0] = ITYPE_LIGHT,
            [1] = ITYPE_DARK,
            [2] = ITYPE_ANIMA,
            [3] = 0xFF,
        },
        .uRaceAbsorb = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_11,
            [1] = ITYPE_DRAGN,
            [2] = 0xFF,
            [3] = 0xFF,
        }        
    },
    [RACE_DRAGON_WATER] = {
        .uRaceNameID = RACE_DRAGON_WATER_NAME_ID,
        .uRaceDescID = RACE_DRAGON_WATER_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_LIGHT,
            [1] = ITYPE_DARK,
            [2] = ITYPE_ANIMA,
            [3] = 0xFF,
        },
        .uRaceNull = {
            [0] = 0xff,
            [1] = 0xff,
            [2] = 0xff,
            [3] = 0xff,
        },
        .uRaceAbsorb = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_DRAGN,
            [1] = ITYPE_11, //DRAGONSTONE
            [2] = ITYPE_BOW, 
            [3] = ITYPE_BLLST, 
        }        
    },  
    [RACE_DRAGON_FIRE] = {
        .uRaceNameID = RACE_DRAGON_DAWN_NAME_ID,
        .uRaceDescID = RACE_DRAGON_DAWN_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_SWORD,
            [1] = ITYPE_AXE,
            [2] = ITYPE_LANCE,
            [3] = 0xFF,
        },
        .uRaceNull = {
            [0] = ITYPE_LIGHT,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceAbsorb = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_DARK,
            [1] = ITYPE_DRAGN,
            [2] = ITYPE_BLLST,
            [3] = ITYPE_11, //DRAGONSTONE
        }        
    },   
    [RACE_DRAGON_DAWN] = {
        .uRaceNameID = RACE_DRAGON_DAWN_NAME_ID,
        .uRaceDescID = RACE_DRAGON_DAWN_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_SWORD,
            [1] = ITYPE_AXE,
            [2] = ITYPE_LANCE,
            [3] = 0xFF,
        },
        .uRaceNull = {
            [0] = ITYPE_LIGHT,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceAbsorb = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_DARK,
            [1] = ITYPE_DRAGN,
            [2] = ITYPE_BLLST,
            [3] = ITYPE_11, //DRAGONSTONE
        }         
    },    
    [RACE_DRAGON_DUSK] = {
        .uRaceNameID = RACE_DRAGON_DUSK_NAME_ID,
        .uRaceDescID = RACE_DRAGON_DUSK_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_SWORD,
            [1] = ITYPE_AXE,
            [2] = ITYPE_LANCE,
            [3] = 0xFF,
        },
        .uRaceNull = {
            [0] = ITYPE_DARK,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceAbsorb = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_LIGHT,
            [1] = ITYPE_DRAGN,
            [2] = ITYPE_BLLST,
            [3] = ITYPE_11, //DRAGONSTONE
        }       
    },   
    [RACE_ELDER_DRAGON_DAWN] = {
        .uRaceNameID = RACE_ELDER_DRAGON_DAWN_NAME_ID,
        .uRaceDescID = RACE_ELDER_DRAGON_DAWN_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_SWORD,
            [1] = ITYPE_AXE,
            [2] = ITYPE_LANCE,
            [3] = 0xFF,
        },
        .uRaceNull = {
            [0] = ITYPE_BOW,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceAbsorb = {
            [0] = ITYPE_LIGHT,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_DARK,
            [1] = ITYPE_DRAGN,
            [2] = ITYPE_BLLST,
            [3] = ITYPE_11, //DRAGONSTONE
        }
    },
    [RACE_ELDER_DRAGON_DUSK] = {
        .uRaceNameID = RACE_ELDER_DRAGON_DUSK_NAME_ID,
        .uRaceDescID = RACE_ELDER_DRAGON_DUSK_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_SWORD,
            [1] = ITYPE_AXE,
            [2] = ITYPE_LANCE,
            [3] = 0xFF,
        },
        .uRaceNull = {
            [0] = ITYPE_BOW,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceAbsorb = {
            [0] = ITYPE_DARK,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_LIGHT,
            [1] = ITYPE_DRAGN,
            [2] = ITYPE_BLLST,
            [3] = ITYPE_11, //DRAGONSTONE
        }
    },
    [RACE_INNATH_APEX] = {
        .uRaceNameID = RACE_INNATH_APEX_NAME_ID,
        .uRaceDescID = RACE_INNATH_APEX_DESC_ID,
        .uRaceRes = {
            [0] = ITYPE_SWORD,
            [1] = ITYPE_AXE,
            [2] = ITYPE_LANCE,
            [3] = ITYPE_ANIMA,
        },
        .uRaceNull = {
            [0] = ITYPE_BOW,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceAbsorb = {
            [0] = ITYPE_DARK,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = ITYPE_LIGHT,
            [1] = ITYPE_DRAGN,
            [2] = ITYPE_BLLST,
            [3] = ITYPE_11, //DRAGONSTONE
        }
    },
    [RACE_NO_RACE] = {
        .uRaceNameID = 0x0,
        .uRaceDescID = 0x0,
        .uRaceRes = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceNull = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceAbsorb = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        },
        .uRaceWeak = {
            [0] = 0xFF,
            [1] = 0xFF,
            [2] = 0xFF,
            [3] = 0xFF,
        }
    }
};