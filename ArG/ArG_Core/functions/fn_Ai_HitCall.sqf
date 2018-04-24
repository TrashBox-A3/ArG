
_AiGamer = [
"ArG_Gamer_1",
"ArG_Gamer_2",
"ArG_Gamer_3",
"ArG_Gamer_4",
"ArG_Gamer_5",
"ArG_Gamer_6",
"ArG_Gamer_7",
"ArG_Gamer_8",
"ArG_Gamer_9",
"ArG_Gamer_10",
"ArG_Gamer_11",
"ArG_Gamer_12"
];

if(isServer)then{

  {
    if ((!isPlayer _x)&&(typeOf _x in _AiGamer)) then
    {
        _x addMPEventHandler ["MPHit", {

        _ap=_this select 0;

        _ap say3D "HitCall";

        _ap setCaptive true;

        _ap addEventHandler ["HandleDamage", {0}];

        _ap switchMove "Acts_JetsMarshallingRight_loop";


        _ap playMoveNow "ApanPknlMstpSnonWnonDnon_G01";

        addMissionEventHandler ["Draw3D", {
 _pos = getPosWorld _ap; 
 drawIcon3D ["a3\ui_f\data\gui\Rsc\RscDisplayArsenal\radio_ca.paa", [1,1,1,1], [(_pos select 0),(_pos select 1), 1], 0.8, 0.8, 0, (name player), 1, 0.0315, "EtelkaMonospacePro"];
}];
    }];
     _x setUnitPos "UP";
    };
  } forEach allUnits-switchableUnits-playableUnits;

};
