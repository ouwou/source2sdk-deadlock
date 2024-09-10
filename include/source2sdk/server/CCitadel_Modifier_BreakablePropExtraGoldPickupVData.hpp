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
    // Size: 0x600
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_BreakablePropExtraGoldPickupVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Powerup Values"
        int32_t m_iBaseExtraGoldBounty; // 0x5f8        
        // metadata: MPropertyGroupName "Powerup Values"
        int32_t m_iPerMinuteExtraGoldBounty; // 0x5fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BreakablePropExtraGoldPickupVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_BreakablePropExtraGoldPickupVData) == 0x600);
};
