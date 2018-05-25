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
statement = "[
_object,                                                                           // Object the action is attached to
"Open Door",                                                                       // Title of the action
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",                      // Idle icon shown on screen
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",                      // Progress icon shown on screen
"((_target animationPhase 'Door_1_rot') < 0.5) && ((_target getVariable ['bis_disabled_Door_1',0]) != 1) && (cameraOn isKindOf 'CAManBase') ",                                                        // Condition for the action to be shown
"_caller distance _target < 3",                                                      // Condition for the action to progress
{},                                                                                  // Code executed when action starts
{},                                                                                  // Code executed on every progress tick
{ (_this select 3) call BIS_fnc_DoorNoHandleOpen },                                                //     Code executed on completion
{},                                                                                  // Code executed on interrupted
[_object, _door],                                                                                  // Arguments passed to the scripts as _this select 3
2,                                                                                  // Action duration [s]
0,                                                                                   // Priority
false,                                                                                // Remove on completion
   false                                                                                    // Show in unconscious state
    ] call BIS_fnc_holdActionAdd;";
};
};


};
