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
    // Size: 0x18
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ModifierRenderAttribute_t
    {
    public:
        CUtlString m_sAttribute; // 0x0        
        Vector4D m_vValues; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModifierRenderAttribute_t, m_sAttribute) == 0x0);
    static_assert(offsetof(ModifierRenderAttribute_t, m_vValues) == 0x8);
    
    static_assert(sizeof(ModifierRenderAttribute_t) == 0x18);
};
