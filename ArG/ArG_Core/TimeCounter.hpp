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
displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa' size='1' shadow='false' /> <t color=""#FF4500"">Buzzer Switch";
displayNameDefault = "<img image='\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa' size='3' shadow='false' /><t color=""#FF4500"">Buzzer Switch";
priority = 3;
radius = 20;
position = "camera";
showWindow = true;
hideOnUse = 0;
onlyForPlayer = 1;
shortcut = "";
condition = "(player getvariable '_Hited' == 0)";
statement = "this say3D 'Switch',[[[],'ArG_Core\functions\fn_BuzzerBox.sqf'], 'BIS_fnc_execVM', true,true] call BIS_fnc_MP;";
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

      class EventHandlers
    {
      init = "while {missionNamespace getvariable 'Buzz' == 0} do

      {


        {
            _x setDamage 1;
            sleep 0.1;
            _x setDamage 0;
            sleep 0.1;
            _x say3D 'Buzzer'
          } forEach _Speakers;
          sleep 5;
       waituntil{missionNamespace getvariable 'Buzz' == 0};

      };

      while {missionNamespace getvariable 'Buzz' == 1} do

      {


        {
           _x setDamage 1;
           sleep 0.1;
           _x setDamage 0;
           sleep 0.1;
           _x say3D 'Buzzer2'
         } forEach _Speakers;
           sleep 11;
       waituntil{missionNamespace getvariable 'Buzz' == 1};
      };"
    };

};
