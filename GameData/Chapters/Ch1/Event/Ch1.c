#include "Ch1.h"

//Redas
/*
static const struct REDA REDA_Eirika[] = {
	{
		.x = 14,
		.y = 27,
		.b = -1,
	}
};
*/

//cutscene units
static const struct UnitDefinition Ch1_BegScene_Units[] = {
	{
		.charIndex = CHARACTER_PLAY_AUGUST,
		.classIndex = CLASS_CUTS_NOBLE,
		.allegiance = FACTION_ID_BLUE,
		.autolevel = false,
		.level = 5,
		.xPosition = 16,
		.yPosition = 6,
		.redaCount = 0,
		.redas = NULL,
		.items = {
		},
	},	
	{
		.charIndex = CHARACTER_PLAY_CYRIC,
		.classIndex = CLASS_PLAY_MAGE_LORD,
		.allegiance = FACTION_ID_BLUE,
		.autolevel = false,
		.level = 3,
		.xPosition = 16,
		.yPosition = 6,
		.redaCount = 0,
		.redas = NULL,
		.items = {
		},
	},		
	{
		.charIndex = CHARACTER_PLAY_NESIA,
		.classIndex = CLASS_WYVERN_RIDER_F,
		.allegiance = FACTION_ID_BLUE,
		.autolevel = false,
		.level = 4,
		.xPosition = 16,
		.yPosition = 6,
		.redaCount = 0,
		.redas = NULL,
		.items = {
		},
	},	
	{
		.charIndex = CHARACTER_PLAY_DURIN,
		.classIndex = CLASS_GREAT_KNIGHT,
		.allegiance = FACTION_ID_BLUE,
		.autolevel = false,
		.level = 1,
		.xPosition = 16,
		.yPosition = 6,
		.redaCount = 0,
		.redas = NULL,
		.items = {
		},
	},		
	//guards
	{
		.charIndex = CHARACTER_IMPR_SOLDIER_HEAVY_M,
		.classIndex = CLASS_ARMOR_KNIGHT,
		.allegiance = FACTION_ID_GREEN,
		.autolevel = false,
		.level = 1,
		.xPosition = 16,
		.yPosition = 6,
		.redaCount = 0,
		.redas = NULL,
		.items = {
		},
	},	
	{
		.charIndex = CHARACTER_IMPR_SOLDIER_HEAVY_M,
		.classIndex = CLASS_ARMOR_KNIGHT,
		.allegiance = FACTION_ID_GREEN,
		.autolevel = false,
		.level = 1,
		.xPosition = 16,
		.yPosition = 6,
		.redaCount = 0,
		.redas = NULL,
		.items = {
		},
	},			
};

//player units
static const struct UnitDefinition Ch1_UnitDef_Canon_Normal[] = {
};
static const struct UnitDefinition Ch1_UnitDef_Canon_Hard[] = {
};

//enemies main
static const struct UnitDefinition Ch1_UnitDef_Enemy_Normal[] = {
	
};
static const struct UnitDefinition Ch1_UnitDef_Enemy_Hard[] = {

};

