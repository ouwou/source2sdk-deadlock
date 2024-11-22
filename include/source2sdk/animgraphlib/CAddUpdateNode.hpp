#pragma once
#include "source2sdk/animgraphlib/BinaryNodeChildOption.hpp"
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
    // Size: 0xa0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAddUpdateNode : public animgraphlib::CBinaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x90[0x4]; // 0x90
        animgraphlib::BinaryNodeChildOption m_footMotionTiming; // 0x94        
        bool m_bApplyToFootMotion; // 0x98        
        bool m_bApplyChannelsSeparately; // 0x99        
        bool m_bUseModelSpace; // 0x9a        
        bool m_bApplyScale; // 0x9b        
        [[maybe_unused]] std::uint8_t pad_0x9c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAddUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CAddUpdateNode) == 0xa0);
};
