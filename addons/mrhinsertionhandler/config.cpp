
class CfgPatches {
	class MRHInsertionHandler{
		units[] = {}; //
		weapons[] = {}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"MRHMilsimTools"}; //
	};
};



//----------addon dialogs
#include "\mrhinsertionhandler\Dialogs\insertionmenu.hpp"
#include "\mrhinsertionhandler\Dialogs\cargopreparationinterface.hpp"
//---------- addon cfgs

class cfgFunctions
{
#include "\mrhinsertionhandler\Functions\cfgFunctions.hpp"
};

class cfgSounds
{
	#include "\mrhinsertionhandler\Sounds\cfgsounds.hpp"
};


class cfgVehicles
{
	#include "\mrhinsertionhandler\cfghpp\cfgvehicles.hpp"
};

/*
class cfgWeapons
{
	#include "mrhinsertionhandler\cfghpp\cfgweapons.hpp"
};
*/
//------------Extended XEH

class Extended_PostInit_EventHandlers
{
   
   class MRHInsertionHandler_settingsParser
   {
      serverInit = "call compile preProcessFileLineNumbers '\mrhinsertionhandler\Functions\fn_MilsimTools_InsertionHandler_parseSettings.sqf'";
   };
      
	
};

class Extended_Init_EventHandlers {
    class thingX {
        class MRH_InsertionHandler_Ace_action_thingX {
            init = "_this call MRH_fnc_MilsimTools_InsertionHandler_isLoadableObject";
        };
    };
	class LandVehicle {
        class MRH_InsertionHandler_Ace_action_LandVehicle {
            init = "_this call MRH_fnc_MilsimTools_InsertionHandler_isLoadableObject";
        };
    };
	class Boat_F {
        class MRH_InsertionHandler_Ace_action_Boat_F {
            init = "_this call MRH_fnc_MilsimTools_InsertionHandler_isLoadableObject";
        };
    };
};