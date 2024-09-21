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
    // Size: 0xb70
    // Has VTable
    #pragma pack(push, 1)
    class C_Citadel_FissureWall : public client::CBaseAnimGraph
    {
    public:
        Vector m_vStartPos; // 0xb48        
        Vector m_vEndPos; // 0xb54        
        entity2::GameTime_t m_flStartEmitTime; // 0xb60        
        entity2::GameTime_t m_flEndEmitTime; // 0xb64        
        bool m_bSolid; // 0xb68        
        [[maybe_unused]] std::uint8_t pad_0xb69[0x3]; // 0xb69
        int32_t m_nTouchCount; // 0xb6c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_FissureWall because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_FissureWall) == 0xb70);
};
