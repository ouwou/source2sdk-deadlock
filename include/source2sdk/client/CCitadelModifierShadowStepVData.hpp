#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_InvisVData.hpp"
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
    // Size: 0xab8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifierShadowStepVData : public client::CCitadel_Modifier_InvisVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SilenceModifier;
        char m_SilenceModifier[0x10]; // 0x8d0        
        // m_ArmorDebuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ArmorDebuff;
        char m_ArmorDebuff[0x10]; // 0x8e0        
        // metadata: MPropertyStartGroup "Visuals"
        // m_InvisChangedEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisChangedEffect;
        char m_InvisChangedEffect[0xe0]; // 0x8f0        
        // m_ShadowRevealedEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShadowRevealedEffect;
        char m_ShadowRevealedEffect[0xe0]; // 0x9d0        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flMinInvisDuration; // 0xab0        
        [[maybe_unused]] std::uint8_t pad_0xab4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierShadowStepVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifierShadowStepVData) == 0xab8);
};
