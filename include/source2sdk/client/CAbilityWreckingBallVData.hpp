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
    class CAbilityWreckingBallVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_SummonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonParticle;
        char m_SummonParticle[0xe0]; // 0x1568        
        // m_SummonReadyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonReadyParticle;
        char m_SummonReadyParticle[0xe0]; // 0x1648        
        CUtlString m_SummonParticleAttachment; // 0x1728        
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x1730        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_AutoThrowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AutoThrowModifier;
        char m_AutoThrowModifier[0x10]; // 0x1810        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_HoldingBallLoop; // 0x1820        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityWreckingBallVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityWreckingBallVData) == 0x1830);
};
