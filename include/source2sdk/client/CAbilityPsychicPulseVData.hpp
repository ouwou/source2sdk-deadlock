#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
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
    // Size: 0x15f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityPsychicPulseVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x14f0        
        // metadata: MPropertyStartGroup "Visuals"
        // m_PulseParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PulseParticle;
        char m_PulseParticle[0xe0]; // 0x1500        
        // metadata: MPropertyStartGroup "+Psychic Pulse Properties"
        float m_flCastEffectLifetime; // 0x15e0        
        float m_flConeAngle; // 0x15e4        
        float m_flConeHalfWidth; // 0x15e8        
        [[maybe_unused]] std::uint8_t pad_0x15ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityPsychicPulseVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityPsychicPulseVData) == 0x15f0);
};
