

if (!isDedicated) then {


	systemChat "hello";

_ArG_Unit = [
"ArG_Gamer_1",
"ArG_Gamer_2",
"ArG_Gamer_3",
"ArG_Gamer_4",
"ArG_Gamer_5",
"ArG_Gamer_6",
"ArG_Gamer_7",
"ArG_Gamer_8"
];

_gamer = typeOf player == _ArG_Unit ;



_gamer addEventHandler ["HitPart", {hint "Hitooo";_gamer say3D "HitCall";_gamer switchMove "Acts_JetsMarshallingClear_loop";_gamer disableAI "ANIM"}];

}; 