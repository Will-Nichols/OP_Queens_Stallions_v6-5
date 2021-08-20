waitUntil {!isNil "ALiVE_STATIC_DATA_LOADED"};
 
/*
 * Mil logistics convoy transport vehicles per faction
 */
 
ALIVE_factionDefaultTransport = [] call ALIVE_fnc_hashCreate;
[ALIVE_factionDefaultTransport, "ChDKZ_Opfor", ["ChDKZ_Ural", "ChDKZ_Ural_O", "ChDKZ_Gaz66", "ChDKZ_Gaz66o"]] call ALIVE_fnc_hashSet;
/*
 * Mil logistics air transport vehicles per faction
 */
 
ALIVE_factionDefaultAirTransport = [] call ALIVE_fnc_hashCreate;
[ALIVE_factionDefaultAirTransport, "ChDKZ_Opfor", ["ChDKZ_mi8"]] call ALIVE_fnc_hashSet;

//-- Set Boxes
{
	[ALIVE_factionDefaultSupplies, _x, ["ChDKZ_Basic_weapons_crate","ChDKZ_Launchers_crate","ChDKZ_machine_gun_crate","ChDKZ_Grenades_crate","ChDKZ_Special_crate"]] call ALIVE_fnc_hashSet;
} forEach ["ChDKZ_Opfor"];