#pragma once
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
    // Standard-layout class: true
    // Size: 0x40
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmIKJoint
    {
    public:
        int32_t m_nParentIndex; // 0x0        
        int32_t m_nBodyIndex; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x08[0x8]; // 0x8
        CTransform m_xLocalFrame; // 0x10        
        float m_flSwingLimit; // 0x30        
        float m_flMinTwistLimit; // 0x34        
        float m_flMaxTwistLimit; // 0x38        
        float m_flWeight; // 0x3c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmIKJoint, m_nParentIndex) == 0x0);
    static_assert(offsetof(CNmIKJoint, m_nBodyIndex) == 0x4);
    static_assert(offsetof(CNmIKJoint, m_xLocalFrame) == 0x10);
    static_assert(offsetof(CNmIKJoint, m_flSwingLimit) == 0x30);
    static_assert(offsetof(CNmIKJoint, m_flMinTwistLimit) == 0x34);
    static_assert(offsetof(CNmIKJoint, m_flMaxTwistLimit) == 0x38);
    static_assert(offsetof(CNmIKJoint, m_flWeight) == 0x3c);
    
    static_assert(sizeof(CNmIKJoint) == 0x40);
};
