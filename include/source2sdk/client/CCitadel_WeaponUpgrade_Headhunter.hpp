#pragma once
#include "source2sdk/client/CCitadel_WeaponUpgrade_HeadshotBooster.hpp"
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
    // Size: 0xd58
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_Headhunter : public client::CCitadel_WeaponUpgrade_HeadshotBooster
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xce8[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_WeaponUpgrade_Headhunter) == 0xd58);
};
