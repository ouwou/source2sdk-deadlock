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
    class CFilterName : public client::CBaseFilter
    {
    public:
        CUtlSymbolLarge m_iFilterName; // 0x5c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFilterName because it is not a standard-layout class
    static_assert(sizeof(CFilterName) == 0x5c8);
};
