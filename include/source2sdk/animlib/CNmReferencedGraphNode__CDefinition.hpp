#pragma once
#include "source2sdk/animlib/CNmPoseNode__CDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmReferencedGraphNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        int16_t m_nReferencedGraphIdx; // 0x10        
        int16_t m_nFallbackNodeIdx; // 0x12        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmReferencedGraphNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmReferencedGraphNode__CDefinition) == 0x18);
};
