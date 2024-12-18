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
    class CCitadel_Modifier_SpeedBoostVData : public server::CCitadelModifierVData
    {
    public:
        float m_flMoveSpeedBoost; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_SpeedBoostVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_SpeedBoostVData) == 0x638);
};
