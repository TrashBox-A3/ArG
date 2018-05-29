params [
    ["_logic", objNull, [objNull]],
    "Def_Time","MaxTime"
    ];

    #define Def_Time 300
    #define Def_Max 600

    // Define variables
_time = _logic getVariable ["Def_Time",Def_Time];
_MaxTime = _logic getVariable ["MaxTime",Def_Max];



while {true} do {


  while {Def_Time > 0} do {

if (missionNamespace getvariable "Buzz" == 0) then {


	Def_Time = Def_Time - 1;
	hintSilent format["CountDown Time Remaining \n %1", [((Def_Time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
	sleep 1;

  if (Def_Time <= 0) then {


    CountDown = true;PublicVariable"CountDown";

  };

}
else
{

if ((missionNamespace getvariable "Buzz" == 1)&&(Def_Time < MaxTime)) then {

  Def_Time = Def_Time + 1;
  hintSilent format["CountUp Time Remaining \n %1", [((Def_Time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
  sleep 1;

  if ((Def_Time >= MaxTime)) then {


    CountUp = true;PublicVariable"CountUp";
  };
};
};


};
};
