while {primaryWeaponItems player select 0 == ""}do{
player addPrimaryWeaponItem "ArG_muzzle_snds_H";


waituntil{primaryWeaponItems player select 0 == ""};
};
