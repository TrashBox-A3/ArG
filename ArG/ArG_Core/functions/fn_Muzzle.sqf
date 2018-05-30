
params ["_ArGGamer","_AIHited"];

_ArGGamer = [
"ArG_Gamer_1",
"ArG_Gamer_2",
"ArG_Gamer_3",
"ArG_Gamer_4",
"ArG_Gamer_5",
"ArG_Gamer_6",
"ArG_Gamer_7",
"ArG_Gamer_8",
"ArG_Gamer_9",
"ArG_Gamer_10",
"ArG_Gamer_11",
"ArG_Gamer_12"
];

while{primaryWeaponItems player select 0 == ""}do{

{
  if ((isPlayer _x)&&(typeOf _x in _ArGGamer)) then {

    systemChat"do";
    player addPrimaryWeaponItem "ArG_muzzle_snds_H";
    };

 }forEach allUnits;

 waituntil{primaryWeaponItems player select 0 == ""};
};
