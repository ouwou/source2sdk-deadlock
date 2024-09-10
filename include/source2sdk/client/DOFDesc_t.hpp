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
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct DOFDesc_t
    {
    public:
        // metadata: MPropertyDescription "Blurry up through this distance."
        float m_flDofNearBlurry; // 0x0        
        // metadata: MPropertyDescription "Progress to crisp at this distance."
        float m_flDofNearCrisp; // 0x4        
        // metadata: MPropertyDescription "Stay crisp up through this distance."
        float m_flDofFarCrisp; // 0x8        
        // metadata: MPropertyDescription "Progress blurry at this distance."
        float m_flDofFarBlurry; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DOFDesc_t, m_flDofNearBlurry) == 0x0);
    static_assert(offsetof(DOFDesc_t, m_flDofNearCrisp) == 0x4);
    static_assert(offsetof(DOFDesc_t, m_flDofFarCrisp) == 0x8);
    static_assert(offsetof(DOFDesc_t, m_flDofFarBlurry) == 0xc);
    
    static_assert(sizeof(DOFDesc_t) == 0x10);
};
