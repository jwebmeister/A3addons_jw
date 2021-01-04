class CfgPatches {
    class stingerfixCFP_jw {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.00;
        requiredAddons[] = {
            "CFP_O_TBAN",
            "CFP_B_ILIDF",
            "CFP_B_USRANGERS_WDL"
        };
        version = "1.1";
        versionStr = "1.1";
        author = "JWebmeister";
        authorUrl = "http://steamcommunity.com/id/jwebmeister/myworkshopfiles/";
    };
};

class CfgVehicles {
    class CFP_O_TBAN_Team_Leader_01;
    class CFP_O_TBAN_AA_Specialist_01 : CFP_O_TBAN_Team_Leader_01 
    {
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{"CUP_launch_FIM92Stinger","","","",{"CUP_Stinger_M",1},{},""},{},{"CFP_U_KhetPartug_Short_White",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"CUP_1Rnd_HE_GP25_M",2,1}}},{"CUP_V_OI_TKI_Jacket6_06",{{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_1Rnd_HE_GP25_M",1,1}}},{},"CFP_Lungee_Open_Creme","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
    };
    class CFP_B_ILIDF_Rifleman_01;
    class CFP_B_ILIDF_AA_Specialist_01 : CFP_B_ILIDF_Rifleman_01
    {
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_X95","","","CUP_optic_MARS",{"CUP_30Rnd_556x45_X95",30},{},""},{"CUP_launch_FIM92Stinger","","","",{"CUP_Stinger_M",1},{},""},{},{"CFP_IDF_1",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_X95",3,30}}},{"CUP_V_IDF_Vest",{{"CUP_30Rnd_556x45_X95",4,30},{"CUP_HandGrenade_M67",1,1},{"Chemlight_green",1,1},{"SmokeShell",1,1}}},{"B_Kitbag_rgr",{{"CUP_Stinger_M",1,1}}},"CFP_IDF_M76","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
    };
    class CFP_B_USRANGERS_Rifleman_WDL_01;
    class CFP_B_USRANGERS_AA_Specialist_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01
    {
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_black",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{"CUP_launch_FIM92Stinger","","","",{"CUP_Stinger_M",1},{},""},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"CUP_15Rnd_9x19_M9",2,15},{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"SmokeShell",1,1}}},{"CUP_V_CPC_communicationsbelt_mc",{{"FirstAidKit",1},{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Kitbag_MCam_Grn",{{"CUP_30Rnd_556x45_PMAG_QP",1,30},{"CUP_Stinger_M",1,1}}},"CFP_OpsC_Painted","CFP_Foretex",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};
    };
};
