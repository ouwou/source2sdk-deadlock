#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x170
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Slork_Raging_Current_Countdown : public server::CCitadelModifier
    {
    public:
        client::ParticleIndex_t m_hAreaEffect; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Slork_Raging_Current_Countdown because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Slork_Raging_Current_Countdown) == 0x170);
};
