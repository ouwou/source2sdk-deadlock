#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x1820
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_ShivDaggerVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DamageDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DamageDebuffModifier;
        char m_DamageDebuffModifier[0x10]; // 0x1540        
        // m_SlowDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowDebuffModifier;
        char m_SlowDebuffModifier[0x10]; // 0x1550        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DaggerStuckParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerStuckParticle;
        char m_DaggerStuckParticle[0xe0]; // 0x1560        
        // m_DaggerImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerImpactParticle;
        char m_DaggerImpactParticle[0xe0]; // 0x1640        
        // m_DaggerExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerExplodeParticle;
        char m_DaggerExplodeParticle[0xe0]; // 0x1720        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDaggerHitSound; // 0x1800        
        CSoundEventName m_strDaggerExplodeSound; // 0x1810        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ShivDaggerVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ShivDaggerVData) == 0x1820);
};
