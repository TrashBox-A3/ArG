private ["_Buzz","_types","_Box","_Speakers"];

_types = [
"ArG_Speaker"
];

if (STATE) then
{
    STATE = false;
    missionNamespace setVariable ["Buzz",1,true];
    systemChat"Count Up Start";
}else{
    STATE = true;
    missionNamespace setVariable ["Buzz",0,true];
    systemChat"Count Down Start";
};
for [{_i=0},{_i < (count _types)},{_i=_i+1}] do
{
    _Speakers = (typeOf _x == _types);

    sleep 0.7;

    while {missionNamespace getvariable "Buzz" == 0} do

    {

        {{
          _x setDamage 1;
          sleep 0.1;
          _x setDamage 0;
          sleep 0.1;
          _x say3D "Buzzer"
        } forEach _Speakers;
        sleep 5;}forEach  allMissionObjects;

    };

    while {missionNamespace getvariable "Buzz" == 1} do

    {

       {{
         _x setDamage 1;
         sleep 0.1;
         _x setDamage 0;
         sleep 0.1;
         _x say3D "Buzzer2"
       } forEach _Speakers;
         sleep 14;}forEach  allMissionObjects;

    };

};
