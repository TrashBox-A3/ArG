





if(missionNamespace getvariable "ST1" == 1)then{
    systemChat "BlueTeam Ready";
  };
   if(missionNamespace getvariable "ST2" == 1)then{
       systemChat "RedTeam Ready";
  };

if((missionNamespace getvariable "ST1" == 1)&&(missionNamespace getvariable "ST2" == 1))then{

systemChat "Game Ready!";

};
