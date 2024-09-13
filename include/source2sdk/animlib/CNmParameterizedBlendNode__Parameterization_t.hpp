#pragma once
#include "source2sdk/animlib/CNmParameterizedBlendNode__BlendRange_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x50
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CNmParameterizedBlendNode__Parameterization_t
    {
    public:
        // m_blendRanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVectorFixedGrowable<animlib::CNmParameterizedBlendNode__BlendRange_t,5> m_blendRanges;
        char m_blendRanges[0x48]; // 0x0        
        Range_t m_parameterRange; // 0x48        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmParameterizedBlendNode__Parameterization_t, m_blendRanges) == 0x0);
    static_assert(offsetof(CNmParameterizedBlendNode__Parameterization_t, m_parameterRange) == 0x48);
    
    static_assert(sizeof(CNmParameterizedBlendNode__Parameterization_t) == 0x50);
};
