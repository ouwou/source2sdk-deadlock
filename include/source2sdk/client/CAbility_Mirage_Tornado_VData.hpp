#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
    // Size: 0x1710
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Mirage_Tornado_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_TornadoCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TornadoCastParticle;
        char m_TornadoCastParticle[0xe0]; // 0x1568        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_CasterModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_CasterModifier;
        char m_CasterModifier[0x10]; // 0x1648        
        // m_WhirlwindEvasionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_WhirlwindEvasionModifier;
        char m_WhirlwindEvasionModifier[0x10]; // 0x1658        
        // m_TornadoAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TornadoAura;
        char m_TornadoAura[0x10]; // 0x1668        
        // m_GrenadeTrailModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GrenadeTrailModifier;
        char m_GrenadeTrailModifier[0x10]; // 0x1678        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceTravelingInTornado; // 0x1688        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Mirage_Tornado_VData because it is not a standard-layout class
    static_assert(sizeof(CAbility_Mirage_Tornado_VData) == 0x1710);
};
