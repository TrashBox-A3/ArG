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
               init = "[_this,"Time Counter",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa",

"_this distance _target < 3",
"_caller distance _target < 3",
{},
{},
{ []execVM  "ArG_Core\functions\fn_BuzzerBox.sqf" },
{},
[],
2,
0,
false,
false
] call BIS_fnc_holdActionAdd;";

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
