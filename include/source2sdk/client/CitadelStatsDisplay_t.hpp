#pragma once
#include "source2sdk/client/CitadelStatsSpiritDisplay_t.hpp"
#include "source2sdk/client/CitadelStatsVitalityDisplay_t.hpp"
#include "source2sdk/client/CitadelStatsWeaponDisplay_t.hpp"
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
    // Size: 0xa8
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelStatsDisplay_t
    {
    public:
        // metadata: MPropertyDescription "What information do we want to display for Weapon?"
        client::CitadelStatsWeaponDisplay_t m_eWeaponStatsDisplay; // 0x0        
        // metadata: MPropertyDescription "What information do we want to display for Vitality?"
        client::CitadelStatsVitalityDisplay_t m_eVitalityStatsDisplay; // 0x60        
        // metadata: MPropertyDescription "What information do we want to display for Spirit?"
        client::CitadelStatsSpiritDisplay_t m_eSpiritStatsDisplay; // 0x90        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelStatsDisplay_t, m_eWeaponStatsDisplay) == 0x0);
    static_assert(offsetof(CitadelStatsDisplay_t, m_eVitalityStatsDisplay) == 0x60);
    static_assert(offsetof(CitadelStatsDisplay_t, m_eSpiritStatsDisplay) == 0x90);
    
    static_assert(sizeof(CitadelStatsDisplay_t) == 0xa8);
};
