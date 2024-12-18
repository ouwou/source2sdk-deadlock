#pragma once
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/server/CPlayer_MovementServices_Humanoid.hpp"
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
    // Size: 0x290
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
    // static metadata: MNetworkVarNames "bool m_bToggleDuckActive"
    #pragma pack(push, 1)
    class CCitadelPlayer_MovementServices : public server::CPlayer_MovementServices_Humanoid
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkPriority "32"
        client::CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x228        
        [[maybe_unused]] std::uint8_t pad_0x250[0x8]; // 0x250
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkPriority "32"
        bool m_bToggleDuckActive; // 0x258        
        [[maybe_unused]] std::uint8_t pad_0x259[0x3]; // 0x259
        Vector m_vecPogoVelocity; // 0x25c        
        Vector m_vecSupport; // 0x268        
        bool m_bColliding; // 0x274        
        bool m_bLandedOnGround; // 0x275        
        bool m_bHasFreeCursor; // 0x276        
        [[maybe_unused]] std::uint8_t pad_0x277[0x19];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayer_MovementServices because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayer_MovementServices) == 0x290);
};
