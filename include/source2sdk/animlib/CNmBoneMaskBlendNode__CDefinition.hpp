#pragma once
#include "source2sdk/animlib/CNmBoneMaskValueNode__CDefinition.hpp"
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
    class CNmBoneMaskBlendNode__CDefinition : public animlib::CNmBoneMaskValueNode__CDefinition
    {
    public:
        int16_t m_nSourceMaskNodeIdx; // 0x10        
        int16_t m_nTargetMaskNodeIdx; // 0x12        
        int16_t m_nBlendWeightValueNodeIdx; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x16[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmBoneMaskBlendNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmBoneMaskBlendNode__CDefinition) == 0x18);
};
