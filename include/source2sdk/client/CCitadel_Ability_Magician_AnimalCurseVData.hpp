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
    // Size: 0x1830
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_AnimalCurseVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_CurseModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_CurseModifier;
        char m_CurseModifier[0x10]; // 0x1560        
        // m_AirDampingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AirDampingModifier;
        char m_AirDampingModifier[0x10]; // 0x1570        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_TargetWarningSound; // 0x1580        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ProjectileImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ProjectileImpactParticle;
        char m_ProjectileImpactParticle[0xe0]; // 0x1590        
        // m_TargetWarningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetWarningParticle;
        char m_TargetWarningParticle[0xe0]; // 0x1670        
        // m_ProjectileExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ProjectileExplodeParticle;
        char m_ProjectileExplodeParticle[0xe0]; // 0x1750        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_AnimalCurseVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_AnimalCurseVData) == 0x1830);
};
