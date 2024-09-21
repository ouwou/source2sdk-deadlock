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
    // Size: 0x9e8
    // Has VTable
    #pragma pack(push, 1)
    class CBaseProp : public server::CBaseAnimGraph
    {
    public:
        bool m_bModelOverrodeBlockLOS; // 0x9a8        
        [[maybe_unused]] std::uint8_t pad_0x9a9[0x3]; // 0x9a9
        int32_t m_iShapeType; // 0x9ac        
        bool m_bConformToCollisionBounds; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9b1[0x3]; // 0x9b1
        matrix3x4_t m_mPreferredCatchTransform; // 0x9b4        
        [[maybe_unused]] std::uint8_t pad_0x9e4[0x4];
        
        // Datamap fields:
        // void health; // 0x7fffffff
        // CUtlSymbolLarge propdata_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
    static_assert(sizeof(CBaseProp) == 0x9e8);
};
