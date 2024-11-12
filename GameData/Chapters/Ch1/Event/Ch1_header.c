#include "Ch1.h"

const struct ROMChapterData Ch1Chapter = {
	.map = {
		.obj1Id = 1,
		.obj2Id = 0,
		.paletteId = 2,
		.tileConfigId = 3,
		.mainLayerId = 8,
		.objAnimId = 5,
		.paletteAnimId = 0,
		.changeLayerId = 9,
	},
	.initialFogLevel = 0,
    //UNUSED VALUES
	.hasPrepScreen = FALSE, //intsys why the fuck is this unused?????????
    //UNUSED VALUEs END
	.chapTitleId = 2, //ch6 complicit route
	.chapTitleIdInHectorStory = 2, //ch9 canon route
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
    //UNUSED VALUES
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
    //UNUSED VALUES END
	.unk5E = CH_1_MAIN_MENU_CH_NAME,
    //UNUSED VALUES
	.goldForFundsRankInEliwoodStory = {
		[0] = 1060,
		[1] = 1060,
	},
	.goldForFundsRankInHectorStory = {
		[0] = 1060,
		[1] = 1060,
	},
    //UNUSED VALUES END
	.chapTitleTextId = CH_1_ROUTE_A_CH_NAME,
	.chapTitleTextIdInHectorStory = CH_1_ROUTE_B_CH_NAME,
	.mapEventDataId = 2,
	.gmapEventId = 0xA,
    //UNUSED VALUES
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
    //UNUSED VALUES END
	.victorySongEnemyThreshold = 1,
	.fadeToBlack = TRUE,
	.statusObjectiveTextId = CH_1_OBJ_DETAIL,
	.goalWindowTextId = CH_1_OBJ,
	.goalWindowDataType = GOAL_TYPE_DEFEAT_ALL,
	.goalWindowEndTurnNumber = 0,
	.protectCharacterIndex = 0,
	.destPosX = 255,
	.destPosY = 0,
    //UNUSED VALUES
	.unk91 = 0,
	.unk92 = 0,
	.unk93 = 0,
    //UNUSED VALUES END
};