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
    // Size: 0x770
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_HookTargetVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "GamePlay"
        // metadata: MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
        float m_flApproachingWhooshAnticipationTime; // 0x630        
        float m_flCloseEnoughDistance; // 0x634        
        float m_flTossUpSpeed; // 0x638        
        float m_flReturnDelay; // 0x63c        
        float m_flReturnDelayAlly; // 0x640        
        float m_flReturnSpeed; // 0x644        
        float m_flReturnSpeedNonHero; // 0x648        
        float m_flReturnPositionForwardOffset; // 0x64c        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x650        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HookRetrieveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle;
        char m_HookRetrieveParticle[0xe0]; // 0x660        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strRetractSound; // 0x740        
        CSoundEventName m_strRetractSoundEnd; // 0x750        
        CSoundEventName m_strApproachingWhooshSound; // 0x760        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HookTargetVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_HookTargetVData) == 0x770);
};
