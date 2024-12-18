#pragma once
#include "source2sdk/client/CAnimGraphControllerBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x500
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPlayerPawn_GraphController2 : public client::CAnimGraphControllerBase
    {
    public:
        // m_bAiming has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bAiming;
        char m_bAiming[0x18]; // 0x80        
        // m_bAirDash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bAirDash;
        char m_bAirDash[0x18]; // 0x98        
        // m_bCrouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bCrouching;
        char m_bCrouching[0x18]; // 0xb0        
        // m_bDashJump has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bDashJump;
        char m_bDashJump[0x18]; // 0xc8        
        // m_bInAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bInAir;
        char m_bInAir[0x18]; // 0xe0        
        // m_bKnockedDown has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bKnockedDown;
        char m_bKnockedDown[0x18]; // 0xf8        
        // m_bParryActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bParryActive;
        char m_bParryActive[0x18]; // 0x110        
        // m_bParrySuccess has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bParrySuccess;
        char m_bParrySuccess[0x18]; // 0x128        
        // m_bPredictionError has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bPredictionError;
        char m_bPredictionError[0x18]; // 0x140        
        // m_bPsychicLiftSelf has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bPsychicLiftSelf;
        char m_bPsychicLiftSelf[0x18]; // 0x158        
        // m_bQuickReload has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bQuickReload;
        char m_bQuickReload[0x18]; // 0x170        
        // m_bReloading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bReloading;
        char m_bReloading[0x18]; // 0x188        
        // m_bSelfCast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bSelfCast;
        char m_bSelfCast[0x18]; // 0x1a0        
        // m_bShoot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bShoot;
        char m_bShoot[0x18]; // 0x1b8        
        // m_bShootAlt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_bShootAlt;
        char m_bShootAlt[0x18]; // 0x1d0        
        // m_bShooting has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bShooting;
        char m_bShooting[0x18]; // 0x1e8        
        // m_bSleepSelf has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bSleepSelf;
        char m_bSleepSelf[0x18]; // 0x200        
        // m_bSlideGetup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bSlideGetup;
        char m_bSlideGetup[0x18]; // 0x218        
        // m_bSliding has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bSliding;
        char m_bSliding[0x18]; // 0x230        
        // m_bStartGroundDash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bStartGroundDash;
        char m_bStartGroundDash[0x18]; // 0x248        
        // m_bZipLining has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_bZipLining;
        char m_bZipLining[0x18]; // 0x260        
        // m_bReloadingSingleRoundStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_bReloadingSingleRoundStart;
        char m_bReloadingSingleRoundStart[0x18]; // 0x278        
        // m_bReloadingSingleRound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_bReloadingSingleRound;
        char m_bReloadingSingleRound[0x18]; // 0x290        
        // m_flAirDashHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flAirDashHeading;
        char m_flAirDashHeading[0x18]; // 0x2a8        
        // m_flCrouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flCrouching;
        char m_flCrouching[0x18]; // 0x2c0        
        // m_flForwardSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flForwardSpeed;
        char m_flForwardSpeed[0x18]; // 0x2d8        
        // m_flLookHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flLookHeading;
        char m_flLookHeading[0x18]; // 0x2f0        
        // m_flLookPitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flLookPitch;
        char m_flLookPitch[0x18]; // 0x308        
        // m_flMeleeRandom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flMeleeRandom;
        char m_flMeleeRandom[0x18]; // 0x320        
        // m_flMoveSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flMoveSpeed;
        char m_flMoveSpeed[0x18]; // 0x338        
        // m_flReloadFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flReloadFraction;
        char m_flReloadFraction[0x18]; // 0x350        
        // m_flReloadTransitionTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flReloadTransitionTime;
        char m_flReloadTransitionTime[0x18]; // 0x368        
        // m_flStrafeSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flStrafeSpeed;
        char m_flStrafeSpeed[0x18]; // 0x380        
        // m_flAmmoFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_flAmmoFraction;
        char m_flAmmoFraction[0x18]; // 0x398        
        // m_eDeathSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eDeathSequence;
        char m_eDeathSequence[0x18]; // 0x3b0        
        // m_eFlinchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eFlinchType;
        char m_eFlinchType[0x18]; // 0x3c8        
        // m_eFullBodySequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eFullBodySequence;
        char m_eFullBodySequence[0x18]; // 0x3e0        
        // m_eGenericCast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eGenericCast;
        char m_eGenericCast[0x18]; // 0x3f8        
        // m_eGenericThrow has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eGenericThrow;
        char m_eGenericThrow[0x18]; // 0x410        
        // m_eLaunchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eLaunchType;
        char m_eLaunchType[0x18]; // 0x428        
        // m_eMelee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eMelee;
        char m_eMelee[0x18]; // 0x440        
        // m_eMovementType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eMovementType;
        char m_eMovementType[0x18]; // 0x458        
        // m_eRopeClimb has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eRopeClimb;
        char m_eRopeClimb[0x18]; // 0x470        
        // m_eSelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eSelectedAbility;
        char m_eSelectedAbility[0x18]; // 0x488        
        // m_eTurn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eTurn;
        char m_eTurn[0x18]; // 0x4a0        
        // m_eZiplineState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_eZiplineState;
        char m_eZiplineState[0x18]; // 0x4b8        
        // m_Locomotion_Facing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<Vector> m_Locomotion_Facing;
        char m_Locomotion_Facing[0x18]; // 0x4d0        
        // m_Look_Target has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<Vector> m_Look_Target;
        char m_Look_Target[0x18]; // 0x4e8        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController2")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController2")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn_GraphController2 because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn_GraphController2) == 0x500);
};
