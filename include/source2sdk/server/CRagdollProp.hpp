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
    // Size: 0xbd8
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
        [[maybe_unused]] std::uint8_t pad_0xa38[0x8]; // 0xa38
        client::ragdoll_t m_ragdoll; // 0xa40        
        bool m_bStartDisabled; // 0xa78        
        [[maybe_unused]] std::uint8_t pad_0xa79[0x7]; // 0xa79
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector> m_ragPos;
        char m_ragPos[0x18]; // 0xa80        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "13"
        // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<QAngle> m_ragAngles;
        char m_ragAngles[0x18]; // 0xa98        
        // metadata: MNetworkEnable
        // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRagdollSource;
        char m_hRagdollSource[0x4]; // 0xab0        
        uint32_t m_lastUpdateTickCount; // 0xab4        
        bool m_allAsleep; // 0xab8        
        bool m_bFirstCollisionAfterLaunch; // 0xab9        
        [[maybe_unused]] std::uint8_t pad_0xaba[0x2]; // 0xaba
        // m_hDamageEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDamageEntity;
        char m_hDamageEntity[0x4]; // 0xabc        
        // m_hKiller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hKiller;
        char m_hKiller[0x4]; // 0xac0        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xac4        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xac8        
        entity2::GameTime_t m_flFadeOutStartTime; // 0xacc        
        float m_flFadeTime; // 0xad0        
        Vector m_vecLastOrigin; // 0xad4        
        entity2::GameTime_t m_flAwakeTime; // 0xae0        
        entity2::GameTime_t m_flLastOriginChangeTime; // 0xae4        
        CUtlSymbolLarge m_strOriginClassName; // 0xae8        
        CUtlSymbolLarge m_strSourceClassName; // 0xaf0        
        bool m_bHasBeenPhysgunned; // 0xaf8        
        bool m_bShouldTeleportPhysics; // 0xaf9        
        [[maybe_unused]] std::uint8_t pad_0xafa[0x2]; // 0xafa
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flBlendWeight; // 0xafc        
        float m_flDefaultFadeScale; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x4]; // 0xb04
        // m_ragdollMins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_ragdollMins;
        char m_ragdollMins[0x18]; // 0xb08        
        // m_ragdollMaxs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_ragdollMaxs;
        char m_ragdollMaxs[0x18]; // 0xb20        
        bool m_bShouldDeleteActivationRecord; // 0xb38        
        [[maybe_unused]] std::uint8_t pad_0xb39[0x5f]; // 0xb39
        bool m_bValidatePoweredRagdollPose; // 0xb98        
        [[maybe_unused]] std::uint8_t pad_0xb99[0x3f];
        
        // Datamap fields:
        // void m_ragdoll.boneIndex; // 0xa58
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
        // void m_ragdoll.list; // 0xa40
        // bool m_ragdoll.allowStretch; // 0xa70
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollProp because it is not a standard-layout class
    static_assert(sizeof(CRagdollProp) == 0xbd8);
};
