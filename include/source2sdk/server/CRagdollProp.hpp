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
    // Size: 0xb48
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
        [[maybe_unused]] std::uint8_t pad_0x9a8[0x8]; // 0x9a8
        client::ragdoll_t m_ragdoll; // 0x9b0        
        bool m_bStartDisabled; // 0x9e8        
        [[maybe_unused]] std::uint8_t pad_0x9e9[0x7]; // 0x9e9
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector> m_ragPos;
        char m_ragPos[0x18]; // 0x9f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "13"
        // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<QAngle> m_ragAngles;
        char m_ragAngles[0x18]; // 0xa08        
        // metadata: MNetworkEnable
        // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRagdollSource;
        char m_hRagdollSource[0x4]; // 0xa20        
        uint32_t m_lastUpdateTickCount; // 0xa24        
        bool m_allAsleep; // 0xa28        
        bool m_bFirstCollisionAfterLaunch; // 0xa29        
        [[maybe_unused]] std::uint8_t pad_0xa2a[0x2]; // 0xa2a
        // m_hDamageEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDamageEntity;
        char m_hDamageEntity[0x4]; // 0xa2c        
        // m_hKiller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hKiller;
        char m_hKiller[0x4]; // 0xa30        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xa34        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xa38        
        entity2::GameTime_t m_flFadeOutStartTime; // 0xa3c        
        float m_flFadeTime; // 0xa40        
        // metadata: MNetworkDisable
        Vector m_vecLastOrigin; // 0xa44        
        entity2::GameTime_t m_flAwakeTime; // 0xa50        
        entity2::GameTime_t m_flLastOriginChangeTime; // 0xa54        
        CUtlSymbolLarge m_strOriginClassName; // 0xa58        
        CUtlSymbolLarge m_strSourceClassName; // 0xa60        
        bool m_bHasBeenPhysgunned; // 0xa68        
        bool m_bShouldTeleportPhysics; // 0xa69        
        [[maybe_unused]] std::uint8_t pad_0xa6a[0x2]; // 0xa6a
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flBlendWeight; // 0xa6c        
        float m_flDefaultFadeScale; // 0xa70        
        [[maybe_unused]] std::uint8_t pad_0xa74[0x4]; // 0xa74
        // m_ragdollMins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_ragdollMins;
        char m_ragdollMins[0x18]; // 0xa78        
        // m_ragdollMaxs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_ragdollMaxs;
        char m_ragdollMaxs[0x18]; // 0xa90        
        bool m_bShouldDeleteActivationRecord; // 0xaa8        
        [[maybe_unused]] std::uint8_t pad_0xaa9[0x5f]; // 0xaa9
        bool m_bValidatePoweredRagdollPose; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb09[0x3f];
        
        // Datamap fields:
        // void m_ragdoll.boneIndex; // 0x9c8
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
        // void m_ragdoll.list; // 0x9b0
        // bool m_ragdoll.allowStretch; // 0x9e0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollProp because it is not a standard-layout class
    static_assert(sizeof(CRagdollProp) == 0xb48);
};
