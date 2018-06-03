


if(missionNamespace getvariable "ST1" == 1)then{
  sleep 4;
    cuttext ["BlueTeam Ready","PLAIN",3];
  };
   if(missionNamespace getvariable "ST2" == 1)then{
     sleep 4;
       cuttext ["RedTeam Ready","PLAIN",3];
  };

if((missionNamespace getvariable "ST1" == 1)&&(missionNamespace getvariable "ST2" == 1))then{
cuttext ["","PLAIN",1];
cuttext ["Game Ready","PLAIN",3];
sleep 4;
{_x enableSimulationGlobal false;}count allUnits;

_tr1 = createTrigger ["EmptyDetector", [0,0,0]];
_tr1 setTriggerTimeout [10, 10, 10, false];
_tr1 setTriggerStatements [
    "true",
    "deleteVehicle thisTrigger",
    ""
];
0 = _tr1 spawn {
    waitUntil {triggerTimeoutCurrent _this > 0};
    waitUntil {
      if (floor triggerTimeoutCurrent _this = 2) exitWith {true};
      titletext ["","WHITE IN",6];
        if (floor triggerTimeoutCurrent _this <= 0) exitWith {true};
        sleep 0.2;
        hintSilent parseText format [
            "<t size='5' color='#FFFF00' shadow='2'>%1</t>",
            floor triggerTimeoutCurrent _this
        ];
        false
    };

    hint"GoGoGo!!";
    0 = [] spawn {
	playMusic ["BackgroundTrack03_F", 1];
  sleep 60;
	playMusic "";
};


   {_x enableSimulationGlobal true;}count allUnits;
   sleep 30;
   15 fadeMusic 0;
};


};
