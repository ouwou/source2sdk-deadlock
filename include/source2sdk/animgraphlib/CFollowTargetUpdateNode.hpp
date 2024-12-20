#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/FollowTargetOpFixedSettings_t.hpp"
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
    // Size: 0x90
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFollowTargetUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        animgraphlib::FollowTargetOpFixedSettings_t m_opFixedData; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x80[0x8]; // 0x80
        animgraphlib::CAnimParamHandle m_hParameterPosition; // 0x88        
        animgraphlib::CAnimParamHandle m_hParameterOrientation; // 0x8a        
        [[maybe_unused]] std::uint8_t pad_0x8c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFollowTargetUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CFollowTargetUpdateNode) == 0x90);
};
