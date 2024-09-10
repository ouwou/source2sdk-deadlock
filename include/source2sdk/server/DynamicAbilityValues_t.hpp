#pragma once
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "AbilityID_t m_SourceAbilityID"
    // static metadata: MNetworkVarNames "AbilityID_t m_TargetAbilityID"
    // static metadata: MNetworkVarNames "EModifierValue m_eValType"
    // static metadata: MNetworkVarNames "float m_flValue"
    #pragma pack(push, 1)
    struct DynamicAbilityValues_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        CUtlStringToken m_SourceAbilityID; // 0x30        
        // metadata: MNetworkEnable
        CUtlStringToken m_TargetAbilityID; // 0x34        
        // metadata: MNetworkEnable
        client::EModifierValue m_eValType; // 0x38        
        // metadata: MNetworkEnable
        float m_flValue; // 0x3c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DynamicAbilityValues_t, m_SourceAbilityID) == 0x30);
    static_assert(offsetof(DynamicAbilityValues_t, m_TargetAbilityID) == 0x34);
    static_assert(offsetof(DynamicAbilityValues_t, m_eValType) == 0x38);
    static_assert(offsetof(DynamicAbilityValues_t, m_flValue) == 0x3c);
    
    static_assert(sizeof(DynamicAbilityValues_t) == 0x40);
};
