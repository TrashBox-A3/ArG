
while{true}do{
missionNamespace setVariable ["Hold",0,false];

if(typeOf cursorObject == "ArG_BuzzerBox")then{

missionNamespace setVariable ["Hold",1,false];

0 = [player,"Time Counter",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa",
"_this distance _target < 3",
"_caller distance _target < 3",
{},
{},
{ []execVM  "ArG_Core\functions\fn_BuzzerBox.sqf" },
{missionNamespace setVariable ["Wait",1,true];},
[],
2,
0,
false,
false
]
remoteExec ["BIS_fnc_holdActionAdd", [0,2] select isDedicated, player];
};

waituntil {missionNamespace getvariable "Hold" == 0}
};
sleep 0.2;

while{missionNamespace getvariable "Hold" == 1}do{
  if(typeOf cursorObject != "ArG_BuzzerBox")then{
  [ player,0] call BIS_fnc_holdActionRemove;
  missionNamespace getvariable "Hold" == 0;
};

waituntil {missionNamespace getvariable "Hold" == 1};
};
sleep 0.2;
