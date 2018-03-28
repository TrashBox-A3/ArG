class Box_NATO_Equip_F;
    class AK_Weapons_Box : Box_NATO_Equip_F
    {
        scope = 2;
        
        displayName = "A&K Weapons Box";
        DLC = "";
        editorSubcategory = "ArG_Weapons_Box";
        editorCategory = "ArG_Objects";
        hiddenSelectionsTextures[] = 
        {
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportItems
        {
            item10(ArG_AK_PKM);
            item10(ArG_5000Rnd_762x54_BB);
            
            
        };
    };