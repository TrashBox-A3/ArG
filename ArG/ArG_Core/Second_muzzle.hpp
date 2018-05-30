

class muzzle_snds_acp:
class ArG_Invisible_muzzle_Second: ItemCore
{
  author="Rodeostar42";

  htMin=1;
  htMax=100;
  afMax=0;
  mfMax=0;
  mFact=1;
  tBody=100;
  scope=2;
  displayName="Invisible muzzle";
  picture=;
  model=;
  class ItemInfo: ItemInfo
  {
    mass=6;
    class MagazineCoef
    {
      initSpeed=1.05;
    };
    class AmmoCoef
    {
      hit=0.01;
      typicalSpeed=1;
      airFriction=-0.020;
      visibleFire=0.30000001;
      audibleFire=0.039999999;
      visibleFireTime=0.5;
      audibleFireTime=0.5;
      cost=1;
    };
    soundTypeIndex=1;
    muzzleEnd="zaslehPoint";
    alternativeFire="Zasleh2";
    class MuzzleCoef
    {
      dispersionCoef="0.8f";
      artilleryDispersionCoef="1.0f";
      fireLightCoef="0.1f";
      recoilCoef="1.0f";
      recoilProneCoef="1.0f";
      minRangeCoef="1.0f";
      minRangeProbabCoef="1.0f";
      midRangeCoef="1.0f";
      midRangeProbabCoef="1.0f";
      maxRangeCoef="1.0f";
      maxRangeProbabCoef="1.0f";
    };
  };
  inertia=0.1;
};
