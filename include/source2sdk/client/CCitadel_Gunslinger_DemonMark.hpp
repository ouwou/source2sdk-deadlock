#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd80
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Gunslinger_DemonMark : public client::C_CitadelBaseAbility
    {
    public:
        entity2::GameTime_t m_flNextSearchTime; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc9c[0xe4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Gunslinger_DemonMark because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Gunslinger_DemonMark) == 0xd80);
};
