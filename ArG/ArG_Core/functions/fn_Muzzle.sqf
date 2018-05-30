
while{true}do{

hint"do";
  if (primaryWeaponItems player select 0 == "")then{
player addPrimaryWeaponItem "ArG_muzzle_snds_H";

};


waituntil{primaryWeaponItems player select 0 == ""};



};
