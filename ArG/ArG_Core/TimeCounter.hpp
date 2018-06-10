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
               init = "Rodeo = [(_this select 0),'Time Counter','\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa','\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa','((side player == west)or(side player == east))','true',{missionNamespace setVariable ['Buzz',2,true];},{_target say3D 'Click'},{[]execVM 'ArG_Core\functions\fn_BuzzerBox.sqf'},{},[],5,0,false,false] call BIS_fnc_holdActionAdd;";
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
class  Land_PhoneBooth_01_F;

    class ArG_Stater_1:  Land_PhoneBooth_01_F
  {
    scope=2;
    author="Rodeostar42";
    displayName="Call Ready(Blue)";
    faction = "Empty";
    editorCategory = "ArG_Objects";
    editorSubcategory = "ArG_Items";
    model = "\A3\Structures_F_EPB\Civ\Accessories\PhoneBooth_01_F.p3d";
    hiddenSelections[]={};
    hiddenSelectionsTextures[] = {};

    class UserActions
{
class Action1
{
displayName = "<img image='\ArG_Core\Start.paa' size='1' shadow='false' /> <t color=""#00BFFF"">Start Ready";
displayNameDefault = "<img image='\ArG_Core\Start.paa' size='3' shadow='false' /><t color=""#00BFFF"">Start Ready";
priority = 3;
radius = 20;
position = "camera";
showWindow = true;
hideOnUse = true;
onlyForPlayer = 1;
shortcut = "reloadMagazine";
condition = "((missionNamespace getvariable 'ST1' == 0))";
statement = "this say3D 'Call_Start',missionNamespace setVariable ['ST1',1,true],[[[],'ArG_Core\functions\fn_Starter.sqf'], 'BIS_fnc_execVM', true,true] call BIS_fnc_MP;";
};
};

};

//Stater 2//

class  Land_PhoneBooth_01_malden_F;

    class ArG_Stater_2:  Land_PhoneBooth_01_malden_F
{
    scope=2;
    author="Rodeostar42";
    displayName="Call Ready(Red)";
    faction = "Empty";
    editorCategory = "ArG_Objects";
    editorSubcategory = "ArG_Items";
    model = "\A3\Structures_F_Argo\Commercial\Accessories\PhoneBooth_01_malden_F.p3d";
    hiddenSelections[]={};
    hiddenSelectionsTextures[] = {};

    class UserActions
{
class Action2
{
displayName = "<img image='\ArG_Core\Start.paa' size='1' shadow='false' /> <t color=""#FF0000"">Start Ready";
displayNameDefault = "<img image='\ArG_Core\Start.paa' size='3' shadow='false' /><t color=""#FF0000"">Start Ready";
priority = 3;
radius = 20;
position = "camera";
showWindow = true;
hideOnUse = true;
onlyForPlayer = 1;
shortcut = "reloadMagazine";
condition = "((missionNamespace getvariable 'ST2' == 0))";
statement = "this say3D 'Call_Start',missionNamespace setVariable ['ST2',1,true],[[[],'ArG_Core\functions\fn_Starter.sqf'], 'BIS_fnc_execVM', true,true] call BIS_fnc_MP;";
};
};
};


//ReJoin Point//
class  Land_Tombstone_02_F;

    class ArG_Revive:  Land_Tombstone_02_F
  {
    scope=2;
    author="Rodeostar42";
    displayName="Reviving point";
    faction = "Empty";
    editorCategory = "ArG_Objects";
    editorSubcategory = "ArG_Items";
    model = "\A3\Structures_F_Exp\Cultural\Cemeteries\Tombstone_02_F.p3d";
    hiddenSelections[]={};
    hiddenSelectionsTextures[] = {};

      class EventHandlers
          {
               init = "Revive = [(_this select 0),'Revive','\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_revive_ca.paa','\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_reviveMedic_ca.paa','(side player == civilian)','true',{},{_target say3D 'Click'},{[]execVM 'ArG_Core\functions\fn_Revive.sqf'},{},[],10,0,false,false] call BIS_fnc_holdActionAdd;";
          };
    };
