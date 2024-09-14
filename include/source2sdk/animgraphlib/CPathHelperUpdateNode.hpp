#pragma once
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x70
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPathHelperUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        float m_flStoppingRadius; // 0x68        
        float m_flStoppingSpeedScale; // 0x6c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathHelperUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CPathHelperUpdateNode) == 0x70);
};
