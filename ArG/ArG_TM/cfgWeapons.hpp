class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class manual;
class close;
class Mode_Optics;
class Mode_eye;
class far_optic1;
class far_optic2;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class WeaponSlotsInfo;
class SAFE_PISTOL;
class UnderBarrelSlot;
class GripodSlot;

class CfgWeapons
{


    #include "UKP_Weapons.hpp"
    #include "Halal_Weapons.hpp"
    #include "TM_HK416_DEV.hpp"
    #include "TM_SCAR_L.hpp"
    #include "TM_SCAR_H.hpp"
    #include "TM_M4A1_NG.hpp"
    #include "TM_M4A1_NWS.hpp"
    #include "TM_Pistol.hpp"
    #include "TM_M320.hpp"
    #include "TM_VSR10_G.hpp"
    #include "TM_HK417_AEG.hpp"

    class asdg_OpticRail1913;
class asdg_FrontSideRail
{
	class compatibleItems;
};
class asdg_UnderSlot;

    class ItemCore;
        class InventoryItem_Base_F;
        class InventoryMuzzleItem_Base_F;
        class InventoryUnderItem_Base_F;
        class InventoryOpticsItem_Base_F;
        class InventoryFlashLightItem_Base_F;
        class Zasleh2: ItemCore
        {
            scope=2;
            model="A3\weapons_f\data\zaslehsdl_proxy.p3d";
        };

};
