class ACREFR_anarc210: ACREFR_Bag_Base {
    scope = PUBLIC;
    scopeCurator = PUBLIC;
    displayName = CSTRING(ANARC210);
    descriptionShort = CSTRING(ANARC210_Desc);
    picture = QPATHTOF(anarc210\ui\anarc210_icon.paa);
    model = QPATHTOF(models\TFR_BACKPACK);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\camo\backpack_mcam_co.paa)};
    maximumLoad = 20;
    mass = 160;
};
