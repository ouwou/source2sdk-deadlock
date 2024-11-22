#pragma once
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
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
    // Size: 0x90
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CTurnHelperUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x70[0x4]; // 0x70
        animgraphlib::AnimValueSource m_facingTarget; // 0x74        
        float m_turnStartTimeOffset; // 0x78        
        float m_turnDuration; // 0x7c        
        bool m_bMatchChildDuration; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x81[0x3]; // 0x81
        float m_manualTurnOffset; // 0x84        
        bool m_bUseManualTurnOffset; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0x89[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTurnHelperUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CTurnHelperUpdateNode) == 0x90);
};
