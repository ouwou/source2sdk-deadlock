#pragma once
#include "source2sdk/client/CCitadel_Item.hpp"
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
    // Size: 0xce8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Item_BaseProjectileAOEModifier : public client::CCitadel_Item
    {
    public:
        Vector m_vLaunchPosition; // 0xc98        
        QAngle m_qLaunchAngle; // 0xca4        
        [[maybe_unused]] std::uint8_t pad_0xcb0[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_BaseProjectileAOEModifier because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_BaseProjectileAOEModifier) == 0xce8);
};
