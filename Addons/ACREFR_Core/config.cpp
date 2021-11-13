class CfgPatches {
	class ACREFR_Core {
		name = "ACREFR - Core";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		author = "Nilia";
		authorUrl = "https://forums.bohemia.net/profile/1173289-crowdedlight/";
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0,0,1};
	};
};

class CfgMods {
  
  class ACREFR_Info {
    
    logo = "ACREFR\Addons\ACREFR_Core\Data\logo.paa";  //Logo displayed in bottom left of main menu
    logoOver = "ACREFR\Addons\ACREFR_Core\Data\logo.paa"; //Logo displayed in the mod menu when mod icon is clicked 
    logoSmall = "ACREFR\Addons\ACREFR_Core\Data\logo.paa"; //Logo displayed next to all units and vehicles in the editor 
    dlcColor[] = {0,0,0,1}; //Something about color
    hideName = 0; //Hide the name of the mod
    hidePicture = 0; //Hide the logo of the mod
    tooltipOwned = "ACRE Force Radio"; //Tooltip when mod icon is moused over in main menu
    name = "ACRE Force Radio"; //Full name of the mod 
    overview = "All TFAR Backpacks edited, without their original function,  to Work with ACRE 2 and be compatible to TFAR too."; //Description of the mod displayed in the "DLC" page of the main menu 
    action = "http://steamcommunity.com/"; //Link to take people to from "Website" button
    
  };
  
};
