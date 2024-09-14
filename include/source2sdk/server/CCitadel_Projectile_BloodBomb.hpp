#pragma once
#include "source2sdk/server/CCitadelProjectile.hpp"
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
    // Size: 0x850
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_BloodBomb : public server::CCitadelProjectile
    {
    public:
        bool m_bSecondBomb; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x821[0x3]; // 0x821
        int32_t m_nBeepSoundBuildupCount; // 0x824        
        float m_flBeepSoundIntervalBias; // 0x828        
        float m_flBeepSoundMaxFrequency; // 0x82c        
        float m_flArmingDuration; // 0x830        
        [[maybe_unused]] std::uint8_t pad_0x834[0x4]; // 0x834
        // m_vecBeepIntervals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecBeepIntervals;
        char m_vecBeepIntervals[0x18]; // 0x838        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_BloodBomb because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_BloodBomb) == 0x850);
};
