class Box_NATO_Equip_F;
    class WE_Weapons_Box : Box_NATO_Equip_F
    {
        scope = 2;
        
        displayName = "WE Weapons Box";
        DLC = "";
        editorSubcategory = "ArG_Weapons_Box";
        editorCategory = "ArG_Objects";
        
        class TransportItems
        {
            item10(ArG_WE_SVD);
            item10(ArG_20Rnd_762x54_BB);
            item10(G_EyeProtectors_F);
            
        };
    };