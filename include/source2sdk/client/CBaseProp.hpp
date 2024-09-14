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
    // Size: 0xb80
    // Has VTable
    #pragma pack(push, 1)
    class CBaseProp : public client::CBaseAnimGraph
    {
    public:
        bool m_bModelOverrodeBlockLOS; // 0xb40        
        [[maybe_unused]] std::uint8_t pad_0xb41[0x3]; // 0xb41
        int32_t m_iShapeType; // 0xb44        
        bool m_bConformToCollisionBounds; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb49[0x3]; // 0xb49
        matrix3x4_t m_mPreferredCatchTransform; // 0xb4c        
        [[maybe_unused]] std::uint8_t pad_0xb7c[0x4];
        
        // Datamap fields:
        // void health; // 0x7fffffff
        // CUtlSymbolLarge propdata_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
    static_assert(sizeof(CBaseProp) == 0xb80);
};
