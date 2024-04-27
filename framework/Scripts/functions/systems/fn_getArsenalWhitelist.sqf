#include "..\script_component.hpp";
/*
 * Author: CPL.Brostrom.A tinkered with by YonV 
 * This function return a list of items used for arsenal
 *
 * Arguments:
 * None
 *
 * Return:
 * ARRAY of items
 *
 * Example:
 * call Ghost_fnc_getArsenalWhitelist;
 */

private _classname = [player] call EFUNC(gear,getLoadoutName);
if !(isClass (missionConfigFile >> "CfgLoadouts" >> _classname)) exitWith {
    SHOW_CHAT_WARNING_1("ArsenalWhitelist", "Loadout '%1' does not exist inside of mission config. No whitelist will be created.", _classname);
    [];
};

private _loadout = parseSimpleArray getText (missionConfigFile >> "CfgLoadouts" >> _classname >> "loadout");
private _unitItems = str _loadout splitString "[]," joinString ",";
_unitItems = parseSimpleArray ("[" + _unitItems + "]");
_unitItems = _unitItems arrayIntersect _unitItems select {_x isEqualType "" && {_x != ""}};


private _commonGear = GET_CONTAINER_KEYS("arsenal_common");


private _company = call EFUNC(player,getCompany);
private _companyItems = switch (_company) do {
    case "Ghost": {GET_CONTAINER_KEYS("Ghost_company");};
    default {GET_CONTAINER_KEYS("arsenal_company_fallback");};
};


private _medicRole = getNumber (missionConfigFile >> "CfgLoadouts" >> _classname >> "abilityMedic");
private _medicGear = if (_medicRole >= 1) then {GET_CONTAINER_KEYS("bravo_company_atlas");} else {[]};


private _roleSpecific = switch ([player] call EFUNC(gear,getLoadoutRole)) do {
    case "medic": {GET_CONTAINER_KEYS("arsenal_role_medic");};
    case "engineer": {GET_CONTAINER_KEYS("arsenal_role_engineer");};
    case "communication": {GET_CONTAINER_KEYS("arsenal_role_communication");};
    case "weapons": {GET_CONTAINER_KEYS("arsenal_role_weapons");};
    case "ghost";
    default {[]};
};


private _primaryWeapon = if (!isNil{_loadout#0#0}) then {_loadout#0#0} else {""};
private _weaponSystemSpecific = switch (true) do {
    default {[]};
};

private _whitelist = _commonGear + _unitItems + _companyItems + _roleSpecific + _medicGear + _weaponSystemSpecific;

_whitelist
