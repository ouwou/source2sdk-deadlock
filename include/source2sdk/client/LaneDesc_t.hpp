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
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct LaneDesc_t
    {
    public:
        CUtlString m_strLaneName; // 0x0        
        CUtlString m_strCSSClass; // 0x8        
        Color m_Color; // 0x10        
        Color m_MinimapColorOverride; // 0x14        
        Color m_MinimapZiplineColorOverride; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(LaneDesc_t, m_strLaneName) == 0x0);
    static_assert(offsetof(LaneDesc_t, m_strCSSClass) == 0x8);
    static_assert(offsetof(LaneDesc_t, m_Color) == 0x10);
    static_assert(offsetof(LaneDesc_t, m_MinimapColorOverride) == 0x14);
    static_assert(offsetof(LaneDesc_t, m_MinimapZiplineColorOverride) == 0x18);
    
    static_assert(sizeof(LaneDesc_t) == 0x20);
};
