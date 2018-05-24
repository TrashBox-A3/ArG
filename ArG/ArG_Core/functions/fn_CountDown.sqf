systemChat"script done";
private "_time";
_time = 600;


while {true} do {


  while {_time > 0} do {

if (missionNamespace getVariable ["Buzz",true]) then {


	_time = _time - 1;
	hintSilent format["Defence Areaに侵入されている!! \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
	sleep 1;

  if (_time <= 0) then {

    hint "もう無理です母上様";
    sleep 5;

      cuttext ["防ぎ切れなかった......","PLAIN",10];

      "Looser" call BIS_fnc_endMission;ForceEND;
  };

}

else

{

if ((missionNamespace setVariable ["Buzz",nil])&&(_time < 600)) then {

  _time = _time + 1;
  hintSilent format["侵入者は排除した \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
  sleep 1;
};

};



};
};
