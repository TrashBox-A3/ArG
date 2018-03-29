

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

_this say3D "HitCall";
_this switchCamera "EXTERNAL";

_this switchMove "Acts_JetsMarshallingClear_loop";
_this disableAI "ANIM"}]; 
"Land_HumanSkull_F" createVehicle position _this;
attachTo [_this, [-0.1, 0.1, 0.15], "Pelvis"];
setVectorDirAndUp [ [0.5, 0.5, 0], [-0.5, 0.5, 0] ];
  }; 

} forEach allUnits;

}; 