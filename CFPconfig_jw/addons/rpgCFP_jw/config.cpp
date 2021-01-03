class CfgPatches {
    class rpgCFP_jw {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.00;
        requiredAddons[] = {
            "CFP_O_TBAN",
            "CFP_O_BOKOHARAM"
        };
        version = "1.0";
        versionStr = "1.0";
        author = "JWebmeister";
        authorUrl = "http://steamcommunity.com/id/jwebmeister/myworkshopfiles/";
    };
};

class CfgVehicles {
    class CFP_O_TBAN_Team_Leader_01;
    class CFP_O_TBAN_AT_Rifleman_01: CFP_O_TBAN_Team_Leader_01 
    {
        magazines[]=
        {
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_TBG7V_M",
            "CUP_PG7VL_M",
            "CUP_PG7VL_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_TBG7V_M",
            "CUP_PG7VL_M",
            "CUP_PG7VL_M"
        };
        ALiVE_orbatCreator_loadout[]=
        {
            
            {
                "CUP_arifle_AK74",
                "",
                "",
                "",
                
                {
                    "CUP_30Rnd_545x39_AK_M",
                    30
                },
                {},
                ""
            },
            
            {
                "CUP_launch_RPG7V",
                "",
                "",
                "",
                
                {
                    "CUP_TBG7V_M",
                    1
                },
                {},
                ""
            },
            {},
            
            {
                "CUP_O_TKI_Khet_Partug_02",
                
                {
                    
                    {
                        "FirstAidKit",
                        1
                    },
                    
                    {
                        "CUP_30Rnd_545x39_AK_M",
                        1,
                        30
                    }
                }
            },
            
            {
                "CUP_V_OI_TKI_Jacket4_05",
                
                {
                    
                    {
                        "CUP_30Rnd_545x39_AK_M",
                        2,
                        30
                    }
                }
            },
            
            {
                "CUP_B_TKI_Backpack_Gunner_RPG",
                
                {
                    
                    {
                        "CUP_PG7VL_M",
                        2,
                        1
                    }
                }
            },
            "CUP_H_TKI_Pakol_2_02",
            "",
            {},
            
            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
    };
    class CFP_O_TBAN_Rifleman_AK_47_02;
    class CFP_O_TBAN_AT_Rifleman_2_01: CFP_O_TBAN_Rifleman_AK_47_02
    {
        magazines[]=
        {
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_TBG7V_M",
            "CUP_PG7VL_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_TBG7V_M",
            "CUP_PG7VL_M"
        };
        ALiVE_orbatCreator_loadout[]=
        {
            
            {
                "CUP_arifle_AK74",
                "",
                "",
                "",
                
                {
                    "CUP_30Rnd_545x39_AK_M",
                    30
                },
                {},
                ""
            },
            
            {
                "CUP_launch_RPG7V",
                "",
                "",
                "",
                
                {
                    "CUP_TBG7V_M",
                    1
                },
                {},
                ""
            },
            {},
            
            {
                "CUP_O_TKI_Khet_Partug_04",
                
                {
                    
                    {
                        "FirstAidKit",
                        1
                    },
                    
                    {
                        "CUP_30Rnd_545x39_AK_M",
                        1,
                        30
                    }
                }
            },
            
            {
                "CUP_V_OI_TKI_Jacket4_01",
                
                {
                    
                    {
                        "CUP_30Rnd_545x39_AK_M",
                        2,
                        30
                    }
                }
            },
            
            {
                "CFP_RPGPack_Khaki",
                
                {
                    
                    {
                        "CUP_PG7VL_M",
                        2,
                        1
                    }
                }
            },
            "CUP_H_TKI_Lungee_02",
            "",
            {},
            
            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
    };
    class CFP_O_BH_Rifleman_AK47_01;
    class CFP_O_BH_Rifleman_AT_AK47_01: CFP_O_BH_Rifleman_AK47_01
    {
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_TBG7V_M",
            "CUP_PG7V_M",
            "CUP_PG7V_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_TBG7V_M",
            "CUP_PG7V_M",
            "CUP_PG7V_M"
        };
        ALiVE_orbatCreator_loadout[]=
        {
            
            {
                "CUP_arifle_AK47",
                "",
                "",
                "",
                
                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            
            {
                "CUP_launch_RPG7V",
                "",
                "",
                "",
                
                {
                    "CUP_TBG7V_M",
                    1
                },
                {},
                ""
            },
            {},
            
            {
                "CFP_U_KhetPartug_Short_M81",
                
                {
                    
                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        1,
                        30
                    }
                }
            },
            
            {
                "V_TacChestrig_oli_F",
                
                {
                    
                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        5,
                        30
                    }
                }
            },
            
            {
                "CUP_B_RPGPack_Khaki",
                
                {
                    
                    {
                        "CUP_PG7V_M",
                        3,
                        1
                    }
                }
            },
            "H_Shemag_olive",
            "",
            {},
            
            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
    };
};
