params [
    ["_logic", objNull, [objNull]],
    "_time","_MaxTime"
    ];

    // Define variables
_time = _logic getVariable [""];
_MaxTime = _logic getVariable [""];

_time = 300;
_MaxTime = 600;
while {true} do {


  while {_time > 0} do {

if (missionNamespace getvariable "Buzz" == 0) then {


	_time = _time - 1;
	hintSilent format["CountDown Time Remaining \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
	sleep 1;

  if (_time <= 0) then {


    CountDown = true;PublicVariable"CountDown";

  };

}
else
{

if ((missionNamespace getvariable "Buzz" == 1)&&(_time < _MaxTime)) then {

  _time = _time + 1;
  hintSilent format["CountUp Time Remaining \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
  sleep 1;

  if ((_time >= _MaxTime)) then {


    CountUp = true;PublicVariable"CountUp";
  };
};
};


};
};
