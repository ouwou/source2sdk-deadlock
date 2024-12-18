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
    // Size: 0xb38
    // Has VTable
    #pragma pack(push, 1)
    class CBaseProp : public client::CBaseAnimGraph
    {
    public:
        bool m_bModelOverrodeBlockLOS; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xaf9[0x3]; // 0xaf9
        int32_t m_iShapeType; // 0xafc        
        bool m_bConformToCollisionBounds; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb01[0x3]; // 0xb01
        matrix3x4_t m_mPreferredCatchTransform; // 0xb04        
        [[maybe_unused]] std::uint8_t pad_0xb34[0x4];
        
        // Datamap fields:
        // void health; // 0x7fffffff
        // CUtlSymbolLarge propdata_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
    static_assert(sizeof(CBaseProp) == 0xb38);
};
