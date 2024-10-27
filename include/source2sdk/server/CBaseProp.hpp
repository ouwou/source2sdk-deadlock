#pragma once
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
    // Size: 0xa68
    // Has VTable
    #pragma pack(push, 1)
    class CBaseProp : public server::CBaseAnimGraph
    {
    public:
        bool m_bModelOverrodeBlockLOS; // 0xa28        
        [[maybe_unused]] std::uint8_t pad_0xa29[0x3]; // 0xa29
        int32_t m_iShapeType; // 0xa2c        
        bool m_bConformToCollisionBounds; // 0xa30        
        [[maybe_unused]] std::uint8_t pad_0xa31[0x3]; // 0xa31
        matrix3x4_t m_mPreferredCatchTransform; // 0xa34        
        [[maybe_unused]] std::uint8_t pad_0xa64[0x4];
        
        // Datamap fields:
        // void health; // 0x7fffffff
        // CUtlSymbolLarge propdata_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
    static_assert(sizeof(CBaseProp) == 0xa68);
};
