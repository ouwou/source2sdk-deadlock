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
    // Size: 0xc
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AI_PathPostProcessSettings_t
    {
    public:
        float m_flMaxSpringTension; // 0x0        
        float m_flSpringConstant; // 0x4        
        float m_flSharpStartAngle; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AI_PathPostProcessSettings_t, m_flMaxSpringTension) == 0x0);
    static_assert(offsetof(AI_PathPostProcessSettings_t, m_flSpringConstant) == 0x4);
    static_assert(offsetof(AI_PathPostProcessSettings_t, m_flSharpStartAngle) == 0x8);
    
    static_assert(sizeof(AI_PathPostProcessSettings_t) == 0xc);
};
