
{
  if(side _x == west) then {
  titletext ["","WHITE IN",2];
  player setPos (getMarkerPos "B_Safe");
  sleep 0.2;
  player switchMove "";
  player setCaptive false;
  player setVariable ["Hited",0,true];
};

if(side _x == east) then {
  titletext ["","WHITE IN",2];
  player setPos (getMarkerPos "R_Safe");
  sleep 0.2;
  player switchMove "";
  player setCaptive false;
  player setVariable ["Hited",0,true];
};

if(side _x == resistance) then {
  titletext ["","WHITE IN",2];
  player setPos (getMarkerPos "G_Safe");
  sleep 0.2;
  player switchMove "";
  player setCaptive false;
  player setVariable ["Hited",0,true];
};
}foreach allunits;
