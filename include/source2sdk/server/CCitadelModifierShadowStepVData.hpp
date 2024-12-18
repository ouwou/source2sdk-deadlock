#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_InvisVData.hpp"
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
    // Size: 0xae0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifierShadowStepVData : public server::CCitadel_Modifier_InvisVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SilenceModifier;
        char m_SilenceModifier[0x10]; // 0x8f8        
        // m_ArmorDebuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ArmorDebuff;
        char m_ArmorDebuff[0x10]; // 0x908        
        // metadata: MPropertyStartGroup "Visuals"
        // m_InvisChangedEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisChangedEffect;
        char m_InvisChangedEffect[0xe0]; // 0x918        
        // m_ShadowRevealedEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShadowRevealedEffect;
        char m_ShadowRevealedEffect[0xe0]; // 0x9f8        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flMinInvisDuration; // 0xad8        
        [[maybe_unused]] std::uint8_t pad_0xadc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierShadowStepVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifierShadowStepVData) == 0xae0);
};
