#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xbe0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Gunslinger_DemonMark : public server::CCitadelBaseAbility
    {
    public:
        entity2::GameTime_t m_flNextSearchTime; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0xe4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Gunslinger_DemonMark because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Gunslinger_DemonMark) == 0xbe0);
};
