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

    sleep 0.1;

    switch (true) do {

     case (missionNamespace getvariable "Buzz" == 2):
        {
          {
           _x setDamage 1;
          }forEach _Speakers;
        };

     case (missionNamespace getvariable "Buzz" == 0):
        {
          {
            while {true} do
            {
              _x setDamage 0;
              _x say3D "Buzzer";
                sleep 5;
              waituntil{missionNamespace getvariable "Buzz" == 0};
            };
         }forEach _Speakers;
       };

      case (missionNamespace getvariable "Buzz" == 1):
         {
           {
            while {true} do
            {
              _x setDamage 0;
              _x say3D "Buzzer2";
                sleep 11;

              waituntil{missionNamespace getvariable "Buzz" == 1};
            };
          }forEach _Speakers;
       };
    };
 };
