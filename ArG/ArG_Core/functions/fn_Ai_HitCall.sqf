params ["_AiGamer","_Hited"];


_AiGamer = _this select 1;


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
        remoteExec ["ArG_fnc_Hit_drawIcon3D",0];

        _Hited = _this select 0;

        _Hited say3D "HitCall";

        _Hited setCaptive true;

        _Hited addEventHandler ["HandleDamage", {0}];

        _Hited switchMove "Acts_JetsMarshallingRight_loop";

        _Hited playMoveNow "ApanPknlMstpSnonWnonDnon_G01";
    }];
     _x setUnitPos "UP";
    };
  } forEach allUnits-switchableUnits-playableUnits;

};
