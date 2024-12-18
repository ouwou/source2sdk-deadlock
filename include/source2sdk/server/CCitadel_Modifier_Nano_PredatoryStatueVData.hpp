#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x970
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Nano_PredatoryStatueVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
        char m_AOEParticle[0xe0]; // 0x630        
        // m_EnabledParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnabledParticle;
        char m_EnabledParticle[0xe0]; // 0x710        
        // m_DrainParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrainParticle;
        char m_DrainParticle[0xe0]; // 0x7f0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strEnabledSound; // 0x8d0        
        CSoundEventName m_strEnabledLoopSound; // 0x8e0        
        CSoundEventName m_strDisabledSound; // 0x8f0        
        CSoundEventName m_strLaserHitSound; // 0x900        
        CSoundEventName m_strLaserStartSound; // 0x910        
        CSoundEventName m_strLaserLoopSound; // 0x920        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_TargetModifier;
        char m_TargetModifier[0x10]; // 0x930        
        // m_RevealModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_RevealModifier;
        char m_RevealModifier[0x10]; // 0x940        
        // m_StatueInvis has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_StatueInvis;
        char m_StatueInvis[0x10]; // 0x950        
        // metadata: MPropertyStartGroup "GamePlay"
        float m_flNewTargetAttackTime; // 0x960        
        float m_flMinRevealTime; // 0x964        
        float m_flMinDebuffTime; // 0x968        
        [[maybe_unused]] std::uint8_t pad_0x96c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Nano_PredatoryStatueVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Nano_PredatoryStatueVData) == 0x970);
};
