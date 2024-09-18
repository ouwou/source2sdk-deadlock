#pragma once
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
    // Size: 0x698
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_TangoTether_TetherVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_TetherSound; // 0x608        
        CSoundEventName m_HealSound; // 0x618        
        CSoundEventName m_HitIndicator; // 0x628        
        CSoundEventName m_GrappleHitSound; // 0x638        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x648        
        // m_DisconnectingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DisconnectingModifier;
        char m_DisconnectingModifier[0x10]; // 0x658        
        // m_DisconnectedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DisconnectedModifier;
        char m_DisconnectedModifier[0x10]; // 0x668        
        // m_LockedTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_LockedTargetModifier;
        char m_LockedTargetModifier[0x10]; // 0x678        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flMinConnectTime; // 0x688        
        float m_flDisconnectDistanceBuffer; // 0x68c        
        float m_flCandidateCloserDistance; // 0x690        
        float m_flTargetAwayDistance; // 0x694        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TangoTether_TetherVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TangoTether_TetherVData) == 0x698);
};
