#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseShivAbility.hpp"
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
    // Size: 0xc00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flTotalPendingDamage"
    #pragma pack(push, 1)
    class CCitadel_Ability_Shiv_Defer_Damage : public server::CCitadelBaseShivAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0xe0]; // 0xaf8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flTotalPendingDamage; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbdc[0x1c]; // 0xbdc
        entity2::GameTime_t m_flLastDeferredDamageApplicationTime; // 0xbf8        
        [[maybe_unused]] std::uint8_t pad_0xbfc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Shiv_Defer_Damage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Shiv_Defer_Damage) == 0xc00);
};
