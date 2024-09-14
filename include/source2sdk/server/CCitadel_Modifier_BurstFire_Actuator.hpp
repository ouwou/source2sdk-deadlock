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
    // Size: 0x278
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BurstFire_Actuator : public server::CCitadelModifier
    {
    public:
        bool m_bLastShotInFlight; // 0xc0        
        bool m_bBonusTracked; // 0xc1        
        [[maybe_unused]] std::uint8_t pad_0xc2[0x2]; // 0xc2
        int32_t m_nHitCounter; // 0xc4        
        int32_t m_nTotalBurstFireShots; // 0xc8        
        int32_t m_nInitialzedClipSize; // 0xcc        
        int32_t m_nBonusPitch; // 0xd0        
        bool m_bInitialized; // 0xd4        
        [[maybe_unused]] std::uint8_t pad_0xd5[0x3]; // 0xd5
        int32_t m_nIncreasedBurstShotCount; // 0xd8        
        float m_flIntraBurstCycleTime; // 0xdc        
        float m_flCycleTimePct; // 0xe0        
        float m_flMaxCycleTimeOverride; // 0xe4        
        float m_flMaxBurstFireCooldownOverride; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xec[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BurstFire_Actuator because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BurstFire_Actuator) == 0x278);
};
