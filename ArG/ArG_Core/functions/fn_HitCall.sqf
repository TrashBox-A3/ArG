///script by Rodeostar42///

if (!isDedicated) then {

private "_unit";

_unit = _this select 0;
 

_Gamer = [
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
  
if ((typeOf _x in _Gamer)) then 
  { 
      
player addEventHandler ["HitPart", {

player setCaptive true;

player say3D "HitCall";

player switchCamera "EXTERNAL";

player switchmove "Acts_JetsMarshallingRight_loop";

Hit ="Land_HumanSkull_F" createVehicle position player;
Hit attachTo [_unit, [0, 0, 1.9]];
Hit setVectorDirAndUp [ [0, -1, 0], [0, 0, 1]];

player removeEventHandler ["HitPart", 0];

}]; 

  }; 

} forEach allunits;

}; 

