#pragma once
#include "source2sdk/client/EShieldType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x738
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ShieldTracker_BaseVData : public server::CCitadelModifierVData
    {
    public:
        float m_flShieldImpactEffectDuration; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4]; // 0x634
        // metadata: MPropertyGroupName "Visuals"
        // m_ShieldImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldImpactParticle;
        char m_ShieldImpactParticle[0xe0]; // 0x638        
        // metadata: MPropertyGroupName "Modifiers"
        // m_ShieldImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ShieldImpactModifier;
        char m_ShieldImpactModifier[0x10]; // 0x718        
        // metadata: MPropertyDescription "What type of shield is this."
        client::EShieldType_t eShieldType; // 0x728        
        [[maybe_unused]] std::uint8_t pad_0x729[0x3]; // 0x729
        // metadata: MPropertyDescription "How long before the shield can regenerate after taking damage, but not breaking."
        float flCooldownOnDamage; // 0x72c        
        // metadata: MPropertyDescription "How long before the shield can regenerate after breaking (going to 0 shield)"
        float flCooldownOnBreak; // 0x730        
        // metadata: MPropertyDescription "How long does it take the shield to regenerate from 0 to full health. For partial regen, it's the same rate."
        float flRegenDuration; // 0x734        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ShieldTracker_BaseVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ShieldTracker_BaseVData) == 0x738);
};
