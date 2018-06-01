private ["_types","_Speakers"];

_types = [
"ArG_Speaker"
];

if(STATE)then{
STATE = false;
missionNamespace setVariable ["Buzz",0,true];
}
else
{
  STATE = true;
  missionNamespace setVariable ["Buzz",1,true];
};

for [{_i=0},{_i < (count _types)},{_i=_i+1}] do
{
    _Speakers = getMarkerPos "GameArea" nearObjects [_types select _i , 1000];

    sleep 0.7;

    while {missionNamespace getvariable "Buzz" == 0} do
    {
        {

          _x setDamage 0;
          sleep 0.1;
          _x say3D "Buzzer"
        } forEach _Speakers;
        sleep 5;
     waituntil{missionNamespace getvariable "Buzz" == 0};
    };

    while {missionNamespace getvariable "Buzz" == 1} do
    {
         {

         _x setDamage 0;
         sleep 0.1;
         _x say3D "Buzzer2"
         } forEach _Speakers;
         sleep 11;
     waituntil{missionNamespace getvariable "Buzz" == 1};
    };

    while {missionNamespace getvariable "Buzz" == 2} do
    {
         {
         _x setDamage 1;
         sleep 0.1;

         } forEach _Speakers;
         sleep 2;
     waituntil{(missionNamespace getvariable "Buzz" == 2)};
    };

};
