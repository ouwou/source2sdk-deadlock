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
    // Size: 0xa50
    // Has VTable
    #pragma pack(push, 1)
    class CConstraintAnchor : public server::CBaseAnimGraph
    {
    public:
        float m_massScale; // 0xa48        
        [[maybe_unused]] std::uint8_t pad_0xa4c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CConstraintAnchor because it is not a standard-layout class
    static_assert(sizeof(CConstraintAnchor) == 0xa50);
};
