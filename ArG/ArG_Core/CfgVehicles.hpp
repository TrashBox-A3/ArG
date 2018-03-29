
#define item(_name, _count) class _xx_##_name { \
name = #_name; \
count = _count; \
};
#define item10(_name) item(_name, 10)
#define item20(_name) item(_name, 20)


class CfgVehicles
{

    #include "ArG_ItemBox.hpp"


	class  B_Soldier_base_F;

	///Gamer#1///
		class ArG_Gamer_1:  B_Soldier_base_F
	{
		scope=2;
        author="Rodeostar42";
        displayName="AirSoft Gamer 1";
        faction="ArG_Core";
        icon = "iconMan";
        editorSubcategory = "ArG_Gamers";
        editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_Gamer_1.jpg";
        backpack="B_FieldPack_blk";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        
        uniformClass="U_BG_Guerilla2_2";
        weapons[] = {
            
            "Throw",
            "Put"
        };
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
        linkedItems[] = {
            
            "ItemMap",
            "ItemCompass",
            
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            
            "ItemMap",
            "ItemCompass",
            
            "ItemWatch"
        };

        class EventHandlers
        {

                player addEventHandler ["HitPart", {player say3D "HitCall";player switchMove "Acts_JetsMarshallingClear_loop";player disableAI "ANIM"}];

        };

        
    };


    
	class ArG_Gamer_2:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="AirSoft Gamer 2";
        faction="ArG_Core";
        icon = "iconMan";
        editorSubcategory = "ArG_Gamers";
        editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_Gamer_2.jpg";
        backpack="B_FieldPack_blk";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        
        uniformClass="U_BG_Guerilla2_1";
        weapons[] = {
            
            "Throw",
            "Put"
        };
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
        linkedItems[] = {
            
            "ItemMap",
            "ItemCompass",
            
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            
            "ItemMap",
            "ItemCompass",
            
            "ItemWatch"
        };

        class EventHandlers
        {

                hitPart = "_unit = (_this select 0) select 0; if ( (_unit getHitPointDamage 'Named_Selection') >= 0.01) then {_unit say3D'HitCall',_Unit playMove 'Acts_JetsMarshallingClear_loop'}";

        };

        
    };


    class ArG_Gamer_3:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="AirSoft Gamer 3";
        faction="ArG_Core";
        icon = "iconMan";
        editorSubcategory = "ArG_Gamers";
        editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_Gamer_3.jpg";
        backpack="B_FieldPack_cbr";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        
        uniformClass="U_BG_Guerilla2_3";
        weapons[] = {
        
            "Throw",
            "Put"
        };
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
        linkedItems[] = {
            
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };

        
    };


		class ArG_Gamer_4:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="AirSoft Gamer 4";
        faction="ArG_Core";
        icon = "iconMan";
        editorSubcategory = "ArG_Gamers";
        editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_Gamer_4.jpg";
        backpack="B_FieldPack_oli";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        
        uniformClass="U_BG_Guerilla3_1";
        weapons[] = {
        
            "Throw",
            "Put"
        };
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
        linkedItems[] = {
            
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };

        
    };

    class ArG_Gamer_5:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="AirSoft Gamer 5";
        faction="ArG_Core";
        icon = "iconMan";
        editorSubcategory = "ArG_Gamers";
        editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_Gamer_5.jpg";
        backpack="B_TacticalPack_blk";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        
        uniformClass="U_C_HunterBody_grn";
        weapons[] = {
        
            "Throw",
            "Put"
        };
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
        linkedItems[] = {
            
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };

        
    };


    
    class ArG_Gamer_6:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="AirSoft Gamer 6";
        faction="ArG_Core";
        icon = "iconMan";
        editorSubcategory = "ArG_Gamers";
        editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_Gamer_6.jpg";
        backpack="B_Messenger_Gray_F";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        
        uniformClass="U_OrestesBody";
        weapons[] = {
        
            "Throw",
            "Put"
        };
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
        linkedItems[] = {
            
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };

        
    };


    class ArG_Gamer_7:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="AirSoft Gamer 7";
        faction="ArG_Core";
        icon = "iconMan";
        editorSubcategory = "ArG_Gamers";
        editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_Gamer_7.jpg";
        backpack="B_Messenger_Black_F";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        
        uniformClass="U_C_Poor_1";
        weapons[] = {
        
            "Throw",
            "Put"
        };
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
        linkedItems[] = {
            
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };

        
    };


        class ArG_Gamer_8:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="AirSoft Gamer 8";
        faction="ArG_Core";
        icon = "iconMan";
        editorSubcategory = "ArG_Gamers";
        editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_Gamer_8.jpg";
        backpack="B_Messenger_Gray_F";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";

        uniformClass="U_C_Poloshirt_burgundy";
        weapons[] = {
        
            "Throw",
            "Put"
        };
        magazines[] = {};
        respawnMagazines[] = {};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
        linkedItems[] = {
            
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };

        
    };


    

};