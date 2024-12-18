#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/CCitadel_Modifier_Base_Buildup.hpp"
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
    // Size: 0x930
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_TargetPracticeEnemyVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x630        
        // m_BuildupCompleteModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuildupCompleteModifier;
        char m_BuildupCompleteModifier[0x10]; // 0x640        
        // m_BuildupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadel_Modifier_Base_Buildup> m_BuildupModifier;
        char m_BuildupModifier[0x10]; // 0x650        
        // metadata: MPropertyStartGroup "Visuals"
        // m_TargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetParticle;
        char m_TargetParticle[0xe0]; // 0x660        
        // m_HitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle;
        char m_HitParticle[0xe0]; // 0x740        
        // m_HeadParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HeadParticle;
        char m_HeadParticle[0xe0]; // 0x820        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strTargetHitSound; // 0x900        
        CSoundEventName m_strTargetHeadShotHitSound; // 0x910        
        CSoundEventName m_strTargetCompleteSound; // 0x920        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TargetPracticeEnemyVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TargetPracticeEnemyVData) == 0x930);
};
