



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
      
_x addEventHandler ["HitPart", {

_unit say3D "HitCall";

_unit switchCamera "EXTERNAL";

_unit switchmove "Acts_JetsMarshallingClear_loop";
_unit disableAI "ANIM";

Hit ="Land_HumanSkull_F" createVehicle position _unit;
Hit attachTo [_unit, [0, 0, 1.9]];
Hit setVectorDirAndUp [ [0, -1, 0], [0, 0, 1]];


}]; 

  }; 

} forEach allUnits;

 