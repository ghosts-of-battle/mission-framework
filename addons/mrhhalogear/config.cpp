
class CfgPatches {
	class MRHHaloGear
	{
		units[] = {"ghostf_AADEquippedParachute","ghostf_AADEquippedNSParachute"}; //
		weapons[] = {"ghostf_AAD_Item","ghostf_HaloMaskNoESS","ghostf_HaloMask","ghostf_HaloMaskBroken"}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"MRHMilsimTools"}; //
	};
};

#include "\mrhhalogear\Models\cfgGlasses.hpp"

//----------addon dialogs
#include "\mrhhalogear\Dialogs\AASDialogs.hpp"

//---------- addon cfgs

class cfgFunctions
{
#include "\mrhhalogear\Functions\cfgFunctions.hpp"
};


class cfgSounds
{
	#include "\mrhhalogear\Sounds\cfgsounds.hpp"
};


class cfgVehicles
{
	#include "\mrhhalogear\cfghpp\cfgvehicles.hpp"
};


class cfgWeapons
{
	#include "\mrhhalogear\cfghpp\cfgweapons.hpp"
};

class Extended_PostInit_EventHandlers
{

   class MRHHaloGear_parseSettings
   {
      serverInit = "call compile preProcessFileLineNumbers '\mrhhalogear\Functions\fn_MilsimTools_HaloGear_parseSettings.sqf'";
   };
      
	
};
