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

    model = "\A3\Structures_F\Items\Electronics\Laptop_unfolded_F.p3d";
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
statement = "[]execVM  'ArG_Core\functions\fn_BuzzerBox.sqf'";
};
};


};
