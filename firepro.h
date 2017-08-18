#include <stddefs.h>

struct FPSTRING
{
	BYTE len_fpString;
	CHAR fpString[len_fpString];
};

struct chunk
{
	int chunkNum;
	int blank0;
	int chunkOffset;
	int blank1;
};

struct savechunk
{
	chunk chunkOptions;
	chunk chunkRemap;
	chunk chunkMenu;
	chunk chunkStats;
	chunk chunkWrestlers;
	chunk chunkReferee;
	chunk chunkRing;
	chunk chunkOrganization;
	chunk chunkGroup;
	chunk chunkPreset;
	chunk chunkDisplayOrder;
	chunk chunkMoveName;
	chunk chunkTitleMatch;
	chunk chunkAchievement;
	chunk chunkMission;
	chunk chunkOnlineRecords;
	chunk chunkWorkshop;
};

public struct WRESTLERTEST
{	
	int ver;
	int sortingOrder;
	int weightClass;
	bool isReverseNameDispOrder;
	FPSTRING name1;
	FPSTRING name2;
	FPSTRING nickName;
	FPSTRING delimiter;
};

struct gamepad
{
	BYTE gp_guid[16];
	int gp_remap[7];
};

struct priorityAct
{
	int triggerAct;
	int moveAct;
};

struct layerTextData
{
	FPSTRING layerText;
};

struct layerText
{
	layerTextData layer_Text[16];
};

struct colors
{
	float colorA;
	float colorB;
	float colorG;
	float colorR;
};

struct layerColor
{
	colors layerColors[16];
};

struct highlights
{
	float intensity[16];
};

struct CostumeData
{
	bool valid;
	layerText layer_text[9];
	layerColor layer_color[9];
	float partsScale[5];
	highlights highlightIntensity[9];
};

struct costume
{
	int costumeVer;
	int costumeStance;
	int costumeFormSize;
	CostumeData costumeData[4];
};

public struct wrestler
{
	int ver;
	int sortingOrder;
	int weightClass;
	bool isReverseNameDispOrder;
	FPSTRING name1;
	FPSTRING name2;
	FPSTRING nickName;
	FPSTRING delimiter;
	int country;
    int height;
    int weight;
    int birthYear;
    int birthMonth;
    int birthDay;
    int groupID;
    int fightStyle;
    int reversalType;
    int sex;
    int wrestlerRank;
    int charismaRank;
    int weaponLotTbl;
    int hpRecovery;
    int hpRecovery_Bleeding;
    int bpRecovery;
    int bpRecovery_Bleeding;
    int spRecovery;
    int spRecovery_Bleeding;
    int defNeck;
    int defArm;
    int defWaist;
    int defLeg;
    int walkSpeed;
    int upDownSpeed;
    int cornerPostActType;
    int criticalType;
    bool exchangeOfStriking;
    int themeMusic;
    int voiceType_0;
    int voiceType_1;
    int voiceID_0;
    int voiceID_1;
    int specialSkill;
	int atkParam[12];
	int defParam[12];
	int skillSlot[91];
	int skillAttr[91];
	int skillVoice[91];
	int ai_Ver;
	int ai_Far_Ldmg[8];
	int ai_Far_Hdmg[8];
	int ai_Grapple_LDmg[15];
	int ai_Grapple_MDmg[15];
	int ai_Grapple_HDmg[15];
	int ai_holdBack_LDmg[7];
	int ai_holdBack_HDmg[7];
	int ai_throwToRope_LDmg[7];
	int ai_throwToRope_HDmg[7];
	int ai_leanOnCorner_LDmg[4];
	int ai_leanOnCorner_HDmg[4];
	int ai_downNearCorner_LDmg[6];
	int ai_downNearCorner_HDmg[6];
	int ai_downCenter_LDmg[3];
	int ai_downCenter_HDmg[3];
	int ai_downOnBack_LDmg[8];
	int ai_downOnBack_HDmg[8];
	int ai_downOnBack_FDmg[8];
	int ai_downOnFace_LDmg[8];
	int ai_downOnFace_HDmg[8];
	int ai_downOnFace_FDmg[8];
	int ai_stunNearCorner_LDmg[7];
	int ai_stunNearCorner_HDmg[7];
	int ai_stunCenter_LDmg[4];
	int ai_stunCenter_HDmg[4];
	int ai_stun_LDmg[5];
	int ai_stun_HDmg[5];
	int ai_stun_FDmg[5];
	int ai_guardPosision_LDmg[3];
	int ai_guardPosision_HDmg[3];
	int ai_faceLock_LDmg[3];
	int ai_faceLock_HDmg[3];
	int ai_backMount_LDmg[3];
	int ai_backMount_HDmg[3];
	int ai_breakFall_LDmg;
	int ai_breakFall_MDmg;
	int ai_breakFall_HDmg;
	int ai_backReversal[2];
	int ai_opponentOutOfRing[8];
	int ai_performance_Stun[5];
	int ai_performance_Down[5];
	int ai_performance_OutOfRing[5];
	int ai_performance_CornerPost[5];
	int ai_priorityAct_LDmg[3];
	int ai_priorityAct_HDmg[3];
	priorityAct ai_priorityAct[3];
	int ai_personalTraits;
	int ai_discreation;
	int ai_flexibility;
	int ai_cooperation;
	int ai_returnFromOutOfRingCount;
	int ai_touchCond;
	int ai_takeWeapon;
	int ai_secondAggressiveness;
	UINT flags;
	int editPoint;
	FPSTRING criticalMoveName;
	BYTE texCacheID[16]; // 9005 - Added
	bool invalidateTexCache; // 9005 - Added
	costume wrestlerCostume;
};

