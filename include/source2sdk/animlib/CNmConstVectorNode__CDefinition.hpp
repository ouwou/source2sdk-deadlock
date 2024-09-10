#pragma once
#include "source2sdk/animlib/CNmVectorValueNode__CDefinition.hpp"
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
    // Size: 0x20
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmConstVectorNode__CDefinition : public animlib::CNmVectorValueNode__CDefinition
    {
    public:
        Vector m_value; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmConstVectorNode::CDefinition because it is not a standard-layout class
    
    static_assert(sizeof(CNmConstVectorNode__CDefinition) == 0x20);
};