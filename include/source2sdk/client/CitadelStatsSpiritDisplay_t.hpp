#pragma once
#include "source2sdk/client/EStatsType.hpp"
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
    // Standard-layout class: true
    // Size: 0x18
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelStatsSpiritDisplay_t
    {
    public:
        // metadata: MPropertyDescription "What stats do we want to display for Spirit?"
        // m_vecDisplayStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecDisplayStats;
        char m_vecDisplayStats[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelStatsSpiritDisplay_t, m_vecDisplayStats) == 0x0);
    
    static_assert(sizeof(CitadelStatsSpiritDisplay_t) == 0x18);
};
