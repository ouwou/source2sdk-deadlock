#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Constructor
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixDiffusorDesc_t
    {
    public:
        float m_flSize; // 0x0        
        float m_flComplexity; // 0x4        
        float m_flFeedback; // 0x8        
        float m_flOutputGain; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixDiffusorDesc_t, m_flSize) == 0x0);
    static_assert(offsetof(VMixDiffusorDesc_t, m_flComplexity) == 0x4);
    static_assert(offsetof(VMixDiffusorDesc_t, m_flFeedback) == 0x8);
    static_assert(offsetof(VMixDiffusorDesc_t, m_flOutputGain) == 0xc);
    
    static_assert(sizeof(VMixDiffusorDesc_t) == 0x10);
};
