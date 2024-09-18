#pragma once
#include "source2sdk/client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/ECitadelDamageType.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x638
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_BaseEventProcVData : public server::CCitadelModifierVData
    {
    public:
        bool m_bProcChanceAffectedByEffectiveness; // 0x608        
        bool m_bShouldApplyAbilityCooldown; // 0x609        
        // metadata: MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
        bool m_bCanProcMultipleTimesOnOneTarget; // 0x60a        
        bool m_bCanProcByOtherObjects; // 0x60b        
        client::CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x60c        
        client::CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4]; // 0x614
        // m_vecProcDamageTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ECitadelDamageType> m_vecProcDamageTypes;
        char m_vecProcDamageTypes[0x18]; // 0x618        
        client::TakeDamageFlags_t m_nRequiredDamageFlags; // 0x630        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BaseEventProcVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BaseEventProcVData) == 0x638);
};
