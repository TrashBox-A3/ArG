
trg = createTrigger ["EmptyDetector", getPos player];
trg setTriggerArea [0, 0, 0, false];
trg setTriggerActivation ["NONE", "PRESENT", true];
trg setTriggerStatements ["(typeOf cursorObject == 'ArG_BuzzerBox')",
"switch (playerSide) do {

  _Box = ['ArG_BuzzerBox','ArG_BuzzerBox'];
  counter  = {_x isKindOf 'All'}count _Box > 0;

 case west: {
if (((true))&&(player getvariable '_Hited' == 0)) then{

     Hold = [counter,'Time Counter',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa',
'_this distance _target < 3',
'_caller distance _target < 3',
{},
{},
{
   missionNamespace setVariable ['Buzz',1,true];
   []execVM  'ArG_Core\functions\fn_BuzzerBox.sqf';
   systemChat'Count Up Start';
   },
{
  missionNamespace setVariable ['Buzz',2,true];
  systemChat'Wait';
  },
[],
2,
0,
false,
false
]call BIS_fnc_holdActionAdd;

   };
 };
 case east: {

if (((true))&&(player getvariable '_Hited' == 0)) then{


     Hold = [counter,'Time Counter',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa',
'_this distance _target < 3',
'_caller distance _target < 3',
{},
{},
[],
2,
0,
false,
false
] call BIS_fnc_holdActionAdd;
