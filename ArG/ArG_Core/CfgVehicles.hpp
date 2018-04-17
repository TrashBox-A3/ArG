
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
        displayName="AirSoft Gamer 2";
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
        displayName="AirSoft Gamer 3";
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
        displayName="AirSoft Gamer 4";
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
  		class ArG_Gamer_5:  0_Soldier_base_F
  	{
  		scope=2;
          author="Rodeostar42";
          displayName="AirSoft Gamer 5";
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


  	class ArG_Gamer_6:  0_Soldier_base_F
      {
          scope=2;
          author="Rodeostar42";
          displayName="AirSoft Gamer 6";
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


      class ArG_Gamer_7:  0_Soldier_base_F
      {
          scope=2;
          author="Rodeostar42";
          displayName="AirSoft Gamer 7";
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


  		class ArG_Gamer_8:  0_Soldier_base_F
      {
          scope=2;
          author="Rodeostar42";
          displayName="AirSoft Gamer 8";
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


    //Speaker Box//
    class  Land_SatellitePhone_F;

        class ArG_BuzzerBox:  Land_SatellitePhone_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Buzzer box";
        faction = "Empty";
        editorCategory = "ArG_Objects";
        editorSubcategory = "ArG_Items";
        editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_BuzzerBox.jpg";
        model = "\A3\Structures_F\Items\Electronics\SatellitePhone_F.p3d";
        hiddenSelections[]={};
        hiddenSelectionsTextures[] = {};

    };

    //Speaker//
    class  Land_Loudspeakers_F;

        class ArG_Speaker:  Land_Loudspeakers_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Speaker";
        faction = "Empty";
        editorCategory = "ArG_Objects";
        editorSubcategory = "ArG_Items";
        editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_Speakera.jpg";
        model = "\A3\Structures_F\Civ\Accessories\Loudspeakers_F.p3d";
        hiddenSelections[]={};
        hiddenSelectionsTextures[] = {};

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
