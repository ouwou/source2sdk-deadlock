#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x7f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Backdoor_ProtectionVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Backdoor Protection"
        // metadata: MPropertyDescription "Range to check for nearby troopers (in units). Once troopers are within range, backdoor protection is removed. 0 range means disabled"
        float m_flBackdoorProtectionNearbyTrooperRange; // 0x608        
        // metadata: MPropertyDescription "How often do we check for troopers?"
        float m_flBackdoorProtectionNearbyTrooperThinkInterval; // 0x60c        
        // metadata: MPropertyDescription "How long does a nearby trooper lower backdoor protection?"
        float m_flBackdoorProtectionNearbyTrooperRemovalDuration; // 0x610        
        // metadata: MPropertyDescription "How much should damage be reduced from players when backdoor protection is up? 0 is no reduction, 100 is complete reduction"
        // metadata: MPropertyAttributeRange "0 100"
        float m_flBackdoorProtectionDamageMitigationFromPlayers; // 0x614        
        // metadata: MPropertyDescription "How health per second does backdoor protection regen?"
        float m_flHealthPerSecondRegen; // 0x618        
        // metadata: MPropertyDescription "How health per second when out of combat?"
        float m_flOutOfCombatHealthRegen; // 0x61c        
        // metadata: MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
        float m_flOutOfCombatRegenDelay; // 0x620        
        // metadata: MPropertyDescription "How long the shield effect lingers after having taken damage"
        float m_flEffectsLingerTime; // 0x624        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ShieldImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldImpactParticle;
        char m_ShieldImpactParticle[0xe0]; // 0x628        
        // m_ShieldActiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldActiveParticle;
        char m_ShieldActiveParticle[0xe0]; // 0x708        
        CUtlString m_strActiveEffectConfigName; // 0x7e8        
        float flShieldImpactDirectionOffset; // 0x7f0        
        [[maybe_unused]] std::uint8_t pad_0x7f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Backdoor_ProtectionVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Backdoor_ProtectionVData) == 0x7f8);
};
