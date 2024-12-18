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
    class CFilterClass : public client::CBaseFilter
    {
    public:
        CUtlSymbolLarge m_iFilterClass; // 0x5b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFilterClass because it is not a standard-layout class
    static_assert(sizeof(CFilterClass) == 0x5c0);
};