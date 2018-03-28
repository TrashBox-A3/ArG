class Box_NATO_Wps_F;
    class KSC_Weapons_Box : Box_NATO_Wps_F
    {
        scope = 2;
        
        displayName = "KSC Weapons Box";
        DLC = "";
        editorSubcategory = "ArG_Weapons_Box";
        editorCategory = "ArG_Objects";
        hiddenSelectionsTextures[] = 
        {
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportItems
        {
            item10(ArG_KSC_PM);
            item10(ArG_10Rnd_9x18_BB);
            item10(ArG_KSC_AK74M);
            item10(ArG_600Rnd_545x39_BB);
            item10(ArG_70Rnd_545x39_BB);
            
            
        };
    };