
class CfgPatches {
	class MRHZeusModules{
		units[] = {
			"MRH_Module_Base",
			"MRH_HeliTaxiControls",
			"MRH_SimpleConv",
			"MRH_AttributeVar",
			"MRH_AddObjectToHalo",
			"MRH_SimpleHaloJump",
			"MRH_attributeData",
			"MRH_attributeDataForHack",
			"MRH_createData",
			"MRH_setForSurrender",
			"MRH_setZeus"
		}; //
		weapons[] = {}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"MRHMilsimTools","A3_Modules_F"}; //
	};
};
//addondialogs

#include "\mrhzeusmodules\Dialogs\HeliNumberPerSide.hpp"
//the above contains the link to defines.hpp and must always be left 1st
#include "\mrhzeusmodules\Dialogs\SimpleAceConv.hpp"
#include "\mrhzeusmodules\Dialogs\ChangeVar.hpp"
#include "\mrhzeusmodules\Dialogs\simpleHalo.hpp"
#include "\mrhzeusmodules\Dialogs\attributeDataMenu.hpp"
#include "\mrhzeusmodules\Dialogs\attributeDataForHackMenu.hpp"
#include "\mrhzeusmodules\Dialogs\dataCreator.hpp"
#include "\mrhzeusmodules\Dialogs\setSurrenderMenu.hpp"

//
class CfgFactionClasses
{
	class NO_CATEGORY;
	class MRH_MilsimTools_Modules: NO_CATEGORY
	{
		displayName = "MRH Modules";
		//priority = 2;
		//side = 7;
	};
};

//----------addon dialogs
//#include "\mrhzeusmodules\Dialogs\.hpp"

//---------- addon cfgs

class cfgFunctions
{
#include "\mrhzeusmodules\Functions\cfgFunctions.hpp"
};

/*
class cfgSounds
{
	#include "\mrhzeusmodules\Sounds\cfgsounds.hpp"
};
*/

class cfgVehicles
{
	#include "\mrhzeusmodules\cfghpp\cfgvehicles.hpp"
};

/*
class cfgWeapons
{
	#include "\mrhzeusmodules\cfghpp\cfgweapons.hpp"
};
*/
//------------Extended XEH
/*
class Extended_PostInit_EventHandlers
{
   
   class \MRHZeusModules_
   {
      clientInit = "call compile preProcessFileLineNumbers '\mrhzeusmodules\Functions\fn_.sqf'";
   };
      
	
};
*/
