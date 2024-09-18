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
    // Size: 0x688
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifier_Wrecker_UltimateVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_EnemyGrabModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_EnemyGrabModifier;
        char m_EnemyGrabModifier[0x10]; // 0x608        
        // m_EnemyThrowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_EnemyThrowModifier;
        char m_EnemyThrowModifier[0x10]; // 0x618        
        // m_EnemyDamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_EnemyDamageModifier;
        char m_EnemyDamageModifier[0x10]; // 0x628        
        // m_InvincibleModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_InvincibleModifier;
        char m_InvincibleModifier[0x10]; // 0x638        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_StartSound; // 0x648        
        CSoundEventName m_AmbientLoopingSound; // 0x658        
        CSoundEventName m_GrabSound; // 0x668        
        CSoundEventName m_ThrowSound; // 0x678        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Wrecker_UltimateVData because it is not a standard-layout class
    static_assert(sizeof(CModifier_Wrecker_UltimateVData) == 0x688);
};
