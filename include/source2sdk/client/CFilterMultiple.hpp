#pragma once
#include "source2sdk/client/CBaseFilter.hpp"
#include "source2sdk/client/filter_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x648
    // Has VTable
    #pragma pack(push, 1)
    class CFilterMultiple : public client::CBaseFilter
    {
    public:
        client::filter_t m_nFilterType; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4]; // 0x5c4
        CUtlSymbolLarge m_iFilterName[10]; // 0x5c8        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hFilter[10];
        char m_hFilter[0x28]; // 0x618        
        int32_t m_nFilterCount; // 0x640        
        [[maybe_unused]] std::uint8_t pad_0x644[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFilterMultiple because it is not a standard-layout class
    static_assert(sizeof(CFilterMultiple) == 0x648);
};
