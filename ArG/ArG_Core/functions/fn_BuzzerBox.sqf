_types = [
"ArG_Speaker",
"ArG_BuzzerBox"
];



if (STATE) then
{
    STATE = false;
    _BuzzOff setVariable ["BuzzOff", 123, true];

}else{
    STATE = true;
    _BuzzOn setVariable ["BuzzOn", 123, true];
};

for [{_i=0},{_i < (count _types)},{_i=_i+1}] do
{

    _Speakers = getMarkerPos "GameArea" nearObjects [_types select _i , 300];
    sleep 0.7;

    while {STATE} do
    {
        {_x say3D "Buzzer"} forEach _Speakers;
        sleep 5;
    };

};
