class CBA_Extended_EventHandlers;
class CfgVehicles {
	class B_A_Plane_Transport_01_infantry_F;
	class Plane_Transport_01_vehicle_base_F;
	class GVAR(Plane_Transport_01_infantry_F): B_A_Plane_Transport_01_infantry_F {
		scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		faction="BLU_F";
        crew="B_Pilot_F";
        typicalCargo[]={"B_Soldier_F"};
		hiddenSelectionsTextures[]={"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_olive_CO.paa", "\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_olive_CO.paa", "\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"};
	};
	class B_Plane_Transport_01_vehicle_F : Plane_Transport_01_vehicle_base_F{
        author="$STR_A3_A_AveryTheKitty";
        scope=2;
        scopeCurator=2;
    };
};
