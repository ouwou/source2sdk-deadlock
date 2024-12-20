#pragma once
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
    // Size: 0xbc0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Thumper_2 : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vStompPos; // 0xaf8        
        Vector m_vStompDir; // 0xb04        
        int32_t m_nStomps; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb14[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Thumper_2 because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Thumper_2) == 0xbc0);
};
