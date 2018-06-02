//Speaker Box//
class  Land_SatellitePhone_F;

    class ArG_BuzzerBox:  Land_SatellitePhone_F
{
    scope=2;
    author="Rodeostar42";
    displayName="Buzzer box(Time Counter)";
    faction = "Empty";
    editorCategory = "ArG_Objects";
    editorSubcategory = "ArG_Items";
    editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_BuzzerBox.jpg";
    model = "\A3\Structures_F\Items\Electronics\SatellitePhone_F.p3d";
    hiddenSelections[]={};
    hiddenSelectionsTextures[] = {};

      class EventHandlers
          {
               init = "Rodeo = [(_this select 0),'Time Counter','\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa','\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa','true','true',{_target say3D 'Switch';missionNamespace setVariable ['Buzz',2,true];},{_target say3D 'Switch';},{[]execVM 'ArG_Core\functions\fn_BuzzerBox.sqf'},{},[],5,0,false,false] call BIS_fnc_holdActionAdd;";

          };



};

///Buzzer Sound Source///
class  Land_Loudspeakers_F;

    class ArG_Speaker:  Land_Loudspeakers_F
{
    scope=2;
    author="Rodeostar42";
    displayName="Buzzer Sound Source";
    faction = "Empty";
    editorCategory = "ArG_Objects";
    editorSubcategory = "ArG_Items";
    editorPreview = "\ArG_Core\Core_EditorPreviews\buzzsound.paa";
    model = "\A3\Structures_F\Mil\Helipads\HelipadEmpty_F.p3d";
    hiddenSelections[]={};
    hiddenSelectionsTextures[] = {};

};

//Stater 1//
class  Land_Laptop_unfolded_F;

    class ArG_Stater_1:  Land_Laptop_unfolded_F
{
    scope=2;
    author="Rodeostar42";
    displayName="Game Starter 1";
    faction = "Empty";
    editorCategory = "ArG_Objects";
    editorSubcategory = "ArG_Items";

    model = "\A3\Structures_F\Items\Electronics\Laptop_unfolded_F.p3d";
    hiddenSelections[]={};
    hiddenSelectionsTextures[] = {"\ArG_Core\Core_EditorPreviews\Core_Billboard.jpg"};

};

//Stater 2//

    class ArG_Stater_2:  Land_Laptop_unfolded_F
{
    scope=2;
    author="Rodeostar42";
    displayName="Game Starter 2";
    faction = "Empty";
    editorCategory = "ArG_Objects";
    editorSubcategory = "ArG_Items";

    model = "\A3\Structures_F\Items\Electronics\Laptop_unfolded_F.p3d";
    hiddenSelections[]={};
    hiddenSelectionsTextures[] = {"\ArG_Core\Core_EditorPreviews\Core_Billboard.jpg"};

};
