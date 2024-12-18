#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_StunnedVData.hpp"
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
    // Size: 0xab0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierLashGrappleEnemyDebuffVData : public server::CCitadel_Modifier_StunnedVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_GrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GrappleParticle;
        char m_GrappleParticle[0xe0]; // 0x710        
        // m_LaunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaunchParticle;
        char m_LaunchParticle[0xe0]; // 0x7f0        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x8d0        
        // m_RopeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RopeParticle;
        char m_RopeParticle[0xe0]; // 0x9b0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_ImpactSound; // 0xa90        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0xaa0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierLashGrappleEnemyDebuffVData because it is not a standard-layout class
    static_assert(sizeof(CModifierLashGrappleEnemyDebuffVData) == 0xab0);
};
