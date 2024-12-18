#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x8f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_InvisVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_InvisLoopParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisLoopParticle;
        char m_InvisLoopParticle[0xe0]; // 0x630        
        // m_InvisDetectRadiusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisDetectRadiusParticle;
        char m_InvisDetectRadiusParticle[0xe0]; // 0x710        
        // m_InvisRevealedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisRevealedParticle;
        char m_InvisRevealedParticle[0xe0]; // 0x7f0        
        float m_flDesatFactor; // 0x8d0        
        [[maybe_unused]] std::uint8_t pad_0x8d4[0x4]; // 0x8d4
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strInvisRevealedSound; // 0x8d8        
        // metadata: MPropertyStartGroup "Behavior"
        bool m_bFadeInsteadOfRemoveOnBulletFire; // 0x8e8        
        bool m_bFadeInsteadOfRemoveOnAbilityUse; // 0x8e9        
        bool m_bBreakOnItemUse; // 0x8ea        
        // metadata: MPropertyDescription "Fade from hidden to fully visible as invis is about to expire. Does not work with Aura applied invis, since that has no duration."
        bool m_bFadeToVisibleAtEndOfDuration; // 0x8eb        
        float m_flMinCloak; // 0x8ec        
        float m_flMaxCloak; // 0x8f0        
        [[maybe_unused]] std::uint8_t pad_0x8f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_InvisVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_InvisVData) == 0x8f8);
};
