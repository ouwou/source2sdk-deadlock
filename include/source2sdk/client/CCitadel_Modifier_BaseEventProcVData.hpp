#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/ECitadelDamageType.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
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
    // Size: 0x660
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_BaseEventProcVData : public client::CCitadelModifierVData
    {
    public:
        bool m_bProcChanceAffectedByEffectiveness; // 0x630        
        bool m_bShouldApplyAbilityCooldown; // 0x631        
        // metadata: MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
        bool m_bCanProcMultipleTimesOnOneTarget; // 0x632        
        bool m_bCanProcByOtherObjects; // 0x633        
        client::CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x634        
        client::CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x638        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4]; // 0x63c
        // m_vecProcDamageTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ECitadelDamageType> m_vecProcDamageTypes;
        char m_vecProcDamageTypes[0x18]; // 0x640        
        client::TakeDamageFlags_t m_nRequiredDamageFlags; // 0x658        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BaseEventProcVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BaseEventProcVData) == 0x660);
};
