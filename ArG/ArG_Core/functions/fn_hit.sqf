if(isServer)then{

  {
    if (!isPlayer _x ) then
    {
        _x addEventHandler ["Hit", {

        _ap=_this select 0;

        _ap setCaptive true;

        if((damage _ap)>0.1)then{

       _ap setDamage 0;

       };

        _ap switchMove "Acts_JetsMarshallingRight_loop";


        _ap playMoveNow "ApanPknlMstpSnonWnonDnon_G01";

      player removeEventHandler ["Hit", 0];


    }];

     _x setUnitPos "UP";
    };
  } forEach allUnits-switchableUnits-playableUnits;

};
