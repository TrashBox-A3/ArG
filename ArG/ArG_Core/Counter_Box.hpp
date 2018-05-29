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
      init = [player, "Kill", "", "", "true", "true", { hint 'Started!' }, { systemChat str (_this select 3) }, { player setDamage 1 }, { hint 'Afraid of death?' }, [], 10, nil, true, false] call BIS_fnc_holdActionAdd;
    };

};
