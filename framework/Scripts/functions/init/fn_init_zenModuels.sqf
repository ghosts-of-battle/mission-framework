#include "..\script_component.hpp";
/*
 * Author: CPL.Brostrom.A tinkered with by YonV, SPC.Turn.J
 * This function load all Ghost modules. Requires Zen Mod to run propperly. The function will terminate if not.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * call Ghost_fnc_init_zenModuels
 *
 * Public: No
 */

if !(EGVAR(patches,usesZen)) exitWith {};
if !(EGVAR(Settings,enableGhostZeusModules)) exitWith {};

INFO("init", "Initializing custom Zen Modules.");

["Ghost AI", "Enable Unit Simulation",
    {
        params ["_modulePos", "_objectPos"];
        [_modulePos, _objectPos] call EFUNC(zenModule,EnableUnitSimulation);    
    },
    "\A3\ui_f\data\map\vehicleicons\iconManVirtual_ca.paa"
] call zen_custom_modules_fnc_register;


["Ghost Logistics", "Spawn Starter Crate",
    {
        params ["_modulePos", "_objectPos"];
        [_modulePos, _objectPos] call EFUNC(zenModule,CreateStarterCrate);    
    },
    "\A3\ui_f\data\map\vehicleicons\iconCrate_ca.paa"
] call zen_custom_modules_fnc_register;

// ["Ghost Logistics", "Rekit Vehicle",
//     {
//         params ["_modulePos", "_objectPos"];
//         [_modulePos, _objectPos] call EFUNC(zenModule,RekitVehicle);    
//     },
//     "\A3\ui_f\data\map\vehicleicons\iconCrate_ca.paa"
// ] call zen_custom_modules_fnc_register;

// Check if increase training on location is true then add option.
// if (ace_medical_treatment_locationsBoostTraining) then {
//     ["Ghost Logistics", "Field Hospital",
//         {
//             params ["_modulePos", "_objectPos"];
//             [_modulePos, _objectPos] call EFUNC(zenModule,CreateFieldHospital);
//         },
//         "\z\ACE\addons\medical_gui\ui\cross.paa"
//     ] call zen_custom_modules_fnc_register;
// };

["Ghost Logistics", "Spawn Re-supply Crate",
    {
        params ["_modulePos", "_objectPos"];
        [_modulePos, _objectPos] call EFUNC(zenModule,CreateSupplyCrate);
    },
    "\A3\ui_f\data\map\vehicleicons\iconCrate_ca.paa"
] call zen_custom_modules_fnc_register;


["Ghost Utilities", "Apply Loadout",
    {
        params ["_modulePos", "_objectPos"];
        [_modulePos, _objectPos] call EFUNC(zenModule,ApplyLoadout);
    },
    "\a3\modules_f\data\portraitmodule_ca.paa"
] call zen_custom_modules_fnc_register;

["Ghost Utilities", "Regear Trooper",
    {
        params ["_modulePos", "_objectPos"];
        [_modulePos, _objectPos] call EFUNC(zenModule,RegearTrooper);
    },
    "\a3\modules_f\data\portraitmodule_ca.paa"
] call zen_custom_modules_fnc_register;

if (EGVAR(Settings,enableRadios)) then {
    ["Ghost Utilities", "Reset Radio",
        {
            params ["_modulePos", "_objectPos"];
            [_modulePos, _objectPos] call EFUNC(zenModule,ResetPlayerRadio);
        },
        "\a3\modules_f\data\portraitmodule_ca.paa"
    ] call zen_custom_modules_fnc_register;
};


["Ghost Mission", "Call Endex",
    {
        params ["_modulePos", "_objectPos"];
        [_modulePos, _objectPos] call EFUNC(zenModule,CallEndex);
    },
    "\a3\modules_f\data\portraitmodule_ca.paa"
] call zen_custom_modules_fnc_register;

["Ghost Mission", "Take attendence",
    {
        private _playerLog = missionNamespace getVariable [QEGVAR(log,players), []];
        ["All attended players have been saved to your RPT log"] call zen_common_fnc_showMessage;
    },
    "\a3\modules_f\data\portraitmodule_ca.paa"
] call zen_custom_modules_fnc_register;

["Ghost Mission", "Staging Zones",
    {
        params ["_modulePos", "_objectPos"];
        [_modulePos, _objectPos] call EFUNC(zenModule,stagingZones);
    },
    "\a3\modules_f\data\portraitmodule_ca.paa"
] call zen_custom_modules_fnc_register;

INFO("init", "Custom Zen Modules initialization complete");
