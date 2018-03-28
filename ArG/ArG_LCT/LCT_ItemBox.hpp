class Box_NATO_Wps_F;
    class LCT_Weapons_Box : Box_NATO_Wps_F
    {
        scope = 2;
        
        displayName = "LCT Weapons Box";
        DLC = "";
        editorSubcategory = "ArG_Weapons_Box";
        editorCategory = "ArG_Objects";
        hiddenSelectionsTextures[] = 
        {
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportItems
        {
            item10(ArG_LCT_AKM);
            item10(ArG_600Rnd_762x39_BB);
            item10(ArG_70Rnd_762x39_BB);
            item10(ArG_LCT_VAL);
            item10(ArG_50Rnd_9x39_BB);
            
            
        };
    };