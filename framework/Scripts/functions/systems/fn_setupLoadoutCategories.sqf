#include "..\script_component.hpp";
/*
 * Author: CPL.Brostrom.A tinkered with by YonV
 * This function setup a loadout categories
 *
 * Arguments:
 * 0: Vehicle/Object/Crate <OBJECT>
 * 1: Ace Action Category <STRING>     (Optional) (Default; ACE_MainActions)
 *
 * Return Value:
 * Main category used for creation <STRING>
 *
 * Example:
 * [this, "ACE_MainActions"] call Ghost_fnc_setupLoadoutCategories;
 * [this, "ACE_SelfActions"] call Ghost_fnc_setupLoadoutCategories;
 *
 * Public: No
 */

 params[
    ["_object", objNull, [objNull]],
    ["_aceCategory", "ACE_MainActions", ["ACE_MainActions"]]
];

// Setup category
private _icon      = "Scripts\Data\Icon\icon_01.paa" call FUNC(getIcon);
private _squadIcon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa" call FUNC(getIcon);
private _speciIcon = "\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa" call FUNC(getIcon);
private _leadIcon  = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa" call FUNC(getIcon);
private _pilotIcon = "\A3\Ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa" call FUNC(getIcon);
private _iconTank  = "iconTank" call FUNC(getIcon);
private _iconIfv   = "iconAPC" call FUNC(getIcon);
private _iconCrate = "iconCrateWpns" call FUNC(getIcon);
private _iconMedic = "\z\ACE\addons\medical_gui\ui\cross.paa" call FUNC(getIcon);
private _iconEng   = "\z\ACE\addons\explosives\UI\Explosives_Menu_ca.paa" call FUNC(getIcon);
private _iconCom   = "\A3\Ui_f\data\GUI\Cfg\communicationmenu\call_ca.paa" call FUNC(getIcon);
private _iconWep   = "iconManMG" call FUNC(getIcon);

private _mainCategory = "";
if (_aceCategory == "ACE_SelfActions") then {
    [_object, "Ghost_Loadout_Cat_MainStage", "Staging Zone Loadouts", _icon, [_aceCategory], { call FUNC(checkStagingZone) }] call FUNC(createActionCategory);
    _mainCategory = "Ghost_Loadout_Cat_MainStage";
} else {
    [_object, "Ghost_Loadout_Cat_Main", "Loadouts", _icon, [_aceCategory]] call FUNC(createActionCategory);
    _mainCategory = "Ghost_Loadout_Cat_Main";
};

[_object, "Ghost_Loadout_Cat_Base",                     "Ghost", "",                  [_aceCategory, _mainCategory]] call FUNC(createActionCategory);
[_object, "Ghost_Loadout_Cat_Base_med",                 "Medic", _iconMedic,          [_aceCategory, _mainCategory, "Ghost_Loadout_Cat_Base"]] call FUNC(createActionCategory);
[_object, "Ghost_Loadout_Cat_Base_eng",                 "Engineer", _iconEng,         [_aceCategory, _mainCategory, "Ghost_Loadout_Cat_Base"]] call FUNC(createActionCategory);
[_object, "Ghost_Loadout_Cat_Base_com",                 "Communication", _iconCom,    [_aceCategory, _mainCategory, "Ghost_Loadout_Cat_Base"]] call FUNC(createActionCategory);
[_object, "Ghost_Loadout_Cat_Base_wep",                 "Weapons", _iconWep,          [_aceCategory, _mainCategory, "Ghost_Loadout_Cat_Base"]] call FUNC(createActionCategory);

_mainCategory