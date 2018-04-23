if(isServer)then{

  {
    if (!isPlayer _x ) then
    {
        _x addMPEventHandler ["MPHit", {

        _ap=_this select 0;

        _ap setCaptive true;

        _ap addEventHandler ["HandleDamage", {0}];

        _ap switchMove "Acts_JetsMarshallingRight_loop";


        _ap playMoveNow "ApanPknlMstpSnonWnonDnon_G01";

      


    }];

    

     _x setUnitPos "UP";
    };
  } forEach allUnits-switchableUnits-playableUnits;

};
