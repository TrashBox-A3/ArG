
{
  if(side _x == west) then {
  titletext ["","Black IN",2];
  player setPos (getMarkerPos "B_Safe");
  sleep 0.2;
  player switchMove "";
  player setCaptive false;
  player setVariable ["Hited",0,true];
  [ player,10 ] call BIS_fnc_holdActionRemove;
};

}foreach allunits;
