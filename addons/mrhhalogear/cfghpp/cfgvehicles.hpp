	#include "MRH_C_Path.hpp"
/*
["H_PilotHelmetFighter_B","H_HelmetB","ItemCore","Default"]
class H_PilotHelmetFighter_B 
{
	MRH_hypoxiaRebreather = 1;
};
*/
class Bag_Base;
class B_Parachute : Bag_Base {};
class ghostf_AADEquippedParachute : B_Parachute {
	displayName = $STR_MRH_MRHHaloGear_AADChute;
	scope = 2;
};
class ACE_NonSteerableParachute;
class ghostf_AADEquippedNSParachute : ACE_NonSteerableParachute {
	displayName = $STR_MRH_MRHHaloGear_AADChuteNS;
	scope = 2;
};
class Man;
    class CAManBase: Man  {
		/*
		class EventHandlers {
		init = "_this call MRH_fnc_MilsimTools_EnhancedMap_replaceVanillaMap;";
		
		};
		*/
        class ACE_SelfActions {
			class ACE_Equipment {
				class MRH_SetAAS {
					displayName = $STR_MRH_MRHHaloGear_AADSettingSelfAC;
					condition = "(([player] call MRH_fnc_MilsimTools_HaloGear_hasAADParachute) && (['MRH_MilsimTools_HaloGear_allowManualAADSetting']call cba_settings_fnc_get))";
					exceptions[] = {"isNotSitting","isNotInside"};
					statement = "[_player] call MRH_fnc_MilsimTools_HaloGear_AADMenuOnload";
					icon = "";
					
				};
				
			};

		};
	};


	#define MACRO_ATTACHAAD \
    class ACE_Actions { \
       class ACE_MainActions  { \
					class MRH_AttachAAD { \
						displayName = $STR_MRH_MRHHaloGear_ATTACHAAD; \
						condition = "(!(_target getVariable ['MRH_HaloGear_itemAsAAD',false]) && ('ghostf_AAD_Item' in items _player))"; \
						statement = "_target setVariable ['MRH_HaloGear_itemAsAAD',true,true]; _player removeItem 'ghostf_AAD_Item'; hint localize 'STR_MRH_MRHHaloGear_HintAADAdded';"; \
						exceptions[] = {"isNotSwimming"}; \
						showDisabled = 0; \
						icon = ""; \
					}; \
					class MRH_DetachAAD { \
						displayName = $STR_MRH_MRHHaloGear_REMOVEHAAD; \
						condition = "_target getVariable ['MRH_HaloGear_itemAsAAD',false]"; \
						statement = "[_target] call MRH_fnc_MilsimTools_HaloGear_removeObjectAAD; _player addItem 'ghostf_AAD_Item'; hint localize 'STR_MRH_MRHHaloGear_HintAADRemoved';"; \
						exceptions[] = {"isNotSwimming"}; \
						showDisabled = 0; \
						icon = ""; \
					}; \
					class MRH_ChangeAADSetting { \
						displayName = $STR_MRH_MRHHaloGear_AADSettingSelfAC; \
						condition = "_target getVariable ['MRH_HaloGear_itemAsAAD',false]"; \
						statement = "[_target] call MRH_fnc_MilsimTools_HaloGear_AADMenuOnLoad"; \
						exceptions[] = {"isNotSwimming"}; \
						showDisabled = 0; \
						icon = ""; \
					}; \
        }; \
	};
	class ThingX;
	class ReammoBox_F : ThingX 	{
		MACRO_ATTACHAAD
	};
	class LandVehicle;
	class Car : LandVehicle {
		MACRO_ATTACHAAD
	};

	class Ship;
	class Ship_F : Ship {
		MACRO_ATTACHAAD
	};

	class Tank: LandVehicle {
		MACRO_ATTACHAAD
	};

	class Motorcycle: LandVehicle {
		MACRO_ATTACHAAD
	};