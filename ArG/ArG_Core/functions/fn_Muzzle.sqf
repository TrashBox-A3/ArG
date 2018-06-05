if ((!isServer) && (player != player)) then
{
  waitUntil {player == player};
};

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

_ArGWeapons = [
"ArG_AK_PKM",
"ArG_AK_SR25K",
"ArG_MX_F",
"ArG_MX_F_BLK",
"ArG_Katiba_F",
"ArG_Mk20_F",
"ArG_EBR_F",
"ArG_Mk200_F",
"ArG_GHK_AKM",
"ArG_KSC_PM",
"ArG_KSC_AK74M",
"ArG_LCT_AKM",
"ArG_LCT_VAL",
"ArG_TM_HK416_DEV",
"ArG_TM_M4A1_NG",
"ArG_TM_M4A1_NWS",
"ArG_TM_SCAR_L_TAN",
"ArG_TM_SCAR_H_TAN",
"ArG_TM_Glock17",
"ArG_TM_P226R",
"ArG_TM_M92F",
"ArG_M320",
"ArG_TM_AK47T3",
"ArG_TM_VSR10_G",
"ArG_TM_HK417_AEG",
"ArG_VFC_HK416A5_GBB_BLK",
"ArG_VFC_HK416A5_GBB_SND",
"ArG_VFC_M27IAR_GBB",
"ArG_VFC_MP7A1_GBB",
"ArG_WE_SVD"
];

_Rifle = ["Rifle", configFile >> "CfgWeapons"];
_Launcher = ["Launcher", configFile >> "CfgWeapons"];
_handgun = ["Pistol", configFile >> "CfgWeapons"];
_Throw =  ["Throw", configFile >> "CfgWeapons"];
_Put = ["Put", configFile >> "CfgWeapons"];

while{!(player hasweapon "")}do{

{
  if ((isPlayer _x)&&(typeOf _x in _ArGGamer)) then {


         if(!(handgunWeapon player in _ArGWeapons))then{
        player removeWeapon (handgunWeapon player count _handgun > 0);
       };
           if(!(primaryWeapon player in _ArGWeapons))then{
             player removeWeapon (primaryWeapon player count _Rifle > 0);
            };

    if(!(primaryWeapon player isEqualTo "")&&(primaryWeaponItems _x select 0 == ""))then{

    player addPrimaryWeaponItem "ArG_muzzle_snds_H";
    };


   if(!(handgunWeapon player isEqualTo "")&&(handgunItems _x select 0 == ""))then{

     player addHandgunItem "ArG_muzzle_snds_H";
 };
};
    }forEach allUnits;

    waituntil{((primaryWeaponItems player select 0 == "")or(handgunItems player select 0 == ""))};
   };
sleep 2;
