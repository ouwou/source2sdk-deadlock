#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Size: 0xb58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flParryStartTime"
    // static metadata: MNetworkVarNames "bool m_bAttackParried"
    // static metadata: MNetworkVarNames "GameTime_t m_flParrySuccessTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_MeleeParry : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flParryStartTime; // 0xad8        
        // metadata: MNetworkEnable
        bool m_bAttackParried; // 0xadc        
        [[maybe_unused]] std::uint8_t pad_0xadd[0x3]; // 0xadd
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flParrySuccessTime; // 0xae0        
        [[maybe_unused]] std::uint8_t pad_0xae4[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_MeleeParry because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_MeleeParry) == 0xb58);
};
