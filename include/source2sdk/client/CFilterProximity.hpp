#pragma once
#include "source2sdk/client/CBaseFilter.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c0
    // Has VTable
    #pragma pack(push, 1)
    class CFilterProximity : public client::CBaseFilter
    {
    public:
        float m_flRadius; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFilterProximity because it is not a standard-layout class
    static_assert(sizeof(CFilterProximity) == 0x5c0);
};
