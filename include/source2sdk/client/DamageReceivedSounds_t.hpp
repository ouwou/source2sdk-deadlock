#pragma once
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
    // Standard-layout class: true
    // Size: 0x60
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct DamageReceivedSounds_t
    {
    public:
        // metadata: MPropertyDescription "When a specific damage received can not be selected"
        CSoundEventName m_strDamageReceiveDefault; // 0x0        
        // metadata: MPropertyDescription "When NPC damage is received"
        CSoundEventName m_strDamageReceiveNPC; // 0x10        
        // metadata: MPropertyDescription "When DOT damage is received"
        CSoundEventName m_strDamageReceiveDOT; // 0x20        
        // metadata: MPropertyDescription "When NPC melee damage is received"
        CSoundEventName m_strDamageReceiveMeleeNPC; // 0x30        
        // metadata: MPropertyDescription "When melee damage is received"
        CSoundEventName m_strDamageReceiveMelee; // 0x40        
        // metadata: MPropertyDescription "When damage to player shield is received"
        CSoundEventName m_strDamageReceiveShield; // 0x50        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DamageReceivedSounds_t, m_strDamageReceiveDefault) == 0x0);
    static_assert(offsetof(DamageReceivedSounds_t, m_strDamageReceiveNPC) == 0x10);
    static_assert(offsetof(DamageReceivedSounds_t, m_strDamageReceiveDOT) == 0x20);
    static_assert(offsetof(DamageReceivedSounds_t, m_strDamageReceiveMeleeNPC) == 0x30);
    static_assert(offsetof(DamageReceivedSounds_t, m_strDamageReceiveMelee) == 0x40);
    static_assert(offsetof(DamageReceivedSounds_t, m_strDamageReceiveShield) == 0x50);
    
    static_assert(sizeof(DamageReceivedSounds_t) == 0x60);
};
