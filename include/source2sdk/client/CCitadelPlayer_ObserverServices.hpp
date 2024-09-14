#pragma once
#include "source2sdk/client/CPlayer_ObserverServices.hpp"
#include "source2sdk/client/ObserverMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xa8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOverrideObserverTarget"
    // static metadata: MNetworkVarNames "ObserverMode_t m_iOverrideObserverMode"
    // static metadata: MNetworkVarNames "int32 m_iSecondsAfterDeathToAllowObserving"
    #pragma pack(push, 1)
    class CCitadelPlayer_ObserverServices : public client::CPlayer_ObserverServices
    {
    public:
        int32_t m_nLastLocalPlayerObservedTeam; // 0x58        
        int32_t m_nLastObservedTeam; // 0x5c        
        int32_t m_nCurrentObservedTeam; // 0x60        
        // m_hLastObserverTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastObserverTarget;
        char m_hLastObserverTarget[0x4]; // 0x64        
        // m_hPreviousTeamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPreviousTeamTarget;
        char m_hPreviousTeamTarget[0x4]; // 0x68        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LocalPlayerExclusive"
        // m_hOverrideObserverTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOverrideObserverTarget;
        char m_hOverrideObserverTarget[0x4]; // 0x6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LocalPlayerExclusive"
        client::ObserverMode_t m_iOverrideObserverMode; // 0x70        
        // metadata: MNetworkEnable
        int32_t m_iSecondsAfterDeathToAllowObserving; // 0x74        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnTargetCameraAnglesChanged"
        QAngle m_angTargetCamera; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x84[0xc]; // 0x84
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnTargetCameraPositionChanged"
        Vector m_vTargetCameraPos; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x9c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayer_ObserverServices because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayer_ObserverServices) == 0xa8);
};
