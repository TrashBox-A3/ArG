
private ["_counter"];

_counter = [
"ArG_CounterBox"

];

for [{_i=0},{_i < (count _counter)},{_i=_i+1}] do
{

  _Box = getPos player nearObjects [_counter select _i , 300];

{[_x,"Time Counter",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa",
"_this distance _target < 3",
"_caller distance _target < 3",
{},
{},
{ []execVM  "ArG_Core\functions\fn_BuzzerBox.sqf" },
{},
[],
2,
0,
false,
false
] remoteExec ["BIS_fnc_holdActionAdd", [0,2] select isDedicated, _x];}forEach _Box;
};
