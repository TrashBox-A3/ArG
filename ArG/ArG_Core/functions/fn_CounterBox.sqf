
trg = createTrigger ["EmptyDetector", getPos player];
trg setTriggerArea [0, 0, 0, false];
trg setTriggerActivation ["NONE", "PRESENT", true];
trg setTriggerStatements ["(typeOf cursorObject == 'ArG_BuzzerBox')",
"switch (playerSide) do {

 case west: {
if (((missionNamespace getvariable 'Buzz' == 0)or(missionNamespace getvariable 'Wait' == 1))&&(player getvariable '_Hited' == 0)) then{
     Hold = [player,'Time Counter',
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
  missionNamespace setVariable ['Wait',1,true];
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

if (((missionNamespace getvariable 'Buzz' == 1)or(missionNamespace getvariable 'Wait' == 1))&&(player getvariable '_Hited' == 0)) then{
     Hold = [player,'Time Counter',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa',
'_this distance _target < 3',
'_caller distance _target < 3',
{},
{},
{
  missionNamespace setVariable ['Buzz',0,true];
  []execVM  'ArG_Core\functions\fn_BuzzerBox.sqf';
  systemChat'Count Down Start';
  },
{missionNamespace setVariable ['Wait',1,true];
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

};",
"if(typeOf cursorObject != 'ArG_BuzzerBox')then{
[ player,Hold ] call BIS_fnc_holdActionRemove;}"
  ];
