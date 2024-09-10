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
    // Size: 0x1f0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_LockDown_Debuff : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x118]; // 0xc8
        Vector m_vEscapeTarget; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_LockDown_Debuff because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_LockDown_Debuff) == 0x1f0);
};
