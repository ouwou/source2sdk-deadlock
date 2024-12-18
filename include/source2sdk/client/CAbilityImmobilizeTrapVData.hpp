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
    // Size: 0x1958
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityImmobilizeTrapVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x1568        
        // m_PreviewRingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewRingParticle;
        char m_PreviewRingParticle[0xe0]; // 0x1648        
        // m_TrapHighlightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrapHighlightParticle;
        char m_TrapHighlightParticle[0xe0]; // 0x1728        
        // m_ArmedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ArmedParticle;
        char m_ArmedParticle[0xe0]; // 0x1808        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strTripSound; // 0x18e8        
        CSoundEventName m_strExplodeSound; // 0x18f8        
        CSoundEventName m_strExpiredSound; // 0x1908        
        CSoundEventName m_strImmobilizeTargetSound; // 0x1918        
        CSoundEventName m_strArmingSound; // 0x1928        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_GlitchModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GlitchModifier;
        char m_GlitchModifier[0x10]; // 0x1938        
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x1948        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityImmobilizeTrapVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityImmobilizeTrapVData) == 0x1958);
};
