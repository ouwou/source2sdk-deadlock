#pragma once
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
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
    // Size: 0x98
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CStopAtGoalUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x70[0x4]; // 0x70
        float m_flOuterRadius; // 0x74        
        float m_flInnerRadius; // 0x78        
        float m_flMaxScale; // 0x7c        
        float m_flMinScale; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x84[0x4]; // 0x84
        animgraphlib::CAnimInputDamping m_damping; // 0x88        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CStopAtGoalUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CStopAtGoalUpdateNode) == 0x98);
};
