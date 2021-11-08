class ACREFR_mr3000: ACREFR_Bag_Base {
    scope = 2;
    scopeCurator = 2;
	scopeArsenal = 2;
    author = "Raspu, Gandi, Nkey, Nilia";
    displayName = "$STR_ACREFR_backpacks_MR3000";
    descriptionShort = "$STR_ACREFR_backpacks_MR3000_Desc";
    picture = "ACREFR_Backpacks\mr3000\ui\mr3000_icon.paa";
    model = "ACREFR_Backpacks\models\clf_nicecomm2_prc117g";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"ACREFR_Backpacks\models\data\clf_nicecomm2_csat_multi_co.paa"};
    maximumLoad = 240;
    mass = 20;
};

class ACREFR_mr3000_multicam: ACREFR_mr3000 {
    author = "Raspu, Gandi, Nkey, Nilia";
    displayName = "$STR_ACREFR_backpacks_MR3000_Multicam";
    descriptionShort = "$STR_ACREFR_backpacks_MR3000_Multicam_Desc";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"ACREFR_Backpacks\models\data\clf_nicecomm2_co.paa"};
};

class ACREFR_mr3000_bwmod: ACREFR_mr3000 {
    displayName = "$STR_ACREFR_backpacks_MR3000_BWMOD";
    descriptionShort = "$STR_ACREFR_backpacks_MR3000_BWMOD_Desc";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"ACREFR_Backpacks\models\data\clf_nicecomm2_bwmod_co.paa"};
};

class ACREFR_mr3000_bwmod_tropen: ACREFR_mr3000_bwmod {
    displayName = "$STR_ACREFR_backpacks_MR3000_BWMOD_Tropen";
    hiddenSelectionsTextures[] = {"ACREFR_Backpacks\models\data\jgbtl14_marcbook_bwmod_tropen_co.paa"};
};

class ACREFR_mr3000_rhs: ACREFR_mr3000 {
    displayName = "$STR_ACREFR_backpacks_MR3000_RHS";
    descriptionShort = "$STR_ACREFR_backpacks_MR3000_RHS_Desc";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"ACREFR_Backpacks\models\data\clf_nicecomm2_rhs_digital_co.paa"};
};
