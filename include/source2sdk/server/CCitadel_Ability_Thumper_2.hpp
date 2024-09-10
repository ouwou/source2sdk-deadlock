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
    // Size: 0xba0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Thumper_2 : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vStompPos; // 0xad8        
        Vector m_vStompDir; // 0xae4        
        int32_t m_nStomps; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf4[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Thumper_2 because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Thumper_2) == 0xba0);
};