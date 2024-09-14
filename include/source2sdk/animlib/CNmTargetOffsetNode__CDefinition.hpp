#pragma once
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
    class CNmTargetOffsetNode__CDefinition : public animlib::CNmTargetValueNode__CDefinition
    {
    public:
        int16_t m_nInputValueNodeIdx; // 0x10        
        bool m_bIsBoneSpaceOffset; // 0x12        
        [[maybe_unused]] std::uint8_t pad_0x13[0xd]; // 0x13
        Quaternion m_rotationOffset; // 0x20        
        Vector m_translationOffset; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmTargetOffsetNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmTargetOffsetNode__CDefinition) == 0x40);
};
