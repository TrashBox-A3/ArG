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

      class UserActions
{
class BuzzerAction
{
displayName = ;
displayNameDefault = ;
priority = 3;
radius = 20;
position = "camera";
showWindow = true;
hideOnUse = 0;
onlyForPlayer = 1;
shortcut = "";
condition = "(player getvariable '_Hited' == 0)";
statement = "this say3D 'Switch',[[[],'ArG_Core\functions\fn_CounterBox.sqf'], 'BIS_fnc_execVM', true,true] call BIS_fnc_MP;";
};
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
