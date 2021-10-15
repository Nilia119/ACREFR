class CfgVehicles {
    class ReammoBox;
    class Item_Base_F;

    class Bag_Base: ReammoBox {
        tf_hasLRradio = 0;
        tf_encryptionCode = "";
        tf_range = 20000;
    };
    class TFAR_Bag_Base: Bag_Base {
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        scope = HIDDEN;
        scopeCurator = HIDDEN;
        #include "\z\tfar\addons\static_radios\edenAttributes.hpp"
    };

    #include "anprc155\CfgVehicles.hpp"
    #include "bussole\CfgVehicles.hpp"
    #include "mr3000\CfgVehicles.hpp"
    #include "rt1523g\CfgVehicles.hpp"
    #include "enoch\CfgVehicles.hpp"

