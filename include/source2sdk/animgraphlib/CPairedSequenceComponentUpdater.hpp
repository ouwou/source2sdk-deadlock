#pragma once
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
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
    // Size: 0x38
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPairedSequenceComponentUpdater : public animgraphlib::CAnimComponentUpdater
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x30[0x8];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPairedSequenceComponentUpdater) == 0x38);
};
