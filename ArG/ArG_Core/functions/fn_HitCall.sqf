

if (!isDedicated) then {


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
  
if (typeOf _x in _Gamer ) then 
  { 
      
_x addEventHandler ["HitPart", {

player say3D "HitCall";
player switchCamera "EXTERNAL";

player switchMove "Acts_JetsMarshallingClear_loop";
player disableAI "ANIM"}]; 
"Land_HumanSkull_F" createVehicle position player;
attachTo [player, [-0.1, 0.1, 0.15]];
setVectorDirAndUp [ [0.5, 0.5, 0], [-0.5, 0.5, 0] ];
  }; 

} forEach allUnits;

}; 