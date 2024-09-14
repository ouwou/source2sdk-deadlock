#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xf00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flScopeStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Hornet_Snipe : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc70[0x244]; // 0xc70
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flScopeStartTime; // 0xeb4        
        [[maybe_unused]] std::uint8_t pad_0xeb8[0x48];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Hornet_Snipe because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Hornet_Snipe) == 0xf00);
};
