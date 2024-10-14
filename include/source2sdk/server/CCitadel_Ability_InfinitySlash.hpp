#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseYamatoAbility.hpp"
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
    // Size: 0xb80
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flExplodeEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flBuffEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_InfinitySlash : public server::CCitadelBaseYamatoAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x70]; // 0xb00
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flExplodeEndTime; // 0xb70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flBuffEndTime; // 0xb74        
        client::ParticleIndex_t m_nCastEffect; // 0xb78        
        [[maybe_unused]] std::uint8_t pad_0xb7c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_InfinitySlash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_InfinitySlash) == 0xb80);
};
