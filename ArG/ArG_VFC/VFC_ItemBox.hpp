class Box_NATO_Wps_F;
    class VFC_Weapons_Box : Box_NATO_Wps_F
    {
        scope = 2;
        
        displayName = "VFC Weapons Box";
        DLC = "";
        editorSubcategory = "ArG_Weapons_Box";
        editorCategory = "ArG_Objects";
        hiddenSelectionsTextures[] = 
        {
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportItems
        {
            item10(ArG_VFC_HK416A5_GBB_BLK);
            item10(VFC_30Rnd_556x45_M4_HK416_GBB);
            
            
        };
    };