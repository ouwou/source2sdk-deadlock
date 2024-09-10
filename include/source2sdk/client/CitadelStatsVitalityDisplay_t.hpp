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
    // Size: 0x30
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelStatsVitalityDisplay_t
    {
    public:
        // metadata: MPropertyDescription "What stats do we want to show in the top section?"
        // m_vecDisplayStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecDisplayStats;
        char m_vecDisplayStats[0x18]; // 0x0        
        // metadata: MPropertyDescription "What stats do we want to show in the other stats section?"
        // m_vecOtherDisplayStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecOtherDisplayStats;
        char m_vecOtherDisplayStats[0x18]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelStatsVitalityDisplay_t, m_vecDisplayStats) == 0x0);
    static_assert(offsetof(CitadelStatsVitalityDisplay_t, m_vecOtherDisplayStats) == 0x18);
    
    static_assert(sizeof(CitadelStatsVitalityDisplay_t) == 0x30);
};
