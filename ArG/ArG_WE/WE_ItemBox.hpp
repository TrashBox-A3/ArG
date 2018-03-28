class Box_NATO_Wps_F;
    class WE_Weapons_Box : Box_NATO_Wps_F
    {
        scope = 2;
        
        displayName = "WE Weapons Box";
        DLC = "";
        editorSubcategory = "ArG_Weapons_Box";
        editorCategory = "ArG_Objects";
        hiddenSelectionsTextures[] = 
        {
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportItems
        {
            item10(ArG_WE_SVD);
            item10(ArG_20Rnd_762x54_BB);
            
            
        };
    };