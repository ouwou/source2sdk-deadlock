#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x908
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Nano_PredatoryStatueVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
        char m_AOEParticle[0xe0]; // 0x5f8        
        // m_EnabledParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnabledParticle;
        char m_EnabledParticle[0xe0]; // 0x6d8        
        // m_DrainParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrainParticle;
        char m_DrainParticle[0xe0]; // 0x7b8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strEnabledSound; // 0x898        
        CSoundEventName m_strEnabledLoopSound; // 0x8a8        
        CSoundEventName m_strDisabledSound; // 0x8b8        
        CSoundEventName m_strLaserHitSound; // 0x8c8        
        CSoundEventName m_strLaserStartSound; // 0x8d8        
        CSoundEventName m_strLaserLoopSound; // 0x8e8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TargetModifier;
        char m_TargetModifier[0x10]; // 0x8f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Nano_PredatoryStatueVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Nano_PredatoryStatueVData) == 0x908);
};