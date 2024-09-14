#pragma once
#include "source2sdk/server/CBaseFilter.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x538
    // Has VTable
    #pragma pack(push, 1)
    class CFilterName : public server::CBaseFilter
    {
    public:
        CUtlSymbolLarge m_iFilterName; // 0x530        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFilterName because it is not a standard-layout class
    static_assert(sizeof(CFilterName) == 0x538);
};
