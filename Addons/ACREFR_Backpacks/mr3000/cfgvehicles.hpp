class ACREFR_mr3000: ACREFR_Bag_Base {
    scope = PUBLIC;
    scopeCurator = PUBLIC;
    author = "Raspu, Gandi, Nkey, Nilia";
    displayName = CSTRING(MR3000);
    descriptionShort = CSTRING(MR3000_Desc);
    picture = QPATHTOF(mr3000\ui\mr3000_icon.paa);
    maximumLoad = 160;
    mass = 160;
    model = QPATHTOF(models\clf_nicecomm2_prc117g);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_nicecomm2_csat_multi_co.paa)};
};

class ACREFR_mr3000_multicam: ACREFR_mr3000 {
    author = "Raspu, Gandi, Nkey, Nilia";
    displayName = CSTRING(MR3000_Multicam);
    descriptionShort = CSTRING(MR3000_Multicam_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_nicecomm2_co.paa)};
};

class ACREFR_mr3000_bwmod: ACREFR_mr3000 {
    displayName = CSTRING(MR3000_BWMOD);
    descriptionShort = CSTRING(MR3000_BWMOD_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_nicecomm2_bwmod_co.paa)};
};

class ACREFR_mr3000_bwmod_tropen: ACREFR_mr3000_bwmod {
    displayName = CSTRING(MR3000_BWMOD_Tropen);
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\jgbtl14_marcbook_bwmod_tropen_co.paa)};
};

class ACREFR_mr3000_rhs: ACREFR_mr3000 {
    displayName = CSTRING(MR3000_RHS);
    descriptionShort = CSTRING(MR3000_RHS_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_nicecomm2_rhs_digital_co.paa)};
};
