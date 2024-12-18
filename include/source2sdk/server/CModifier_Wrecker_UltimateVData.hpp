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
    // Size: 0x6b0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifier_Wrecker_UltimateVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_EnemyGrabModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_EnemyGrabModifier;
        char m_EnemyGrabModifier[0x10]; // 0x630        
        // m_EnemyThrowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_EnemyThrowModifier;
        char m_EnemyThrowModifier[0x10]; // 0x640        
        // m_EnemyDamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_EnemyDamageModifier;
        char m_EnemyDamageModifier[0x10]; // 0x650        
        // m_InvincibleModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_InvincibleModifier;
        char m_InvincibleModifier[0x10]; // 0x660        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_StartSound; // 0x670        
        CSoundEventName m_AmbientLoopingSound; // 0x680        
        CSoundEventName m_GrabSound; // 0x690        
        CSoundEventName m_ThrowSound; // 0x6a0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Wrecker_UltimateVData because it is not a standard-layout class
    static_assert(sizeof(CModifier_Wrecker_UltimateVData) == 0x6b0);
};
