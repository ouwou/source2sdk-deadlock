#pragma once
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/OrientationWarpRootMotionSource_t.hpp"
#include "source2sdk/animgraphlib/OrientationWarpTargetOffsetMode_t.hpp"
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
    // Size: 0xb0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class COrientationWarpUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x70[0x4]; // 0x70
        animgraphlib::AnimValueSource m_eTarget; // 0x74        
        animgraphlib::CAnimParamHandle m_hTargetParam; // 0x78        
        animgraphlib::CAnimParamHandle m_hTargetPositionParam; // 0x7a        
        animgraphlib::OrientationWarpTargetOffsetMode_t m_eTargetOffsetMode; // 0x7c        
        float m_flTargetOffset; // 0x80        
        animgraphlib::CAnimParamHandle m_hTargetOffsetParam; // 0x84        
        [[maybe_unused]] std::uint8_t pad_0x86[0x2]; // 0x86
        animgraphlib::CAnimInputDamping m_damping; // 0x88        
        animgraphlib::OrientationWarpRootMotionSource_t m_eRootMotionSource; // 0x98        
        float m_flMaxRootMotionScale; // 0x9c        
        bool m_bEnablePreferredRotationDirection; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa1[0x3]; // 0xa1
        animgraphlib::AnimValueSource m_ePreferredRotationDirection; // 0xa4        
        float m_flPreferredRotationThreshold; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in COrientationWarpUpdateNode because it is not a standard-layout class
    static_assert(sizeof(COrientationWarpUpdateNode) == 0xb0);
};
