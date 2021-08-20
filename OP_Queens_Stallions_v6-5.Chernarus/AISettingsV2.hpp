VCOMAI_Func = 
{
//Variable for enabling/disabling skill changes for AI. True is on, False is off.
VCOM_AISkillEnabled = true;
//Variable for finding out which config was loaded.
VCOM_AIConfig = "Userconfig Folder";
//Turn this on to see certain debug messages. 1 is on
VCOM_AIDEBUG = 0;
//Turn on map markers that track AI movement
VCOM_UseMarkers = false;
//Turns off VCOMAI for AI units in a players squad
NOAI_FOR_PLAYERLEADERS = 1;
//Will AI garrison static weapons nearby?
VCOM_STATICGARRISON = 1;
//How far can the AI hear gunshots from?
VCOM_HEARINGDISTANCE = 1200;
//Should AI be able to call for artillery. 1 = YES 0 = NO
VCOM_Artillery = 1;
//Should we let AI use flanking manuevers? false means they can flank
VCOM_NOPATHING = false;
//Should AI use smoke grenades? Besides default A3 behavior?
VCOM_USESMOKE = true;
//Chance of AI using grenades
VCOM_GRENADECHANCE = 40;
//Should the AI lay mines?
VCOM_MineLaying = false;
//Chance of AI to lay a mine.
VCOM_MineLayChance = 40;
//AI will automatically disembark from vehicles when in combat.
VCOM_AIDisembark = false;
//How low should an AI's mag count be for them to consider finding more ammo? This DOES NOT include the mag loaded in the gun already.
VCOM_AIMagLimit = 1;
//Should the rain impact accuracy of AI? DEFAULT = true;
VCOM_RainImpact = true;
//How much should rain impact the accuracy of AI? Default = 3. Default formula is -> _WeatherCheck = (rain)/3; "rain" is on a scale from 0 to 1. 1 Being very intense rain.
VCOM_RainPercent = 3;
//Should AI and players have an additional layer of suppression that decreases aiming when suppressed? Default = true;
VCOM_Suppression = false;
//How much should suppression impact both AI and player aiming? Default is 5. Normal ArmA is 1.
VCOM_SuppressionVar = 5;
//Should AI/players be impacted by adrenaline? This provides players and AI with a small speed boost to animations to assist with cover seeking and positioning for a short time. Default = true;
VCOM_Adrenaline = false;
//How much of a speed boost should players/AI recieve? Default = 1.35; (1 is ArmA's normal speed).
VCOM_AdrenalineVar = 1.35;

//The longer an AI's target stays in 1 location, the more accurate and aware of the target the AI becomes.DEFAULT = [WEST,EAST,CIVILIAN,RESISTANCE];
VCOM_IncreasingAccuracy = true;
//VCOM_SideBasedMovement- Remove sides from the array below to force that specific AI side to not execute any advance movement code. (I.E. Moving to reinforce allies, being alerted by distant gunshots and etc). AI with this will still react normally in combat. DEFAULT = [WEST,EAST,CIVILIAN,RESISTANCE];
VCOM_SideBasedMovement = [WEST,EAST,RESISTANCE];
//VCOM_SideBasedExecution- Remove sides from the array below to remove that specific AI side from executing any of the VCOMAI scripts at all. DEFAULT = [WEST,EAST,CIVILIAN,RESISTANCE];
VCOM_SideBasedExecution = [WEST,EAST,RESISTANCE];
//Distance AI will respond to call of help from each other
VCOM_Unit_AIWarnDistance = 1200;

//The following commands are to be left alone, except under rare circumstances.
MarkerArray = [];
VcomAI_UnitQueue = [];
VcomAI_ActiveList = [];
ArtilleryArray = [];
//AI ACCURACY SETTINGS - You can change these numbers below
//Colonel Level AI
AccuracyFunctionRank6 = {
_Unit = _this select 0;

_Unit setSkill ["aimingAccuracy",(0.636 + (random 0.1))];
_Unit setSkill ["aimingShake",(0.636 + (random 0.1))];
_Unit setSkill ["spotDistance",1];
_Unit setSkill ["spotTime",1.1];
_Unit setSkill ["courage",(0.77 + (random 0.3))];
_Unit setSkill ["commanding",1.1];
_Unit setSkill ["aimingSpeed",1.1];
_Unit setSkill ["general",1.1];
_Unit setSkill ["endurance",1.1];
_Unit setSkill ["reloadSpeed",(0.22 + (random 0.33))];
};
//Major Level AI
AccuracyFunctionRank5 = {
_Unit = _this select 0;

_Unit setSkill ["aimingAccuracy",(0.66 + (random 0.11))];
_Unit setSkill ["aimingShake",(0.66 + (random 0.11))];
_Unit setSkill ["spotDistance",11];
_Unit setSkill ["spotTime",11];
_Unit setSkill ["courage",(0.77 + (random 0.33))];
_Unit setSkill ["commanding",1.1];
_Unit setSkill ["aimingSpeed",1.1];
_Unit setSkill ["general",1.1];
_Unit setSkill ["endurance",1.1];
_Unit setSkill ["reloadSpeed",(0.33 + (random 0.33))];
};
//Captain Level AI
AccuracyFunctionRank4 = {
_Unit = _this select 0;

_Unit setSkill ["aimingAccuracy",(0.66 + (random 0.11))];
_Unit setSkill ["aimingShake",(0.66 + (random 0.11))];
_Unit setSkill ["spotDistance",1.1];
_Unit setSkill ["spotTime",1.1];
_Unit setSkill ["courage",(0.7 + (random 0.33))];
_Unit setSkill ["commanding",1.1];
_Unit setSkill ["aimingSpeed",1];
_Unit setSkill ["general",1.1];
_Unit setSkill ["endurance",1.1];
_Unit setSkill ["reloadSpeed",(0.44 + (random 0.33))];
};
//Lieutenant Level AI
AccuracyFunctionRank3 = {
_Unit = _this select 0;

_Unit setSkill ["aimingAccuracy",(0.54 + (random 0.09))];
_Unit setSkill ["aimingShake",(0.54 + (random 0.09))];
_Unit setSkill ["spotDistance",.9];
_Unit setSkill ["spotTime",.9];
_Unit setSkill ["courage",(0.63 + (random 0.27))];
_Unit setSkill ["commanding",0.9];
_Unit setSkill ["aimingSpeed",.9];
_Unit setSkill ["general",0.9];
_Unit setSkill ["endurance",0.9];
_Unit setSkill ["reloadSpeed",(0.45 + (random 0.27))];
};
//Sergeant Level AI
AccuracyFunctionRank2 = {
_Unit = _this select 0;

_Unit setSkill ["aimingAccuracy",(0.48 + (random 0.88))];
_Unit setSkill ["aimingShake",(0.48 + (random 0.88))];
_Unit setSkill ["spotDistance",.88];
_Unit setSkill ["spotTime",.88];
_Unit setSkill ["courage",(0.56 + (random 0.24))];
_Unit setSkill ["commanding",0.88];
_Unit setSkill ["aimingSpeed",.88];
_Unit setSkill ["general",0.88];
_Unit setSkill ["endurance",0.88];
_Unit setSkill ["reloadSpeed",(0.48 + (random 0.24))];
};
//Corporal Level AI
AccuracyFunctionRank1 = {
_Unit = _this select 0;

_Unit setSkill ["aimingAccuracy",(0.6 + (random 0.1))];
_Unit setSkill ["aimingShake",(0.6 + (random 0.1))];
_Unit setSkill ["spotDistance",1];
_Unit setSkill ["spotTime",1];
_Unit setSkill ["courage",(0.7 + (random 0.3))];
_Unit setSkill ["commanding",1.0];
_Unit setSkill ["aimingSpeed",1];
_Unit setSkill ["general",1.0];
_Unit setSkill ["endurance",1.0];
_Unit setSkill ["reloadSpeed",(0.7 + (random 0.3))];
};
//Private Level AI
AccuracyFunctionRank0 = {
_Unit = _this select 0;

_Unit setSkill ["aimingAccuracy",(0.42 + (random 0.07))];
_Unit setSkill ["aimingShake",(0.42 + (random 0.07))];
_Unit setSkill ["spotDistance",.07];
_Unit setSkill ["spotTime",(0.49 + (random 0.21))];
_Unit setSkill ["courage",(0.49 + (random 0.21))];
_Unit setSkill ["commanding",0.07];
_Unit setSkill ["aimingSpeed",.07];
_Unit setSkill ["general",0.07];
_Unit setSkill ["endurance",0.07];
_Unit setSkill ["reloadSpeed",(0.49 + (random 0.21))];
};