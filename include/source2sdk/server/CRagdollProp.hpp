#pragma once
#include "source2sdk/client/ragdoll_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_ragPos"
    // static metadata: MNetworkVarNames "QAngle m_ragAngles"
    // static metadata: MNetworkVarNames "EHANDLE m_hRagdollSource"
    // static metadata: MNetworkVarNames "float32 m_flBlendWeight"
    #pragma pack(push, 1)
    class CRagdollProp : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9b0[0x8]; // 0x9b0
        client::ragdoll_t m_ragdoll; // 0x9b8        
        bool m_bStartDisabled; // 0x9f0        
        [[maybe_unused]] std::uint8_t pad_0x9f1[0x7]; // 0x9f1
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector> m_ragPos;
        char m_ragPos[0x18]; // 0x9f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "13"
        // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<QAngle> m_ragAngles;
        char m_ragAngles[0x18]; // 0xa10        
        // metadata: MNetworkEnable
        // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRagdollSource;
        char m_hRagdollSource[0x4]; // 0xa28        
        uint32_t m_lastUpdateTickCount; // 0xa2c        
        bool m_allAsleep; // 0xa30        
        bool m_bFirstCollisionAfterLaunch; // 0xa31        
        [[maybe_unused]] std::uint8_t pad_0xa32[0x2]; // 0xa32
        // m_hDamageEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDamageEntity;
        char m_hDamageEntity[0x4]; // 0xa34        
        // m_hKiller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hKiller;
        char m_hKiller[0x4]; // 0xa38        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xa3c        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xa40        
        entity2::GameTime_t m_flFadeOutStartTime; // 0xa44        
        float m_flFadeTime; // 0xa48        
        // metadata: MNetworkDisable
        Vector m_vecLastOrigin; // 0xa4c        
        entity2::GameTime_t m_flAwakeTime; // 0xa58        
        entity2::GameTime_t m_flLastOriginChangeTime; // 0xa5c        
        CUtlSymbolLarge m_strOriginClassName; // 0xa60        
        CUtlSymbolLarge m_strSourceClassName; // 0xa68        
        bool m_bHasBeenPhysgunned; // 0xa70        
        bool m_bShouldTeleportPhysics; // 0xa71        
        [[maybe_unused]] std::uint8_t pad_0xa72[0x2]; // 0xa72
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flBlendWeight; // 0xa74        
        float m_flDefaultFadeScale; // 0xa78        
        [[maybe_unused]] std::uint8_t pad_0xa7c[0x4]; // 0xa7c
        // m_ragdollMins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_ragdollMins;
        char m_ragdollMins[0x18]; // 0xa80        
        // m_ragdollMaxs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_ragdollMaxs;
        char m_ragdollMaxs[0x18]; // 0xa98        
        bool m_bShouldDeleteActivationRecord; // 0xab0        
        [[maybe_unused]] std::uint8_t pad_0xab1[0x5f]; // 0xab1
        bool m_bValidatePoweredRagdollPose; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb11[0x3f];
        
        // Datamap fields:
        // void m_ragdoll.boneIndex; // 0x9d0
        // void InputEnableMotion; // 0x0
        // void InputDisableMotion; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // float InputFadeAndRemove; // 0x0
        // void CRagdollPropSetDebrisThink; // 0x0
        // void CRagdollPropClearFlagsThink; // 0x0
        // void CRagdollPropFadeOutThink; // 0x0
        // void CRagdollPropSettleThink; // 0x0
        // void CRagdollPropAttachedItemsThink; // 0x0
        // void CRagdollPropRagdollTouch; // 0x0
        // void m_ragdoll.list; // 0x9b8
        // bool m_ragdoll.allowStretch; // 0x9e8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollProp because it is not a standard-layout class
    static_assert(sizeof(CRagdollProp) == 0xb50);
};
