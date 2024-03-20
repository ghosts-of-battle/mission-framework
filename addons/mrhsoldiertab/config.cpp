class CfgPatches {
	class SoldierTab{
		units[] = {"B_MRH_HQ_Module","O_MRH_HQ_Module","I_MRH_HQ_Module","C_MRH_HQ_Module"}; //
		weapons[] = {"MRH_SoldierTab"}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"MRHMilsimTools","MRHZeusModules","MRHMarkers"}; //
	};
};

//interface components
#include "\mrhsoldiertab\dialogs\defines.hpp"
#include "\mrhsoldiertab\dialogs\dialogsSoldierTablet.hpp"
#include "\mrhsoldiertab\dialogs\videoChoiceMenu.hpp"
//

class cfgFunctions
{
#include "\mrhsoldiertab\Functions\cfgFunctions.hpp"
};
class cfgSounds
{
	#include "\mrhsoldiertab\cfghpp\cfgsounds.hpp"
};

class cfgVehicles
{
	#include "\mrhsoldiertab\cfghpp\cfgvehicles.hpp"
};
class Extended_PostInit_EventHandlers
{
   
   class MRHMilsimTools_SoldierTab_parseCfgPictures
   {
      serverInit = "call compile preProcessFileLineNumbers '\mrhsoldiertab\Functions\fn_MilsimTools_SoldierTab_parseCfgPictures.sqf'";
   };
      
	class MRHMilsimTools_SoldierTab_parseMissionData
   {
      serverInit = "call compile preProcessFileLineNumbers '\mrhsoldiertab\Functions\fn_MilsimTools_SoldierTab_parseMissionData.sqf'";
   };
};

class CfgWeapons
{
	#include "\mrhsoldiertab\models\Tablet\tablet.hpp"
};
