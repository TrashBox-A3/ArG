

private "_time";
_time = 120;

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

if ((missionNamespace getvariable "Buzz" == 1)&&(_time < 240)) then {

  _time = _time + 1;
  hintSilent format["CountUp Time Remaining \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
  sleep 1;

  if ((_time >= 240)) then {


    CountUp = true;PublicVariable"CountUp";
  };
};
};


};
};
