#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Standard-layout class: false
    // Size: 0xb68
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_GrandFinaleStage : public client::CBaseAnimGraph
    {
    public:
        Vector m_vStartPos; // 0xb40        
        Vector m_vEndPos; // 0xb4c        
        entity2::GameTime_t m_flStartEmitTime; // 0xb58        
        entity2::GameTime_t m_flEndEmitTime; // 0xb5c        
        int32_t m_nTouchCount; // 0xb60        
        [[maybe_unused]] std::uint8_t pad_0xb64[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_GrandFinaleStage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_GrandFinaleStage) == 0xb68);
};
