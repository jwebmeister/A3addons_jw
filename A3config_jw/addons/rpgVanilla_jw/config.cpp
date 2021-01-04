class CfgPatches {
    class rpgVanilla_jw {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.00;
        requiredAddons[] = {
            "A3_Weapons_F",
            "A3_Weapons_F_Exp",
            "A3_Weapons_F_Tank"
        };
        version = "1.1";
        versionStr = "1.1";
        author = "JWebmeister";
        authorUrl = "http://steamcommunity.com/id/jwebmeister/myworkshopfiles/";
    };
};

class Mode_SemiAuto;

class CfgWeapons {
    class Launcher_Base_F;
    class launch_RPG7_F : Launcher_Base_F 
    {
        class Single : Mode_SemiAuto 
        {
            aiRateOfFire = 7;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 7;
            minRange = 5; 
            minRangeProbab = 0.56;
            midRange = 250;
            midRangeProbab = 0.9;
            maxRange = 400;
            maxRangeProbab = 0.4;
        };
    };
};

class CfgAmmo {
    class RocketBase;
    class R_PG7_F : RocketBase 
    {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 30;
    };
    class R_PG32V_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 30;
    };
    class R_MRAAWS_HEAT_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
        cost = 30;
    };
    class M_SPG9_HEAT : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
        cost = 30;
    };
};
