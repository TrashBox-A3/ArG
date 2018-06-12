
if(isServer)then{

  params ["_AiGamer","_AIHited"];

  _AiGamer = [
  "ArG_Gamer_1",
  "ArG_Gamer_2",
  "ArG_Gamer_3",
  "ArG_Gamer_4",
  "ArG_Gamer_5",
  "ArG_Gamer_6",
  "ArG_Gamer_7",
  "ArG_Gamer_8"
  ];

  {
    if ((!isPlayer _x)&&(typeOf _x in _AiGamer)) then
    {
      if(!(primaryWeapon _x isEqualTo "")&&(primaryWeaponItems _x select 0 == ""))then{

         _x addPrimaryWeaponItem "ArG_muzzle_snds_H";
         };

      if(!(handgunWeapon _x isEqualTo "")&&(handgunItems _x select 0 == ""))then{

         _x addHandgunItem "ArG_muzzle_snds_H";
         };


        _x addMPEventHandler ["MPHit", {

        _AIHited = _this select 0;
        _AiGamer = _this select 1;

        _AIHited addEventHandler ["HandleDamage", {0}];

        if(side (_this select 3) != Civilian)then{

        _AIHited say3D "HitCall";

        _AIHited setCaptive true;

        _AIHited allowDamage false;

        _AIHited switchMove "Acts_JetsMarshallingRight_loop";

        _AIHited playMoveNow "ApanPknlMstpSnonWnonDnon_G01";

        _AIHited allowfleeing 1;};
    }];
     _x setUnitPos "UP";
    };
  } forEach allUnits-allPlayers;

};
