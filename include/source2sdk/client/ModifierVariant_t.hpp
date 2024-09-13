#pragma once
#include "source2sdk/client/ModifierVariantType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct ModifierVariant_t
    {
    public:
        client::ModifierVariantType_t m_eType; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x1c];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModifierVariant_t, m_eType) == 0x0);
    
    static_assert(sizeof(ModifierVariant_t) == 0x20);
};
