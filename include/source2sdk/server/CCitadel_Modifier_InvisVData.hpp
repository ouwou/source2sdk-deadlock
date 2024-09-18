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
    // Size: 0x8c0
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
        char m_InvisLoopParticle[0xe0]; // 0x608        
        // m_InvisDetectRadiusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisDetectRadiusParticle;
        char m_InvisDetectRadiusParticle[0xe0]; // 0x6e8        
        // m_InvisRevealedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisRevealedParticle;
        char m_InvisRevealedParticle[0xe0]; // 0x7c8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strInvisRevealedSound; // 0x8a8        
        // metadata: MPropertyStartGroup "Behavior"
        bool m_bFadeInsteadOfRemoveOnBulletFire; // 0x8b8        
        bool m_bFadeInsteadOfRemoveOnAbilityUse; // 0x8b9        
        // metadata: MPropertyDescription "Fade from hidden to fully visible as invis is about to expire. Does not work with Aura applied invis, since that has no duration."
        bool m_bFadeToVisibleAtEndOfDuration; // 0x8ba        
        [[maybe_unused]] std::uint8_t pad_0x8bb[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_InvisVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_InvisVData) == 0x8c0);
};
