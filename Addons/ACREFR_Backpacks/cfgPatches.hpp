class CfgPatches {
  class ACREFR_Backpacks {
	  name = "ACREFR - Backpacks";	  
	  author = "Nilia";
	  version = "0.0.1";
	  versionStr = "0.0.1";
	  versionAr[] = {0,0,1};
      units[] = {			//Nichts solange cfgVehicles.hpp in die Config.cpp geladen wird
        "ACREFR_anarc210",
		"ACREFR_anarc164",
		"ACREFR_rt1523g",
        "ACREFR_anprc155",
        "ACREFR_mr3000",
        "ACREFR_mr3000_multicam",
        "ACREFR_anprc155_coyote",
        "ACREFR_rt1523g_sage",
        "ACREFR_rt1523g_green",
        "ACREFR_rt1523g_fabric",
        "ACREFR_rt1523g_big",
        "ACREFR_rt1523g_black",
        "ACREFR_rt1523g_big_bwmod",
        "ACREFR_mr3000_bwmod",
        "ACREFR_rt1523g_bwmod",
        "ACREFR_mr3000_bwmod_tropen",
        "ACREFR_rt1523g_big_bwmod_tropen",
        "ACREFR_rt1523g_big_rhs",
        "ACREFR_rt1523g_rhs",
        "ACREFR_mr3000_rhs",
        "ACREFR_bussole"
    };
    weapons[] = {};			 //Nichts solange cfgWeapons.hpp in die Config.cpp geladen wird
    requiredVersion = "";
		requiredAddons[] = {		 
		
		"ACREFR_Core"
		
		};	//Alle pbos auf denen die Inhallte basieren
    Url = "https://github.com/Nilia119/ACREFR";
  };
};