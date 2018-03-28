class Box_NATO_Wps_F;
    class TM_Weapons_Box : Box_NATO_Wps_F
    {
        scope = 2;
        
        displayName = "TM Weapons Box";
        DLC = "";
        editorSubcategory = "ArG_Weapons_Box";
        editorCategory = "ArG_Objects";
        hiddenSelectionsTextures[] = 
        {
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportItems
        {
            item10(ArG_TM_HK416_DEV);
            item10(ArG_520Rnd_556x45_BB);
            item10(ArG_82Rnd_556x45_BB);
            item10(ArG_TM_SCAR_L_TAN);
            item10(ArG_TM_SCAR_H_TAN);
            item10(ArG_90Rnd_762x51_BB);
            item10(ArG_540Rnd_762x51_BB);
            item10(ArG_TM_M4A1);
            item10(ArG_TM_M4A1_NWS);
            item10(ArG_35Rnd_556x45_NWS);
            item10(ArG_TM_Glock17);
            item10(ArG_25Rnd_9mm);
            item10(ArG_TM_P226R);
            item10(ArG_TM_M92F);
            
            
        };
    };