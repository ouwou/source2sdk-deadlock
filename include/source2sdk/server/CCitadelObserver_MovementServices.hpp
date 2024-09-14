#pragma once
#include "source2sdk/server/CPlayer_MovementServices.hpp"
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
    // Size: 0x1e0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelObserver_MovementServices : public server::CPlayer_MovementServices
    {
    public:
        float m_flRoamingSpeed; // 0x1d8        
        bool m_bHasFreeCursor; // 0x1dc        
        [[maybe_unused]] std::uint8_t pad_0x1dd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelObserver_MovementServices because it is not a standard-layout class
    static_assert(sizeof(CCitadelObserver_MovementServices) == 0x1e0);
};
