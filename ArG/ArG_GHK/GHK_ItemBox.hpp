class Box_NATO_Equip_F;
    class GHK_Weapons_Box : Box_NATO_Equip_F
    {
        scope = 2;
        
        displayName = "GHK Weapons Box";
        DLC = "";
        editorSubcategory = "ArG_Weapons_Box";
        editorCategory = "ArG_Objects";
        hiddenSelectionsTextures[] = 
        {
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        
        class TransportItems
        {
            item10(ArG_GHK_AKM);
            item10(ArG_40Rnd_762x39_BB);
            
            
        };
    };