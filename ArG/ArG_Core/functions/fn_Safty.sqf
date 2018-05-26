
if(side _x == west) then {
  player setPos (getMarkerPos "B_Safe");
};

if(side _x == east) then {
  player setPos (getMarkerPos "R_Safe");
};

if(side _x == resistance) then {
  player setPos (getMarkerPos "G_Safe");
};
