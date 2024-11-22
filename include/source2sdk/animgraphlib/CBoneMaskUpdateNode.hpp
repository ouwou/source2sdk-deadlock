#pragma once
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/BinaryNodeChildOption.hpp"
#include "source2sdk/animgraphlib/BoneMaskBlendSpace.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CBinaryUpdateNode.hpp"
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
    class CBoneMaskUpdateNode : public animgraphlib::CBinaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x90[0x4]; // 0x90
        int32_t m_nWeightListIndex; // 0x94        
        float m_flRootMotionBlend; // 0x98        
        animgraphlib::BoneMaskBlendSpace m_blendSpace; // 0x9c        
        animgraphlib::BinaryNodeChildOption m_footMotionTiming; // 0xa0        
        bool m_bUseBlendScale; // 0xa4        
        [[maybe_unused]] std::uint8_t pad_0xa5[0x3]; // 0xa5
        animgraphlib::AnimValueSource m_blendValueSource; // 0xa8        
        animgraphlib::CAnimParamHandle m_hBlendParameter; // 0xac        
        [[maybe_unused]] std::uint8_t pad_0xae[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBoneMaskUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CBoneMaskUpdateNode) == 0xb0);
};