static const EventScr Ch1_EventScr_Beginning[] = {
	FADI(20)
	SVAL(EVT_SLOT_1,4) //value to add/set
	SVAL(EVT_SLOT_2,1) //0 - add, >= 1 - set
	ASMC(SetCourtApprovalValue) //default court approval - expected value xxxx0100
	LOMA(0x3b) //Castle Dreshic
    Text_BG(0,Ch1_Beginning_text_1) //august wakes
		FADU(0XF)
		TEXTCONT
	TEXTEND
	LOAD1(Ch1_BegScene_Units) //Durrin Arrives with the news
    Text_BG(0,Ch1_Beginning_text_2) //Durrin tells the news
    ASMC(Class_Choice_MenuASMC) //August decides what to wear
    SVAL(EVT_SLOT_7, 0) //Heavy
    BEQ(0,EVT_SLOT_C,EVT_SLOT_7)
        SVAL(EVT_SLOT_7, 1) //Light
        BEQ(1,EVT_SLOT_C,EVT_SLOT_7)
            GOTO(10)
LABEL(0)
	Text_BG(0,Ch1_Beginning_text_chosen_heavy) //August wears plate
	SilentPromote(CHARACTER_PLAY_AUGUST,CLASS_PLAY_ARMORED_LORD)
		GOTO(2)
LABEL(1)
	Text_BG(0,Ch1_Beginning_text_chosen_light) //august wears gambesson
	SilentPromote(CHARACTER_PLAY_AUGUST,CLASS_PLAY_LIGHT_LORD)

LABEL(2)
	Text_BG(0,Ch1_Beginning_text_3) //Durrin and Co talk how to get to the villiage
	ASMC(Path_Choice_MenuASMC) //August decides what to wear
    SVAL(EVT_SLOT_7, 0) //Hurry through Forest
    BEQ(3,EVT_SLOT_C,EVT_SLOT_7)
        SVAL(EVT_SLOT_7, 1) //Go through Hillsite
        BEQ(4,EVT_SLOT_C,EVT_SLOT_7)
            GOTO(10)	
LABEL(3)
    SVAL(EVT_SLOT_1, 3) //Canon
	ASMC(SetCurrentPath)
	Text_BG(0,Ch1_Beginning_text_4) //August decides to move through forest
	LOMA(0x1) //canon map
	GOTO(10)

LABEL(4)
    SVAL(EVT_SLOT_1, 2) //Non-Canon
	ASMC(SetCurrentPath)
	Text_BG(0,Ch1_Beginning_text_5) //August decides to move through hillsides
	LOMA(0x18) //non-canon map

LABEL(10)
	ENDA
};

static const EventScr Ch1_EventScr_Ending[] = {
	MNC2(1)
	ENDA
};

/**
 * Event list
 */
static const EventListScr Ch1_EventListScr_Turn[] = {
	//TurnEventEnemy_(EVFLAG_TMP(8),Ch1_RandoReinforcements,2, 11)
	END_MAIN
};

static const EventListScr Ch1_EventListScr_Character[] = {
	//	CharacterEventBothWays(EVFLAG_TMP(7), EventScr_Talk_EirikaSeth, CHARACTER_EIRIKA, CHARACTER_SETH)
	END_MAIN
};

static const EventListScr Ch1_EventListScr_Location[] = {
	END_MAIN
};

static const EventListScr Ch1_EventListScr_Misc[] = {
    DefeatAll(Ch1_EventScr_Ending)
	CauseGameOverIfLordDies
	END_MAIN
};

static const EventListScr Ch1_EventListScr_SelectUnit[] = {
	END_MAIN
};

static const EventListScr Ch1_EventListScr_SelectDestination[] = {
	END_MAIN
};

static const EventListScr Ch1_EventListScr_UnitMove[] = {
	END_MAIN
};

static void const *const Ch1_EventListScr_Tutorial[] = {
	NULL
};

static const u8 Ch1_TrapData[] = {
	TRAP_NONE
};

static const u8 Ch1_TrapData_Hard[] = {
	TRAP_NONE
};

const struct ChapterEventGroup Ch1Event = {
	.turnBasedEvents			   = Ch1_EventListScr_Turn,
	.characterBasedEvents		  = Ch1_EventListScr_Character,
	.locationBasedEvents		   = Ch1_EventListScr_Location,
	.miscBasedEvents			   = Ch1_EventListScr_Misc,
	.specialEventsWhenUnitSelected = Ch1_EventListScr_SelectUnit,
	.specialEventsWhenDestSelected = Ch1_EventListScr_SelectDestination,
	.specialEventsAfterUnitMoved   = Ch1_EventListScr_UnitMove,
	.tutorialEvents				= Ch1_EventListScr_Tutorial,

	.traps			= Ch1_TrapData,
	.extraTrapsInHard = Ch1_TrapData_Hard,

	.playerUnitsInNormal = Ch1_UnitDef_Canon_Normal,
	.playerUnitsInHard   = Ch1_UnitDef_Canon_Hard,

	.playerUnitsChoice1InEncounter = NULL,
	.playerUnitsChoice2InEncounter = NULL,
	.playerUnitsChoice3InEncounter = NULL,

	.enemyUnitsChoice1InEncounter = NULL,
	.enemyUnitsChoice2InEncounter = NULL,
	.enemyUnitsChoice3InEncounter = NULL,

	.beginningSceneEvents = Ch1_EventScr_Beginning,
	.endingSceneEvents	= Ch1_EventScr_Ending,
};