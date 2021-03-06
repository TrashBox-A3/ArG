class cfgRecoils
{
 class GBRecoil
 {              //  x     y     a     b
  muzzleOuter[]	= { 0.2,  0.5,  0.2,  0.1 };
  muzzleInner[] = {0,0,0.1,0.1};
  kickBack[]	= { 0.03, 0.06 };
  permanent	= 0.1;
  temporary	= 0.01;
 };

 class NextEGRecoil
 {              //  x     y     a     b
  muzzleOuter[]	= { 0.1,  0.2,  0.1,  0.1 };
  muzzleInner[] = {0,0,0.1,0.1};
  kickBack[]	= { 0.01, 0.03 };
  permanent	= 0.1;
  temporary	= 0.01;
 };

 class HGRecoil
 {              //  x     y     a     b
  muzzleOuter[]	= { 0.3,  0.5,  0.1,  0.1 };
  muzzleInner[] = {0,0,0.1,0.1};
  kickBack[]	= { 0.01, 0.03 };
  permanent	= 0.1;
  temporary	= 0.01;
 };

 class EGRecoil
 {              //  x     y     a     b
  muzzleOuter[] = { 0.1,  0.1,  0.1,  0.1 };
  muzzleInner[] = {0,0,0.1,0.1};
  kickBack[]  = { 0.01, 0.01 };
  permanent = 0.1;
  temporary = 0.01;
 };

 class NoRecoil
 {              //  x     y     a     b
  muzzleOuter[] = { 0.0,  0.0,  0.0,  0.0 };
  muzzleInner[] = {0,0,0.0,0.0};
  kickBack[]  = { 0.00, 0.00 };
  permanent = 0.1;
  temporary = 0.01;
 };

};
