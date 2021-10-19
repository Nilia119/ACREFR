class ACREFR_bussole: ACREFR_Bag_Base {
    scope = PUBLIC;
    scopeCurator = PUBLIC;
    author = "Raspu, NIlia";
    displayName = CSTRING(Bussole);
    descriptionShort = CSTRING(Bussole_Desc);
    picture = QPATHTOF(bussole\ui\bussole_icon.paa);
    maximumLoad = 30;
    mass = 120;
    model=QPATHTOF(models\tf_bussole);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {""};
};
