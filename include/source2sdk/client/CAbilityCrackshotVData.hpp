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
    // Size: 0x1768
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityCrackshotVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle;
        char m_ExplosionParticle[0xe0]; // 0x1568        
        // m_ExplosionVictimParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionVictimParticle;
        char m_ExplosionVictimParticle[0xe0]; // 0x1648        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x1728        
        // m_CrackshotImmuneModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_CrackshotImmuneModifier;
        char m_CrackshotImmuneModifier[0x10]; // 0x1738        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_HeadShotVictimSound; // 0x1748        
        CSoundEventName m_HeadShotConfirmationSound; // 0x1758        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityCrackshotVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityCrackshotVData) == 0x1768);
};
