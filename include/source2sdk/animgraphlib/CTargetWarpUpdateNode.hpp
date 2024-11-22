#pragma once
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
    // Size: 0x80
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CTargetWarpUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x70[0x4]; // 0x70
        animgraphlib::CAnimParamHandle m_hTargetPositionParameter; // 0x74        
        animgraphlib::CAnimParamHandle m_hTargetUpVectorParameter; // 0x76        
        animgraphlib::CAnimParamHandle m_hTargetFacePositionParameter; // 0x78        
        bool m_bTargetFacePositionIsWorldSpace; // 0x7a        
        bool m_bTargetPositionIsWorldSpace; // 0x7b        
        [[maybe_unused]] std::uint8_t pad_0x7c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTargetWarpUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CTargetWarpUpdateNode) == 0x80);
};
