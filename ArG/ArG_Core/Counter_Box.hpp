//Speaker Box//
class  Land_Laptop_unfolded_F;

    class ArG_CounterBox:  Land_Laptop_unfolded_F
{
    scope=2;
    author="Rodeostar42";
    displayName="CounterBox";
    faction = "Empty";
    editorCategory = "ArG_Objects";
    editorSubcategory = "ArG_Items";
    editorPreview = "\ArG_Core\Core_EditorPreviews\ArG_BuzzerBox.jpg";
    model = "\A3\Structures_F\Items\Electronics\SatellitePhone_F.p3d";
    hiddenSelections[]={};
    hiddenSelectionsTextures[] = {};

      class UserActions
{
class Action
{
displayName = "<img image='\ArG_Core\push.paa' size='1' shadow='false' /> <t color=""#FF4500"">Buzzer Switch";
displayNameDefault = "<img image='\ArG_Core\push.paa' size='3' shadow='false' /><t color=""#FF4500"">Buzzer Switch";
priority = 3;
radius = 20;
position = "camera";
showWindow = true;
hideOnUse = 0;
onlyForPlayer = 1;
shortcut = "reloadMagazine";
condition = "true";
statement = "this say3D 'Switch',[[[],'ArG_Core\functions\fn_BuzzerBox.sqf'], 'BIS_fnc_execVM', true,true] call BIS_fnc_MP;";
};
};


};
