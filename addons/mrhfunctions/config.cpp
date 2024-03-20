class CfgPatches {
	class MRHFunctions{
		units[] = {}; //
		weapons[] = {"ghostf_HackingTool"}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"MRHMilsimTools"}; //
	};
};

//////=========cfgFunctions========
class CfgFunctions
{
	#include "\mrhfunctions\functions\cfgfunctions.hpp"
};
////=============fincfgFunctions

/////=========cfgSounds==========
class CfgSounds
{
	#include "\mrhfunctions\sounds\cfgsounds.hpp"
};
////=============fincfgSounds=====

class cfgWeapons
{
	#include "\mrhfunctions\models\hackphone\hackphone.hpp"
};

class Cfg3DEN
{
	#include "\mrhfunctions\cfghpp\cfg3DEN.hpp"
};
////=====================FinDesCFG=================================================



///==========composants des menusCORE====

/////////////////======Ressources MRHHACKPHONE
#include "\mrhfunctions\dialogsHPP\definesHACKPHONE.hpp"

/////////////////======Fin Ressources MRHRoster
#include "\mrhfunctions\dialogsHPP\dialogsMRHconv.hpp"


class RscTitles
{
	#include "\mrhfunctions\dialogsHPP\dialogsHACKPHONE.hpp"
	#include "\mrhfunctions\dialogsHPP\dialogsMRHconv2.hpp"
};
///==========FINcomposants des menusCORE====


class cfgVehicles
{
	class Man;
	class Camping_base_F;
	class CAManBase: Man 
	{
		 class ACE_Actions 
		 {
				class MRH_Conversation_MainConvAction
				{
					displayName = $STR_MRH_FC_CFGTALKACTIONPOINT;
					icon = "";
					distance = 2;
					selection = "head";  
						
				};  
   		 };
	};

	class Land_MedicalTent_01_base_F : Camping_base_F
	{
		class EventHandlers {
		init = "_this call MRH_fnc_MilsimTools_Functions_medicalTentAction;";
		
	};
		

		class ACE_Actions 
		 {
				class MRH_TentAction_Door1
				{
					displayName = $STR_MRH_FUNCS_ActionOpenTent;
					icon = "\mrhfunctions\img\zip.paa";
					distance = 5.5;
					selection = "door1";  
						
				};

				class MRH_TentAction_Door2
				{
					displayName = $STR_MRH_FUNCS_ActionOpenTent;
					icon = "\mrhfunctions\img\zip.paa";
					distance = 5.5;
					selection = "door2";  
						
				}; 
   		 };
	};

};