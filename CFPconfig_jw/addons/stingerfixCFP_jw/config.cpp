class CfgPatches {
    class stingerfixCFP_jw {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.00;
        requiredAddons[] = {
            "CFP_O_TBAN"
        };
        version = "1.0";
        versionStr = "1.0";
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
};
