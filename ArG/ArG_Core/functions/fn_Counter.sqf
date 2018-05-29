


[_this,"Time Counter",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa",

"_this distance _target < 3",
"_caller distance _target < 3",
{},
{},
{ hint"ok" },
{},
[],
2,
0,
false,
false
] remoteExec ["BIS_fnc_holdActionAdd", [0,2] select isDedicated, _this];
