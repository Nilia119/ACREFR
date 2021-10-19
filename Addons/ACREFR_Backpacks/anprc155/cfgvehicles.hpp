class ACREFR_anprc155: ACREFR_Bag_Base {
    scope = PUBLIC;
    scopeCurator = PUBLIC;
    author = "Raspu, Gandi, Nkey, Nilia";
    displayName = CSTRING(ANPRC155);
    descriptionShort = CSTRING(ANPRC155_Desc);
    picture = QPATHTOF(anprc155\ui\155_icon.paa);
    maximumLoad = 160;
    mass = 160;
    model=QPATHTOF(models\clf_nicecomm2);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_nicecomm2_aff_digital_co.paa)};
};
class ACREFR_anprc155_coyote: ACREFR_anprc155 {
    author = "Raspu, Gandi, Nkey, Nilia";
    displayName = CSTRING(ANPRC155_Coyote);
    descriptionShort = CSTRING(ANPRC155_Coyote_Desc);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(models\data\clf_nicecomm2_coyote_co.paa)};
};
