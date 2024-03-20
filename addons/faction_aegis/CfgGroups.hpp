class CfgGroups {
    class Civilian {
        side = 3;
        class C_Iraq {
            name = "CIv_Iraqi";

            class Infantry {
                name = "Infantry";

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };
    };
    class Indep {

        class I_Takistan_Arid {
            name = "Takistan";
            class Infantry {
                name = "Infantry";

                class i_takistan_infantry_rifle_squad_arid {
                    name = "Rifle Squad";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Squad_Leader_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Radio_Operator_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_AT_Arid_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Marksman_Arid_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Team_Leader_Arid_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Autorifleman_Arid_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Ammo_Bearer_Arid_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Combat_Life_Saver_Arid_01";
                    };
                };

                class i_takistan_infantry_rifle_squad_conscripts_arid {
                    name = "Rifle Squad (Conscripts)";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Squad_Leader_Arid_02";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_SLR_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_AT_Arid_02";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Marksman_Arid_02";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Team_Leader_Arid_02";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Autorifleman_Arid_02";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_AK_74_Arid_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Combat_Life_Saver_Arid_02";
                    };
                };

                class i_takistan_infantry_weapons_squad_arid {
                    name = "Weapons Squad";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Squad_Leader_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Autorifleman_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Grenadier_Arid_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Marksman_Arid_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AT_Arid_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Ammo_Bearer_Arid_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Combat_Life_Saver_Arid_01";
                    };
                };

                class i_takistan_infantry_fire_team_arid {
                    name = "Fire Team";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Team_Leader_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Autorifleman_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Grenadier_Arid_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_AT_Arid_01";
                    };
                };

                class i_takistan_infantry_anti_armor_team_arid {
                    name = "Anti-armor Team";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Team_Leader_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AT_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AT_Arid_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                };

                class i_takistan_infantry_air_defense_team_arid {
                    name = "Air-defense Team";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Team_Leader_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AA_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AA_Arid_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                };

                class i_takistan_infantry_sentry_arid {
                    name = "Sentry";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Grenadier_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                };

            };
            class Motorized {
                name = "Motorized";

                class i_takistan_motorized_motorized_team_arid {
                    name = "Motorized Team";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_LSV_Mk_II_M134_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Autorifleman_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_AT_Arid_01";
                    };
                };

                class i_takistan_motorized_motorized_anti_armor_team_arid {
                    name = "Motorized Anti-armor Team";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_LSV_Mk_II_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AT_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AT_Arid_01";
                    };
                    class Unit3 {
                        position[] = {0,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                };

                class i_takistan_motorized_motorized_air_defense_team_arid {
                    name = "Motorized Air-defense Team";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_LSV_Mk_II_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AA_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AA_Arid_01";
                    };
                    class Unit3 {
                        position[] = {0,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                };

                class i_takistan_motorized_motorized_reinforcements_arid {
                    name = "Motorized Reinforcements";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_KamAZ_Transport_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Squad_Leader_Arid_01";
                    };
                    class Unit2 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Radio_Operator_Arid_01";
                    };
                    class Unit3 {
                        position[] = {5,-4,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_AT_Arid_01";
                    };
                    class Unit4 {
                        position[] = {5,-6,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Marksman_Arid_01";
                    };
                    class Unit5 {
                        position[] = {5,-8,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Team_Leader_Arid_01";
                    };
                    class Unit6 {
                        position[] = {5,-10,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Autorifleman_Arid_01";
                    };
                    class Unit7 {
                        position[] = {5,-12,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Ammo_Bearer_Arid_01";
                    };
                    class Unit8 {
                        position[] = {5,-14,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Combat_Life_Saver_Arid_01";
                    };
                    class Unit9 {
                        position[] = {-5,0,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Squad_Leader_Arid_01";
                    };
                    class Unit10 {
                        position[] = {-5,-2,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Radio_Operator_Arid_01";
                    };
                    class Unit11 {
                        position[] = {-5,-4,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_AT_Arid_01";
                    };
                    class Unit12 {
                        position[] = {-5,-6,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Marksman_Arid_01";
                    };
                    class Unit13 {
                        position[] = {-5,-8,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Team_Leader_Arid_01";
                    };
                    class Unit14 {
                        position[] = {-5,-10,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Autorifleman_Arid_01";
                    };
                    class Unit15 {
                        position[] = {-5,-12,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Ammo_Bearer_Arid_01";
                    };
                    class Unit16 {
                        position[] = {-5,-14,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Combat_Life_Saver_Arid_01";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support";

            };
            class Mechanized {
                name = "Mechanized";

                class i_takistan_mechanized_mechanized_rifle_squad_arid {
                    name = "Mechanized Rifle Squad";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side= 2;
                        vehicle = "I_Takistan_MSE_3Marid_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Squad_Leader_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Radio_Operator_Arid_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_AT_Arid_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Marksman_Arid_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Team_Leader_Arid_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Autorifleman_Arid_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Ammo_Bearer_Arid_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Combat_Life_Saver_Arid_01";
                    };
                };

                class i_takistan_mechanized_mechanized_anti_armor_squad_arid {
                    name = "Mechanized Anti-armor Squad";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side= 2;
                        vehicle = "I_Takistan_BM_2T_Stalker_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Squad_Leader_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Autorifleman_Arid_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AT_Arid_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AT_Arid_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AT_Arid_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                };

                class i_takistan_mechanized_mechanized_air_defense_squad_arid {
                    name = "Mechanized Air-defense Squad";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side= 2;
                        vehicle = "I_Takistan_BM_2T_Stalker_Arid_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Squad_Leader_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Autorifleman_Arid_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AA_Arid_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AA_Arid_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_Missile_Specialist_AA_Arid_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side= 2;
                        vehicle = "I_Takistan_Rifleman_Arid_01";
                    };
                };

            };
            class Armored {
                name = "Armored";

                class i_takistan_armored_tank_platoon_arid {
                    name = "Tank Platoon";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side= 2;
                        vehicle = "I_Takistan_T100_Black_Eagle_Arid_01";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_T100_Black_Eagle_Arid_01";
                    };
                    class Unit2 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_T100_Black_Eagle_Arid_01";
                    };
                    class Unit3 {
                        position[] = {20,-20,0};
                        rank = "CORPORAL";
                        side= 2;
                        vehicle = "I_Takistan_T100_Black_Eagle_Arid_01";
                    };
                };

                class i_takistan_armored_tank_section_arid {
                    name = "Tank Section";
                    side = 2;
                    faction = "I_Takistan_Arid";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side= 2;
                        vehicle = "I_Takistan_T100_Black_Eagle_Arid_01";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side= 2;
                        vehicle = "I_Takistan_T100_Black_Eagle_Arid_01";
                    };
                };

            };
            class Artillery {
                name = "Artillery";

            };
            class Naval {
                name = "Naval";

            };
            class Air {
                name = "Air";

            };
            class Airborne {
                name = "Airborne";

            };
        };
    };
};