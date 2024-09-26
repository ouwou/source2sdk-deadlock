#pragma once
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
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
    // Size: 0x88
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class COrientationWarpUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x4]; // 0x68
        animgraphlib::CAnimParamHandle m_hFacingPositionParameter; // 0x6c        
        [[maybe_unused]] std::uint8_t pad_0x6e[0x2]; // 0x6e
        animgraphlib::CAnimInputDamping m_turnDamping; // 0x70        
        bool m_bFacingPositionIsWorldSpace; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x81[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in COrientationWarpUpdateNode because it is not a standard-layout class
    static_assert(sizeof(COrientationWarpUpdateNode) == 0x88);
};
