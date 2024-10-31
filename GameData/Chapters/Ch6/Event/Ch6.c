#include "common-chax.h"
#include "skill-system.h"
#include "event-rework.h"
#include "constants/skills.h"
#include "constants/TOA_characters.h"


//todo edit this
const struct ROMChapterData Ch6Chapter = {
	.map = {
		.obj1Id = 1,
		.obj2Id = 0,
		.paletteId = 2,
		.tileConfigId = 3,
		.mainLayerId = 22,
		.objAnimId = 5,
		.paletteAnimId = 0,
		.changeLayerId = 23,
	},
	.initialFogLevel = 0,
	.hasPrepScreen = FALSE,
	.chapTitleId = 0x167,
	.chapTitleIdInHectorStory = 0x167,
	.initialPosX = 13,
	.initialPosY = 25,
	.initialWeather = WEATHER_FINE,
	.battleTileSet = 0,
	.easyModeLevelMalus = 0,
	.difficultModeLevelBonus = 0,
	.normalModeLevelMalus = 1,
	.mapBgmIds = {
		[MAP_BGM_BLUE] = 13,
		[MAP_BGM_RED] = 21,
		[MAP_BGM_GREEN] = 15,
		[MAP_BGM_BLUE_HECTOR] = 13,
		[MAP_BGM_RED_HECTOR] = 21,
		[MAP_BGM_GREEN_HECTOR] = 15,
		[MAP_BGM_BLUE_GREEN_ALT] = 65535,
		[MAP_BGM_RED_ALT] = 65535,
		[MAP_BGM_PROLOGUE_LYN] = 11,
		[MAP_BGM_PROLOGUE] = 65535,
		[MAP_BGM_PROLOGUE_HECTOR] = 65535,
	},
	.mapCrackedWallHeath = 50,
	.turnsForTacticsRankAInEliwoodStory = {
		[0] = 5,
		[1] = 5,
	},
	.turnsForTacticsRankAInHectorStory = {
		[0] = 5,
		[1] = 5,
	},
	.turnsForTacticsRankBInEliwoodStory = {
		[0] = 6,
		[1] = 6,
	},
	.turnsForTacticsRankBInHectorStory = {
		[0] = 6,
		[1] = 6,
	},
	.turnsForTacticsRankCInEliwoodStory = {
		[0] = 7,
		[1] = 7,
	},
	.turnsForTacticsRankCInHectorStory = {
		[0] = 7,
		[1] = 7,
	},
	.turnsForTacticsRankDInEliwoodStory = {
		[0] = 8,
		[1] = 8,
	},
	.turnsForTacticsRankDInHectorStory = {
		[0] = 8,
		[1] = 8,
	},
	.unk3D = 0,
	.gainedExpForExpRankAInEliwoodStory = {
		[0] = 100,
		[1] = 100,
	},
	.gainedExpForExpRankAInHectorStory = {
		[0] = 100,
		[1] = 100,
	},
	.gainedExpForExpRankBInEliwoodStory = {
		[0] = 80,
		[1] = 80,
	},
	.gainedExpForExpRankBInHectorStory = {
		[0] = 80,
		[1] = 80,
	},
	.gainedExpForExpRankCInEliwoodStory = {
		[0] = 60,
		[1] = 60,
	},
	.gainedExpForExpRankCInHectorStory = {
		[0] = 60,
		[1] = 60,
	},
	.gainedExpForExpRankDInEliwoodStory = {
		[0] = 40,
		[1] = 40,
	},
	.gainedExpForExpRankDInHectorStory = {
		[0] = 40,
		[1] = 40,
	},
	.unk5E = 0,
	.goldForFundsRankInEliwoodStory = {
		[0] = 1060,
		[1] = 1060,
	},
	.goldForFundsRankInHectorStory = {
		[0] = 1060,
		[1] = 1060,
	},
	.chapTitleTextId = 409,
	.chapTitleTextIdInHectorStory = 409,
	.mapEventDataId = 7,
	.gmapEventId = 1,
	.divinationTextIdBeginning = 0,
	.divinationTextIdInEliwoodStory = 0,
	.divinationTextIdInHectorStory = 0,
	.divinationTextIdEnding = 0,
	.divinationPortrait = 0,
	.divinationFee = 0,
	.prepScreenNumber = 0,
	.prepScreenNumberInHectorStory = 0,
	.merchantPosX = 255,
	.merchantPosXInHectorStory = 255,
	.merchantPosY = 0,
	.merchantPosYInHectorStory = 0,
	.victorySongEnemyThreshold = 1,
	.fadeToBlack = FALSE,
	.statusObjectiveTextId = 0x1BE,
	.goalWindowTextId = 414,
	.goalWindowDataType = GOAL_TYPE_DEFENSE,
	.goalWindowEndTurnNumber = 0,
	.protectCharacterIndex = CHARACTER_MYRRH,
	.destPosX = 255,
	.destPosY = 0,
	.unk91 = 29,
	.unk92 = 0,
	.unk93 = 0,
};

