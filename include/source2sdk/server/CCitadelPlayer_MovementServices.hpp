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
    // Size: 0x278
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
    #pragma pack(push, 1)
    class CCitadelPlayer_MovementServices : public server::CPlayer_MovementServices_Humanoid
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkPriority "32"
        client::CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x228        
        [[maybe_unused]] std::uint8_t pad_0x250[0x8]; // 0x250
        Vector m_vecPogoVelocity; // 0x258        
        Vector m_vecSupport; // 0x264        
        bool m_bColliding; // 0x270        
        bool m_bLandedOnGround; // 0x271        
        bool m_bHasFreeCursor; // 0x272        
        [[maybe_unused]] std::uint8_t pad_0x273[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayer_MovementServices because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayer_MovementServices) == 0x278);
};
