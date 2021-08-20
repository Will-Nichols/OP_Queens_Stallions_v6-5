execVM "briefing.sqf";

call compile preprocessFile "staticData.sqf";
	
if (!hasInterface && !isDedicated) then {
headlessClients = [];
headlessClients set [(count headlessClients), player];
publicVariable "headlessClients";
isHC = true;
};

execVM "fn_advancedSlingLoadingInit.sqf";

setTimeMultiplier 2; 

[] execVM "VCOMAI\init.sqf";