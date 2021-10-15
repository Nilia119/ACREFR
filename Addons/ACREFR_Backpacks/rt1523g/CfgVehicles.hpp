class ACREFR_rt1523g: ACREFR_Bag_Base {
    scope = PUBLIC;
    scopeCurator = PUBLIC;
    author = "Raspu, Gandi, Nkey, Nilia";
    displayName = CSTRING(RT1523G);
    descriptionShort = CSTRING(RT1523G_Desc);
    picture = QPATHTOF(rt1523g\ui\rt1523g_icon.paa);
    model=QPATHTOF(models\clf_prc117g_ap);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_prc117g_ap_co.paa)};
    maximumLoad = 50;
    mass = 80;
};

class ACREFR_rt1523g_bwmod: ACREFR_rt1523g {
    displayName = CSTRING(RT1523G_BWMOD);
    descriptionShort = CSTRING(RT1523G_BWMOD_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_prc117g_bwmod_co.paa)};
};

class ACREFR_rt1523g_rhs: ACREFR_rt1523g {
    displayName = CSTRING(RT1523G_RHS);
    descriptionShort = CSTRING(RT1523G_RHS_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_prc117g_rhs_co.paa)};
};

class ACREFR_rt1523g_big: ACREFR_rt1523g {
    author = "Raspu, Gandi, Nkey, Nilia";
    displayName = CSTRING(RT1523G_Big);
    descriptionShort = CSTRING(RT1523G_Big_Desc);
    maximumLoad = 160;
    mass = 160;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_nicecomm2_nato_multi_co.paa)};
    model=QPATHTOF(models\clf_nicecomm2);
};

class ACREFR_rt1523g_big_bwmod: ACREFR_rt1523g_big {
    displayName = CSTRING(RT1523G_BigBWMOD);
    descriptionShort = CSTRING(RT1523G_BigBWMOD_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_nicecomm2_bwmod_co.paa)};
};

class ACREFR_rt1523g_big_bwmod_tropen: ACREFR_rt1523g_big_bwmod {
    displayName = CSTRING(RT1523G_BigBWMOD_Tropen);
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\jgbtl14_marcbook_bwmod_tropen_co.paa)};
};

class ACREFR_rt1523g_big_rhs: ACREFR_rt1523g_big {
    displayName = CSTRING(RT1523G_BigRHS);
    descriptionShort = CSTRING(RT1523G_BigRHS_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_nicecomm2_rhs_co.paa)};
};

class ACREFR_rt1523g_sage: ACREFR_rt1523g {
    displayName = CSTRING(RT1523G_Sage);
    descriptionShort = CSTRING(RT1523G_Sage_Desc);
    maximumLoad = 100;
    mass = 120;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\camo\backpack_sage_co.paa)};
    model = QPATHTOF(models\TFR_BACKPACK);
};

class ACRREFR_rt1523g_green: ACREFR_rt1523g_sage {
    displayName = CSTRING(RT1523G_Green);
    descriptionShort = CSTRING(RT1523G_Green_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\camo\backpack_green_co.paa)};
};

class ACREFR_rt1523g_fabric: ACREFR_rt1523g_sage {
    displayName = CSTRING(RT1523G_Fabric);
    descriptionShort = CSTRING(RT1523G_Fabric_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\camo\backpack_fabric_co.paa)};
};

class ACREFR_rt1523g_black: ACREFR_rt1523g_sage {
    displayName = CSTRING(RT1523G_Black);
    descriptionShort = CSTRING(RT1523G_Black_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\camo\backpack_black_co.paa)};
};
