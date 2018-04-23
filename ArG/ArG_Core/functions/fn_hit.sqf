if(isServer)then{

  {
    if (!isPlayer _x ) then
    {
        _x addEventHandler ["Hit", {

        _unit=_this select 0;

        _unit setCaptive true;

        _unit switchMove "Acts_JetsMarshallingRight_loop";

        
        _unit playMoveNow "ApanPknlMstpSnonWnonDnon_G01";

      player removeEventHandler ["Hit", 0];


    }];

     _x setUnitPos "UP";
    };
  } forEach allUnits-switchableUnits-playableUnits;

};
