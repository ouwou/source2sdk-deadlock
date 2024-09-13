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
    // Size: 0x1938
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
        char m_ExplodeParticle[0xe0]; // 0x1528        
        // m_PreviewRingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewRingParticle;
        char m_PreviewRingParticle[0xe0]; // 0x1608        
        // m_TrapHighlightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrapHighlightParticle;
        char m_TrapHighlightParticle[0xe0]; // 0x16e8        
        // m_ArmedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ArmedParticle;
        char m_ArmedParticle[0xe0]; // 0x17c8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strTripSound; // 0x18a8        
        CSoundEventName m_strExplodeSound; // 0x18b8        
        CSoundEventName m_strExpiredSound; // 0x18c8        
        CSoundEventName m_strImmobilizeTargetSound; // 0x18d8        
        CSoundEventName m_strArmingSound; // 0x18e8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_TrapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TrapModifier;
        char m_TrapModifier[0x10]; // 0x18f8        
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x1908        
        // m_DotModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DotModifier;
        char m_DotModifier[0x10]; // 0x1918        
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x1928        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityImmobilizeTrapVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityImmobilizeTrapVData) == 0x1938);
};
