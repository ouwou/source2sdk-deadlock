#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Burning.hpp"
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
    class CCitadel_Modifier_SpreadingFire_DOT : public server::CCitadel_Modifier_Burning
    {
    public:
        entity2::GameTime_t m_flLastBurnTime; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_SpreadingFire_DOT because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_SpreadingFire_DOT) == 0x1e0);
};
