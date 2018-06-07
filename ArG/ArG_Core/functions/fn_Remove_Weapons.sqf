
while{!(player hasweapon "")}do{
waituntil{(!(player hasweapon ""))};

player addEventHandler ["Take", {
  _ArGGamer = [
  "ArG_Gamer_1",
  "ArG_Gamer_2",
  "ArG_Gamer_3",
  "ArG_Gamer_4",
  "ArG_Gamer_5",
  "ArG_Gamer_6",
  "ArG_Gamer_7",
  "ArG_Gamer_8"
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

  {
    if ((isPlayer _x)&&(typeOf _x in _ArGGamer)) then {

         if(!(handgunWeapon player == ""))then{
           if(!(handgunWeapon player in _ArGWeapons))then{

               player removeWeapon (handgunWeapon player);
         };
       }
       else
       {

       if(!(primaryWeapon player == ""))then{
         if(!(primaryWeapon player in _ArGWeapons))then{
             player removeWeapon (primaryWeapon player);
         };
       };

       if(!(secondaryWeapon player == ""))then{
             player removeWeapon (secondaryWeapon player);
          };
        };

        };
      }forEach allUnits;

  sleep 2;

}];
};
