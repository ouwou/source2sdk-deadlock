#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa60
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_GrandFinaleStage : public server::CBaseAnimGraph
    {
    public:
        Vector m_vStartPos; // 0xa38        
        Vector m_vEndPos; // 0xa44        
        entity2::GameTime_t m_flStartEmitTime; // 0xa50        
        entity2::GameTime_t m_flEndEmitTime; // 0xa54        
        int32_t m_nTouchCount; // 0xa58        
        [[maybe_unused]] std::uint8_t pad_0xa5c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_GrandFinaleStage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_GrandFinaleStage) == 0xa60);
};
