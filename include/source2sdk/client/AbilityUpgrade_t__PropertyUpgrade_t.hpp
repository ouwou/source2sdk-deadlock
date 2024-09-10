#pragma once
#include "source2sdk/client/EAbilityUpgradeType.hpp"
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
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct AbilityUpgrade_t__PropertyUpgrade_t
    {
    public:
        CUtlString m_strPropertyName; // 0x0        
        CUtlString m_strBonus; // 0x8        
        client::EAbilityUpgradeType m_eUpgradeType; // 0x10        
        // metadata: MPropertyDescription "If set, only applies the scaling of this upgrade to the specified stat"
        // metadata: MPropertySuppressExpr "( m_eUpgradeType != EAddToScale && m_eUpgradeType != EMultiplyScale )"
        client::EStatsType m_eScaleStatFilter; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AbilityUpgrade_t__PropertyUpgrade_t, m_strPropertyName) == 0x0);
    static_assert(offsetof(AbilityUpgrade_t__PropertyUpgrade_t, m_strBonus) == 0x8);
    static_assert(offsetof(AbilityUpgrade_t__PropertyUpgrade_t, m_eUpgradeType) == 0x10);
    static_assert(offsetof(AbilityUpgrade_t__PropertyUpgrade_t, m_eScaleStatFilter) == 0x14);
    
    static_assert(sizeof(AbilityUpgrade_t__PropertyUpgrade_t) == 0x18);
};
