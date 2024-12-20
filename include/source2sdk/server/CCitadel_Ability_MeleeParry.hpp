#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xb78
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flParryStartTime"
    // static metadata: MNetworkVarNames "bool m_bAttackParried"
    // static metadata: MNetworkVarNames "GameTime_t m_flParrySuccessTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_MeleeParry : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nActiveFX; // 0xaf8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flParryStartTime; // 0xafc        
        // metadata: MNetworkEnable
        bool m_bAttackParried; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb01[0x3]; // 0xb01
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flParrySuccessTime; // 0xb04        
        [[maybe_unused]] std::uint8_t pad_0xb08[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_MeleeParry because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_MeleeParry) == 0xb78);
};
