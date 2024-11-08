#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
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
    // Size: 0xb48
    // Has VTable
    #pragma pack(push, 1)
    class CBaseProp : public client::CBaseAnimGraph
    {
    public:
        bool m_bModelOverrodeBlockLOS; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb09[0x3]; // 0xb09
        int32_t m_iShapeType; // 0xb0c        
        bool m_bConformToCollisionBounds; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb11[0x3]; // 0xb11
        matrix3x4_t m_mPreferredCatchTransform; // 0xb14        
        [[maybe_unused]] std::uint8_t pad_0xb44[0x4];
        
        // Datamap fields:
        // void health; // 0x7fffffff
        // CUtlSymbolLarge propdata_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
    static_assert(sizeof(CBaseProp) == 0xb48);
};
