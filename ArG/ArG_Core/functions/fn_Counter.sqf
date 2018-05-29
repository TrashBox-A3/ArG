
private _Counter;

_Counter = (typeOf _x == "ArG_CounterBox");

SaftyID = [_Counter, "Back to Safety zone",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_forceRespawn_ca.paa",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
"true", "true",
{},{},{

 "ArG_Core\functions\fn_BuzzerBox.sqf"
 },
{}, [], 10, nil, true, false
] call BIS_fnc_holdActionAdd;
