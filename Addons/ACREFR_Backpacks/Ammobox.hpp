	class Box_ACREFR_NATO_Wps: NATO_Box_Base
	{
		author="$STR_ACREFR_backpacks_Author";
		mapSize=1.8099999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.189;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Wps_F.jpg";
		_generalMacro="Box_NATO_Wps_F";
		scope=2;
		displayName="$STR_ACREFR_backpacks_Box_NATO";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon="iconCrateWpns";
    maximumLoad = 100000;
		class TransportMagazines
		{
		};
		class TransportWeapons
    {
		};
		class TransportItems
		{
		};
    class TransportBackpacks
    {
          class _xx_ACREFR_mr3000 {
                    backpack="ACREFR_mr3000";
          				  count=10;
          };
    };
	};
