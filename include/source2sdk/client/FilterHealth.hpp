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
    // Size: 0x5c8
    // Has VTable
    #pragma pack(push, 1)
    class FilterHealth : public client::CBaseFilter
    {
    public:
        bool m_bAdrenalineActive; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5b9[0x3]; // 0x5b9
        int32_t m_iHealthMin; // 0x5bc        
        int32_t m_iHealthMax; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in FilterHealth because it is not a standard-layout class
    static_assert(sizeof(FilterHealth) == 0x5c8);
};
