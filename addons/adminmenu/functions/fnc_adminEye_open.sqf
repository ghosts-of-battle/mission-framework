#include "\z\ghostf\addons\adminmenu\script_component.hpp"

disableSerialization;

createDialog QGVAR(adminEyeDialog);

GVAR(Triggers) = allMissionObjects "EmptyDetector";
GVAR(WaveSpawners) = allMissionObjects "ghostf_ai_wavespawn";
GVAR(Garrison) = (allMissionObjects "ghostf_ai_garrison" + allMissionObjects "ghostf_ai_garrisonQuantity");


GVAR(adminEyeSelectedObj) = objNull;
//FUTURE - Area
