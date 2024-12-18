#pragma once
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
    // Size: 0x638
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_BulletResistReductionStackVData : public client::CCitadelModifierVData
    {
    public:
        bool m_bSelfish; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x631[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BulletResistReductionStackVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BulletResistReductionStackVData) == 0x638);
};
