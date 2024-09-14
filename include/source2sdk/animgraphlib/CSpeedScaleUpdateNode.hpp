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
    // Size: 0x70
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSpeedScaleUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        animgraphlib::CAnimParamHandle m_paramIndex; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x6a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSpeedScaleUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CSpeedScaleUpdateNode) == 0x70);
};
