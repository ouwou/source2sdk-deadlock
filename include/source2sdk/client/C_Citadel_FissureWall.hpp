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
    // Size: 0xb88
    // Has VTable
    #pragma pack(push, 1)
    class C_Citadel_FissureWall : public client::CBaseAnimGraph
    {
    public:
        Vector m_vStartPos; // 0xb60        
        Vector m_vEndPos; // 0xb6c        
        entity2::GameTime_t m_flStartEmitTime; // 0xb78        
        entity2::GameTime_t m_flEndEmitTime; // 0xb7c        
        bool m_bSolid; // 0xb80        
        [[maybe_unused]] std::uint8_t pad_0xb81[0x3]; // 0xb81
        int32_t m_nTouchCount; // 0xb84        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_FissureWall because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_FissureWall) == 0xb88);
};
