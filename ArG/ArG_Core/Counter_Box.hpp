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
statement = [this,'Time Counter',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa',
'_this distance _target < 3',
'_caller distance _target < 3',
{},{},{ []execVM  'ArG_Core\functions\fn_BuzzerBox.sqf' },
{},[],2,0,
false,
false
] remoteExec ['BIS_fnc_holdActionAdd', [0,2] select isDedicated, this];;
};
};


};
