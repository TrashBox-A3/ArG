if(isServer)then{

  {
    if (!isPlayer _x ) then
    {
        _x addEventHandler ["Hit", {_unit=_this select 0;

        _unit setCaptive true;

        _unit switchMove "Acts_JetsMarshallingRight_loop";

        sleep 0.2;
        _unit playMoveNow "ApanPknlMstpSnonWnonDnon_G01";}];

     _x setUnitPos "UP";
    };
  } forEach allUnits-switchableUnits-playableUnits;

};
