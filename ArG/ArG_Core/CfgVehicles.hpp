
#define item(_name, _count) class _xx_##_name { \
name = #_name; \
count = _count; \
};
#define item10(_name) item(_name, 10)
#define item20(_name) item(_name, 20)


class CfgVehicles
{

    #include "ArG_ItemBox.hpp"
    #include "ArG_AllinOne_ItemBox.hpp"
    #include "CfgModules.hpp"
    #include "flag.hpp"
    #include "TimeCounter.hpp"
    #include "Counter_Box.hpp"

	class  B_Soldier_base_F;

	///Gamer#1///
		class ArG_Gamer_1:  B_Soldier_base_F
	{
		scope=2;
        author="Rodeostar42";
        displayName="Blue Gamer 1";
        faction="ArG_Gamer_F";
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






    };


	class ArG_Gamer_2:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Blue Gamer 2";
        faction="ArG_Gamer_F";
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



    };


    class ArG_Gamer_3:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Blue Gamer 3";
        faction="ArG_Gamer_F";
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
        displayName="Blue Gamer 4";
        faction="ArG_Gamer_F";
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


class  O_Soldier_base_F;
    ///Gamer#1///
  		class ArG_Gamer_5:  O_Soldier_base_F
  	{
  		scope=2;
          author="Rodeostar42";
          displayName="Red Gamer 1";
          faction="ArG_Gamer_O";
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






      };


  	class ArG_Gamer_6:  O_Soldier_base_F
      {
          scope=2;
          author="Rodeostar42";
          displayName="Red Gamer 2";
          faction="ArG_Gamer_O";
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



      };


      class ArG_Gamer_7:  O_Soldier_base_F
      {
          scope=2;
          author="Rodeostar42";
          displayName="Red Gamer 3";
          faction="ArG_Gamer_O";
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


  		class ArG_Gamer_8:  O_Soldier_base_F
      {
          scope=2;
          author="Rodeostar42";
          displayName="Red Gamer 4";
          faction="ArG_Gamer_O";
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


      class  I_Soldier_base_F;
          ///Gamer#1///
        		class ArG_Gamer_9:  I_Soldier_base_F
        	{
        		scope=2;
                author="Rodeostar42";
                displayName="Green Gamer 1";
                faction="ArG_Gamer_I";
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






            };


        	class ArG_Gamer_10:  I_Soldier_base_F
            {
                scope=2;
                author="Rodeostar42";
                displayName="Green Gamer 2";
                faction="ArG_Gamer_I";
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



            };


            class ArG_Gamer_11:  I_Soldier_base_F
            {
                scope=2;
                author="Rodeostar42";
                displayName="Green Gamer 3";
                faction="ArG_Gamer_I";
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


        		class ArG_Gamer_12:  I_Soldier_base_F
            {
                scope=2;
                author="Rodeostar42";
                displayName="Green Gamer 4";
                faction="ArG_Gamer_I";
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


    class  Land_Billboard_F;

        class Core_Billboard:  Land_Billboard_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Core Billboard";
        faction = "Empty";
        editorCategory = "ArG_Objects";
        editorSubcategory = "ArG_Sign";
        editorPreview = "\ArG_Core\Core_EditorPreviews\Core_Billboard.jpg";
        model = "\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[] = {"\ArG_Core\ArG.jpg"};

    };


};
