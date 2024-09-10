#pragma once
#include "source2sdk/client/CAnimGraph2ControllerBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2c8
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_Trooper_GraphController2 : public client::CAnimGraph2ControllerBase
    {
    public:
        // m_flHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<float> m_flHealth;
        char m_flHealth[0x20]; // 0x10        
        // m_flTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<float> m_flTimeScale;
        char m_flTimeScale[0x20]; // 0x30        
        // m_flForwardSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<float> m_flForwardSpeed;
        char m_flForwardSpeed[0x20]; // 0x50        
        // m_flStrafeSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<float> m_flStrafeSpeed;
        char m_flStrafeSpeed[0x20]; // 0x70        
        // m_flLookHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<float> m_flLookHeading;
        char m_flLookHeading[0x20]; // 0x90        
        // m_flLookPitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<float> m_flLookPitch;
        char m_flLookPitch[0x20]; // 0xb0        
        // m_flMoveSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<float> m_flMoveSpeed;
        char m_flMoveSpeed[0x20]; // 0xd0        
        // m_flNumHitReactLayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<float> m_flNumHitReactLayers;
        char m_flNumHitReactLayers[0x20]; // 0xf0        
        // m_flHitLayerTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<float> m_flHitLayerTrigger;
        char m_flHitLayerTrigger[0x20]; // 0x110        
        // m_Locomotion_Facing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<Vector> m_Locomotion_Facing;
        char m_Locomotion_Facing[0x20]; // 0x130        
        // m_bShoot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_bShoot;
        char m_bShoot[0x20]; // 0x150        
        // m_bInAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_bInAir;
        char m_bInAir[0x20]; // 0x170        
        // m_bHasTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_bHasTarget;
        char m_bHasTarget[0x20]; // 0x190        
        // m_bNearDeath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_bNearDeath;
        char m_bNearDeath[0x20]; // 0x1b0        
        // m_bFalling has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_bFalling;
        char m_bFalling[0x20]; // 0x1d0        
        // m_bZiplining has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_bZiplining;
        char m_bZiplining[0x20]; // 0x1f0        
        // m_flRandomMelee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<float> m_flRandomMelee;
        char m_flRandomMelee[0x20]; // 0x210        
        // m_bMedicHeal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_bMedicHeal;
        char m_bMedicHeal[0x20]; // 0x230        
        // m_TROOPER_MovementState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_TROOPER_MovementState;
        char m_TROOPER_MovementState[0x20]; // 0x250        
        // m_vecTriggeredParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<CGlobalSymbol,8> m_vecTriggeredParams;
        char m_vecTriggeredParams[0x58]; // 0x270        
        
        // Static fields:
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Trooper_GraphController2")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Trooper_GraphController2 because it is not a standard-layout class
    
    static_assert(sizeof(CNPC_Trooper_GraphController2) == 0x2c8);
};