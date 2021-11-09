class CfgPatches {
  class ACREFR_PBW_Compat {
	  name = "ACREFR - PBW TFAR Compat";	  
	  author = "Nilia";
	  version = "0.0.1";
	  versionStr = "0.0.1";
	  versionAr[] = {0,0,1};
      units[] = {
		  
		  "tf_mr3000",
		  "ACREFR_Item_PBW_sem52sl",
		  "ACREFR_tf_mr3000_PBW_fleck",
		  "ACREFR_tf_mr3000_PBW_tropen",
		  "ACREFR_PBW_radio_crate"
		  
	  };
      weapons[] = {
		  "ACREFR_PBW_sem52sl"
	  };			 //Nichts solange cfgWeapons.hpp in die Config.cpp geladen wird
      requiredVersion = "";
		requiredAddons[] = {
		
		"ACREFR_Core",
		"PBW_German_Radios"
		
		};	//Alle pbos auf denen die Inhallte basieren
    Url = "https://github.com/Nilia119/ACREFR";
  };
};
