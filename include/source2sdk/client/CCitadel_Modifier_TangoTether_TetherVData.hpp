#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x6c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_TangoTether_TetherVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_TetherSound; // 0x630        
        CSoundEventName m_HealSound; // 0x640        
        CSoundEventName m_HitIndicator; // 0x650        
        CSoundEventName m_GrappleHitSound; // 0x660        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x670        
        // m_DisconnectingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DisconnectingModifier;
        char m_DisconnectingModifier[0x10]; // 0x680        
        // m_DisconnectedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DisconnectedModifier;
        char m_DisconnectedModifier[0x10]; // 0x690        
        // m_LockedTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_LockedTargetModifier;
        char m_LockedTargetModifier[0x10]; // 0x6a0        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flMinConnectTime; // 0x6b0        
        float m_flDisconnectDistanceBuffer; // 0x6b4        
        float m_flCandidateCloserDistance; // 0x6b8        
        float m_flTargetAwayDistance; // 0x6bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TangoTether_TetherVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TangoTether_TetherVData) == 0x6c0);
};
