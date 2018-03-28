class Box_NATO_Equip_F;
    class ArG_Standard_Weapons_Box : Box_NATO_Equip_F
    {
        scope = 2;
        
        displayName = "ArG Standard Weapons Box";
        DLC = "";
        editorSubcategory = "ArG_Weapons_Box";
        editorCategory = "ArG_Objects";
        hiddenSelectionsTextures[] = 
        {
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportItems
        {
            item10(ArG_MX_F);
            item10(ArG_30Rnd_65x39_BB);
            
            
        };
    };