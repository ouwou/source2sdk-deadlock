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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Succor_Move : public server::CCitadelModifier
    {
    public:
        bool m_bHasPulled; // 0xc8        
        bool m_bIsPulling; // 0xc9        
        [[maybe_unused]] std::uint8_t pad_0xca[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Succor_Move because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Succor_Move) == 0xd0);
};