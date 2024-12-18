#pragma once
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/CPlayer_MovementServices_Humanoid.hpp"
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
    // Size: 0x280
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
    // static metadata: MNetworkVarNames "bool m_bToggleDuckActive"
    #pragma pack(push, 1)
    class CCitadelPlayer_MovementServices : public client::CPlayer_MovementServices_Humanoid
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkPriority "32"
        client::CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x240[0x8]; // 0x240
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkPriority "32"
        bool m_bToggleDuckActive; // 0x248        
        [[maybe_unused]] std::uint8_t pad_0x249[0x3]; // 0x249
        Vector m_vecPogoVelocity; // 0x24c        
        Vector m_vecSupport; // 0x258        
        bool m_bColliding; // 0x264        
        bool m_bLandedOnGround; // 0x265        
        bool m_bHasFreeCursor; // 0x266        
        [[maybe_unused]] std::uint8_t pad_0x267[0x19];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayer_MovementServices because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayer_MovementServices) == 0x280);
};
