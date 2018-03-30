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

player say3D "HitCall";

player switchCamera "EXTERNAL";

player switchmove "Acts_JetsMarshallingClear_loop";
player disableAI "ANIM";

sleep 2;

player playMoveNow "ApanPknlMstpSnonWnonDnon_G01";

Hit ="Land_HumanSkull_F" createVehicle position player;
Hit attachTo [_unit, [0, 0, 1.9]];
Hit setVectorDirAndUp [ [0, -1, 0], [0, 0, 1]];


}]; 

  }; 

} forEach allunits;

}; 

