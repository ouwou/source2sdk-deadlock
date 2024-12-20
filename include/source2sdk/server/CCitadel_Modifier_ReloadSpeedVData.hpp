#pragma once
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
    // Size: 0x638
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ReloadSpeedVData : public server::CCitadelModifierVData
    {
    public:
        float m_flReloadSpeedPercent; // 0x630        
        bool m_bDestroyAfterReload; // 0x634        
        [[maybe_unused]] std::uint8_t pad_0x635[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ReloadSpeedVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ReloadSpeedVData) == 0x638);
};
