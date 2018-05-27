

{

  titletext ["","Black IN",2];

  if(side _x == west) then {
  player setPos (getMarkerPos "B_Safe");
  };
  sleep 0.2;

  if(side _x == east) then {
  player setPos (getMarkerPos "R_Safe");
  };
  sleep 0.2;

  if(side _x == resistance) then {
  player setPos (getMarkerPos "G_Safe");
  };
  sleep 0.2;

  player switchMove "";
  player allowDamage true;
  player setCaptive false;
  player setVariable ["Hited",0,true];
  [ player,0 ] call BIS_fnc_holdActionRemove;

}foreach allunits;
