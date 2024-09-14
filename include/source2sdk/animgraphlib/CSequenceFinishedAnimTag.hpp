#pragma once
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
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
    // Size: 0x60
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Sequence Finished Tag"
    #pragma pack(push, 1)
    class CSequenceFinishedAnimTag : public animgraphlib::CAnimTagBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x50[0x8]; // 0x50
        // metadata: MPropertyFriendlyName "Sequence"
        // metadata: MPropertyAttributeChoiceName "Sequence"
        CUtlString m_sequenceName; // 0x58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSequenceFinishedAnimTag because it is not a standard-layout class
    static_assert(sizeof(CSequenceFinishedAnimTag) == 0x60);
};
