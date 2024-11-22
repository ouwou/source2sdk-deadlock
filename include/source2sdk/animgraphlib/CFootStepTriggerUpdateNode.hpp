#pragma once
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/FootStepTrigger.hpp"
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
    class CFootStepTriggerUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        // m_triggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::FootStepTrigger> m_triggers;
        char m_triggers[0x18]; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x88[0x4]; // 0x88
        float m_flTolerance; // 0x8c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootStepTriggerUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CFootStepTriggerUpdateNode) == 0x90);
};
