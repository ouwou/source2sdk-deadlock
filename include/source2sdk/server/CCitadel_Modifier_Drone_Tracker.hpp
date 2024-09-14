#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CNPC_FlyingDrone;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Drone_Tracker : public server::CCitadelModifier
    {
    public:
        // m_hDrone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CNPC_FlyingDrone> m_hDrone;
        char m_hDrone[0x4]; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Drone_Tracker because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Drone_Tracker) == 0xc8);
};
