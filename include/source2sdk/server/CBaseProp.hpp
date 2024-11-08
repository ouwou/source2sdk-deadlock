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
    // Size: 0xa88
    // Has VTable
    #pragma pack(push, 1)
    class CBaseProp : public server::CBaseAnimGraph
    {
    public:
        bool m_bModelOverrodeBlockLOS; // 0xa48        
        [[maybe_unused]] std::uint8_t pad_0xa49[0x3]; // 0xa49
        int32_t m_iShapeType; // 0xa4c        
        bool m_bConformToCollisionBounds; // 0xa50        
        [[maybe_unused]] std::uint8_t pad_0xa51[0x3]; // 0xa51
        matrix3x4_t m_mPreferredCatchTransform; // 0xa54        
        [[maybe_unused]] std::uint8_t pad_0xa84[0x4];
        
        // Datamap fields:
        // void health; // 0x7fffffff
        // CUtlSymbolLarge propdata_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
    static_assert(sizeof(CBaseProp) == 0xa88);
};
