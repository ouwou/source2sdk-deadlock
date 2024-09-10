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
    // Size: 0x728
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_HookTargetVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
        float m_flApproachingWhooshAnticipationTime; // 0x5f8        
        float m_flCloseEnoughDistance; // 0x5fc        
        float m_flTossUpSpeed; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x608        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HookRetrieveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle;
        char m_HookRetrieveParticle[0xe0]; // 0x618        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strRetractSound; // 0x6f8        
        CSoundEventName m_strRetractSoundEnd; // 0x708        
        CSoundEventName m_strApproachingWhooshSound; // 0x718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HookTargetVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_HookTargetVData) == 0x728);
};
