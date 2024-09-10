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
    // Size: 0xf0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Sleep : public server::CCitadelModifier
    {
    public:
        // m_vecSleepModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CModifierHandleTyped<server::CCitadelModifier>> m_vecSleepModifiers;
        char m_vecSleepModifiers[0x18]; // 0xc8        
        bool m_bIsWakingUp; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe1[0x3]; // 0xe1
        float m_flMinSleepTime; // 0xe4        
        float m_flWakeUpDelay; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Sleep because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Sleep) == 0xf0);
};
