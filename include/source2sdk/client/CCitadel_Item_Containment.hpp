#pragma once
#include "source2sdk/client/CCitadel_Item_TrackingProjectileApplyModifier.hpp"
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
    // Size: 0xcc8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Item_Containment : public client::CCitadel_Item_TrackingProjectileApplyModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc90[0x38];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Item_Containment) == 0xcc8);
};