/**
 * Main events
*/
//player units
static const struct UnitDefinition Ch6_August_Light[] = {
	{
		.charIndex = CHARACTER_EIRIKA,
		.classIndex = CLASS_EIRIKA_LORD,
		.allegiance = FACTION_ID_BLUE,
		.autolevel = false,
		.level = 1,
		.xPosition = 16,
		.yPosition = 29,
		.redaCount = 1,
		.redas = REDA_Eirika,
		.items = {
		},
	},
};
static const struct UnitDefinition Ch6_August_Heavy[] = {
	{
		.charIndex = CHARACTER_EPHRAIM,
		.classIndex = CLASS_EPHRAIM_LORD,
		.allegiance = FACTION_ID_BLUE,
		.autolevel = false,
		.level = 1,
		.xPosition = 16,
		.yPosition = 29,
		.redaCount = 1,
		.redas = REDA_Eirika,
		.items = {
		},
	},	
};


static const struct UnitDefinition Ch6_UnitDef_Canon_Normal[] = {
};
static const struct UnitDefinition Ch6_UnitDef_Canon_Hard[] = {
};
static const struct UnitDefinition Ch6_UnitDef_NonCanon_Normal[] = {
};
static const struct UnitDefinition Ch6_UnitDef_NonCanon_Hard[] = {
};
static const struct UnitDefinition Ch6_UnitDef_Lunatic[] = {
};
static const struct UnitDefinition Ch6_UnitDef_Enemy1[] = {
};
//allies
static const struct UnitDefinition Ch6_UnitDef_Ally_Canon_Normal[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Ally_Canon_Hard[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Ally_Canon_Lunatic[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Ally_NonCanon_Normal[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Ally_NonCanon_Hard[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Ally_NonCanon_Lunatic[] = {

};
//enemies main
static const struct UnitDefinition Ch6_UnitDef_Enemy_Normal[] = {
	
};
static const struct UnitDefinition Ch6_UnitDef_Enemy_Hard[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Enemy_Lunatic[] = {
	
};

static const EventScr Ch6_EventScr_Beginning[] = {
	//check on which path are you
	CHECK_EVENTID(EVFLAG_EXTRA_UNIT(27))//EVFLAG 130
	BEQ(0, EVT_SLOT_C, EVT_SLOT_0) //IF 0 THEN CANON PATH, IF 1 THEN COMPLICIT PATH
		CHECK_TUTORIAL //CHECK IF IN NORMAL
		BNE(5, EVT_SLOT_C, EVT_SLOT_0)
			CHECK_HARD //CHECK IF IN HARD
			BNE(6, EVT_SLOT_C, EVT_SLOT_0)
				GOTO(7)
LABEL(4)
	

	Text_BG(0xA,Ch6_NonCanon_BegScene) 


LABEL(0)
	CHECK_TUTORIAL //CHECK IF IN NORMAL
	BNE(1, EVT_SLOT_C, EVT_SLOT_0)
		CHECK_HARD //CHECK IF IN HARD
		BNE(2, EVT_SLOT_C, EVT_SLOT_0)
			GOTO(3)
LABEL(8)
	Text_BG(0xA,Ch6_Canon_BegScene) 

LABEL(1)
	LOAD1(0X1, Ch6_UnitDef_Ally_Canon_Normal)
	ENUN
	GOTO(4)

LABEL(2)
	LOAD1(0X1, Ch6_UnitDef_Ally_Canon_Lunatic)
	ENUN
	GOTO(4)

LABEL(3)
	LOAD1(0X1, Ch6_UnitDef_Ally_Canon_Hard)
	ENUN
	GOTO(4)

LABEL(5)
	LOAD1(0X1, Ch6_UnitDef_Ally_NonCanon_Normal)
	ENUN
	GOTO(8)

LABEL(6)
	LOAD1(0X1, Ch6_UnitDef_Ally_NonCanon_Lunatic)
	ENUN
	GOTO(8)

LABEL(7)
	LOAD1(0X1, Ch6_UnitDef_Ally_NonCanon_Hard)
	ENUN
	GOTO(8)


LABEL(3)
	// PREP
	CALL(EventScr_08591FD8)

	NoFade
	ENDA
};

static const EventScr Ch6_EventScr_Ending[] = {

LABEL(101)
	MNC2(1)
	ENDA
};

/**
 * Misc events
 */
static const EventListScr Ch6_EventScr_Talk_EirikaSeth[] = {
	//ConvoEvent(0xB32)
};

static const EventListScr Ch6_RandoReinforcements[] = {
	ENDA
};
/**
 * Event list
 */
static const EventListScr Ch6_EventListScr_Turn[] = {
	//TurnEventPlayer_(EVFLAG_TMP(10), EventScr_089FD6D8, 1, 255)
	END_MAIN
};

static const EventListScr Ch6_EventListScr_Character[] = {
	//	CharacterEventBothWays(EVFLAG_TMP(7), EventScr_Talk_EirikaSeth, CHARACTER_EIRIKA, CHARACTER_SETH)
	
	END_MAIN
};

static const EventListScr Ch6_EventListScr_Location[] = {
	END_MAIN
};

static const EventListScr Ch6_EventListScr_Misc[] = {
	Survive(Ch6_EventScr_Ending,12)
	AFEV(0,Ch6_DeadBossChecker,3)
	CauseGameOverIfLordDies
	END_MAIN
};

static const EventListScr Ch6_DeadBossChecker[] = {
	CHECK_EXISTS(CHARACTER_KLIMT) //Emperor
	BNE(100, EVT_SLOT_C, EVT_SLOT_0)
		CHECK_EXISTS(CHARACTER_DARA) //Homonculli Kimuz
		BNE(101, EVT_SLOT_C, EVT_SLOT_0)
			//Empress


LABEL(100)

	ENDA
};

static const EventListScr Ch6_EventListScr_SelectUnit[] = {
	END_MAIN
};

static const EventListScr Ch6_EventListScr_SelectDestination[] = {
	END_MAIN
};

static const EventListScr Ch6_EventListScr_UnitMove[] = {
	END_MAIN
};

static void const *const Ch6_EventListScr_Tutorial[] = {
	NULL
};

static const u8 Ch6_TrapData_ThisEvent[] = {
	TRAP_NONE
};

static const u8 Ch6_TrapData_ThisEventHard[] = {
	TRAP_NONE
};

const struct ChapterEventGroup ThisEvent = {
	.turnBasedEvents			   = Ch6_EventListScr_Turn,
	.characterBasedEvents		  = Ch6_EventListScr_Character,
	.locationBasedEvents		   = Ch6_EventListScr_Location,
	.miscBasedEvents			   = Ch6_EventListScr_Misc,
	.specialEventsWhenUnitSelected = Ch6_EventListScr_SelectUnit,
	.specialEventsWhenDestSelected = Ch6_EventListScr_SelectDestination,
	.specialEventsAfterUnitMoved   = Ch6_EventListScr_UnitMove,
	.tutorialEvents				= Ch6_EventListScr_Tutorial,

	.traps			= Ch6_TrapData_ThisEvent,
	.extraTrapsInHard = Ch6_TrapData_ThisEventHard,

	.playerUnitsInNormal = Ch6_UnitDef_Canon_Normal,
	.playerUnitsInHard   = Ch6_UnitDef_Canon_Hard,

	.playerUnitsChoice1InEncounter = Ch6_UnitDef_NonCanon_Normal,
	.playerUnitsChoice2InEncounter = Ch6_UnitDef_NonCanon_Hard,
	.playerUnitsChoice3InEncounter = Ch6_UnitDef_Lunatic,

	.enemyUnitsChoice1InEncounter = Ch6_UnitDef_Enemy_Normal,
	.enemyUnitsChoice2InEncounter = Ch6_UnitDef_Enemy_Hard,
	.enemyUnitsChoice3InEncounter = Ch6_UnitDef_Enemy_Lunatic,

	.beginningSceneEvents = Ch6_EventScr_Beginning,
	.endingSceneEvents	= Ch6_EventScr_Ending,
};
