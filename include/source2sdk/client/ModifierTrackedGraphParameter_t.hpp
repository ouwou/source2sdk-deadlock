#pragma once
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
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ModifierTrackedGraphParameter_t
    {
    public:
        CGlobalSymbol m_sParamName; // 0x0        
        CAnimVariant m_restoreValue; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x19[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModifierTrackedGraphParameter_t, m_sParamName) == 0x0);
    static_assert(offsetof(ModifierTrackedGraphParameter_t, m_restoreValue) == 0x8);
    
    static_assert(sizeof(ModifierTrackedGraphParameter_t) == 0x20);
};
