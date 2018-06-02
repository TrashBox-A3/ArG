private ["_types","_Speakers"];

_types = [
"ArG_Speaker"
];

_BGamer = [
"ArG_Gamer_1",
"ArG_Gamer_2",
"ArG_Gamer_3",
"ArG_Gamer_4"
];

_RGamer = [
"ArG_Gamer_5",
"ArG_Gamer_6",
"ArG_Gamer_7",
"ArG_Gamer_8"
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




    if (missionNamespace getvariable "Buzz" == 2) exitWith
    {
     {

      _x setDamage 1;


      }forEach _Speakers;
    };

    	if (missionNamespace getvariable "Buzz" == 0) exitWith
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


    	if (missionNamespace getvariable "Buzz" == 1) exitWith
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
