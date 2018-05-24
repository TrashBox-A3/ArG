systemChat"script done";
private "_time";
_time = 300;


while {true} do {


  while {_time > 0} do {

if (missionNamespace getvariable "Buzz" == 0) then {


	_time = _time - 1;
	hintSilent format["Remaining \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
	sleep 1;

  if (_time <= 0) then {

    hint "もう無理です母上様";
    sleep 5;

      cuttext ["could not recover.......","PLAIN",10];

      "Looser" call BIS_fnc_endMission;ForceEND;
  };

}

else

{

if ((missionNamespace getvariable "Buzz" == 1)&&(_time < 300)) then {

  _time = _time + 1;
  hintSilent format["Recovered \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
  sleep 1;
};

};



};
};
