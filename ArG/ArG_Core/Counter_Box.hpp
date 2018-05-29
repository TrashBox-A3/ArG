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

      class EventHandlers
    {
      init = "SaftyID = [this, "Back to Safety zone",
      "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_forceRespawn_ca.paa",
      "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
      "true", "true",
      {},{},{

       "ArG_Core\functions\fn_BuzzerBox.sqf"
       },
      {}, [], 10, nil, true, false
      ] call BIS_fnc_holdActionAdd";
    };

};
