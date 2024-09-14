#pragma once
#include "source2sdk/animlib/CNmTarget.hpp"
#include "source2sdk/animlib/CNmTargetValueNode__CDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x40
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmConstTargetNode__CDefinition : public animlib::CNmTargetValueNode__CDefinition
    {
    public:
        animlib::CNmTarget m_value; // 0x10        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmConstTargetNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmConstTargetNode__CDefinition) == 0x40);
};