public struct referees
{
	FPSTRING RefereeName;
	int downTime;
	int fallCount;
	int foulCount;
	int walkSpeed;
	int outCount;
	int rumbleTime;
	int interfereTime;
	int VoiceType;
	int refereeID;
	costume refereeCostume;
};

struct rings
{
	int dates[5];
	FPSTRING ringName;
	int matKind;
	int cornerMatType;
	colors colors[15];
	int ringID;
};

struct titleOwners
{
	int wrestlerId;
	int ctrlNo;
	int costume;
	bool isSecond;
};

struct recorddata
{
	int dates[5];
	FPSTRING champion;
	FPSTRING username;
	int defenseCount;
};

struct titles
{
	int dates[5];
	FPSTRING titleName;
	int weightClass;
	int playerNum;
	int matchType;
	titleOwners titleOwner[4];
	int rule[40];
	int baseType;
	int plateType;
	colors baseColor;
	colors plateColor;
	int beltId;
	int recordDataCount;
	recorddata recordData[recordDataCount];
};

struct workshopitem
{
	int item;
	int clientId;
	LONGLONG serverId;
	bool initialPublishSuccess;
	bool isAutoEdited;
	FPSTRING title;
	FPSTRING wsDescription;
	int style;
	int wsCategory;
	int area;
	int weight;
	int gender;
	int visibility;
	FPSTRING changenotes;
};

struct subscribeitem
{
	LONGLONG publishField;
	UINT fileTimeStamp;
	FPSTRING filePath;
	FPSTRING itemTItle;
	int itemType;
	int itemId;
};

public struct organizations
{
	FPSTRING longName;
	FPSTRING shortName;
	int logoID;
};

public struct groups
{
	FPSTRING longName;
	FPSTRING shortName;
	int organizationID;
	int alignment;
};

public struct moves
{
	FPSTRING moveName;
	int move_no;
};

public struct saveOptions
{
	int seVol;
	int voiceVol;
	int bgmVol_Menu;
	int bgmVol_Entrance;
	int bgmVol_Match;
	bool vibration;
	bool entranceScene;
	int screenMode;
	int language;
	bool V_Sync;
	int screenSize; // 9005 - Added
};

public struct saveRemap
{
	gamepad gp[8];
	int kb_remap[15];
};

public struct saveMenu
{
	int matchConfig[1000]; // 9005 - Increased from 800 to 1000
};

public struct saveStats
{
	int matchNum;
	int editWrestlerNum;
	int editRefereeNum;
	int editBeltNum;
	int editRingNum;
};

public struct saveWrestlers
{
	int editWrestlerNum;
	wrestler wrestle[editWrestlerNum];
};

public struct saveReferee
{
	int editRefereeDataCount;
	referees referee[editRefereeDataCount];
};

public struct saveRing
{
	int editRingCount;
	rings ring[editRingCount];
};

public struct saveOrganization
{
	int organizationListCount;
	organizations organization[organizationListCount];
	int displayOrder[organizationListCount];
};

public struct saveGroup
{
	int groupListCount;
	groups group[groupListCount];
	int displayOrder[groupListCount];
};

public struct savePresetWrestlerGroup
{
	int presetWrestlerNum;
	int groupIDOfPresetWrestler[presetWrestlerNum];
};

public struct saveWrestlerDisplayOrder
{
	int presetWrestlerNum;
	int wrestlerDispOrderCount;
	int wrestlerDispOrder[wrestlerDispOrderCount];
};

public struct saveMoveName
{
	int changeMoveCount;
	moves move[changeMoveCount];
};

public struct saveTitleMatch
{
	int titleMatchCount;
	titles titleData[titleMatchCount];
};

public struct saveAchievement
{
	bool achivement[32];
};

public struct saveMission
{
	int missionClearRank[56];
};

public struct saveOnlineRecords
{
	int prowrestlingManual;
	int prowrestlingLogic;
	int shootManual[3];
	int shootLogic[3];
};

public struct saveWorkshop
{
	int wsWrestlerCount;
	workshopitem wsWrestlers[wsWrestlerCount];
	int wsRefereeCount;
	workshopitem wsReferees[wsRefereeCount];
	int subscribeItemCount;
	subscribeitem subscribeItems[subscribeItemCount];
	int editPoint;
	int wrestlerMoveIdCount;
	int wrestlerMoveId[wrestlerMoveIdCount];
};

public struct saveHeader
{
	int saveHeaderVersion;
	int saveChunkCount;
	int blank0[2];
	savechunk saveChunks;
	int blank1[332];
};
	
public struct FireProSave
{
	saveHeader s_Header;
	saveOptions s_Options;
	saveRemap s_Remap;
	saveMenu s_Menu;
	saveStats s_Stats;
	saveWrestlers s_Wrestlers;
	saveReferee s_Referee;
	saveRing s_Ring;
	saveOrganization s_Organization;
	saveGroup s_Group;
	savePresetWrestlerGroup s_Preset;
	saveWrestlerDisplayOrder s_DisplayOrder;
	saveMoveName s_MoveName;
	saveTitleMatch s_TitleMatch;
	saveAchievement s_Achievement;
	saveMission s_Mission;
	saveOnlineRecords s_OnlineRecords;
	saveWorkshop s_Workshop;
};