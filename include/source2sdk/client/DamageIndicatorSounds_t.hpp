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
    struct DamageIndicatorSounds_t
    {
    public:
        CSoundEventName m_strDamageDefault; // 0x0        
        CSoundEventName m_strDamageCrit; // 0x10        
        CSoundEventName m_strDamageLethal; // 0x20        
        CSoundEventName m_strDamageInvulnerable; // 0x30        
        CSoundEventName m_strDamageDOT; // 0x40        
        CSoundEventName m_strDamageHealthTransfer; // 0x50        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DamageIndicatorSounds_t, m_strDamageDefault) == 0x0);
    static_assert(offsetof(DamageIndicatorSounds_t, m_strDamageCrit) == 0x10);
    static_assert(offsetof(DamageIndicatorSounds_t, m_strDamageLethal) == 0x20);
    static_assert(offsetof(DamageIndicatorSounds_t, m_strDamageInvulnerable) == 0x30);
    static_assert(offsetof(DamageIndicatorSounds_t, m_strDamageDOT) == 0x40);
    static_assert(offsetof(DamageIndicatorSounds_t, m_strDamageHealthTransfer) == 0x50);
    
    static_assert(sizeof(DamageIndicatorSounds_t) == 0x60);
};
