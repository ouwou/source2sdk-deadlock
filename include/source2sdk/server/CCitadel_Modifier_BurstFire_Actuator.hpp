#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x280
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BurstFire_Actuator : public server::CCitadelModifier
    {
    public:
        bool m_bLastShotInFlight; // 0xc8        
        bool m_bBonusTracked; // 0xc9        
        [[maybe_unused]] std::uint8_t pad_0xca[0x2]; // 0xca
        int32_t m_nHitCounter; // 0xcc        
        int32_t m_nTotalBurstFireShots; // 0xd0        
        int32_t m_nInitialzedClipSize; // 0xd4        
        int32_t m_nBonusPitch; // 0xd8        
        bool m_bInitialized; // 0xdc        
        [[maybe_unused]] std::uint8_t pad_0xdd[0x3]; // 0xdd
        int32_t m_nIncreasedBurstShotCount; // 0xe0        
        float m_flIntraBurstCycleTime; // 0xe4        
        float m_flCycleTimePct; // 0xe8        
        float m_flMaxCycleTimeOverride; // 0xec        
        float m_flMaxBurstFireCooldownOverride; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0xf4[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BurstFire_Actuator because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_BurstFire_Actuator) == 0x280);
};
