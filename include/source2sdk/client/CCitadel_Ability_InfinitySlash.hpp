#pragma once
#include "source2sdk/client/CCitadelBaseYamatoAbility.hpp"
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
    // Size: 0xdc0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flExplodeEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flBuffEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_InfinitySlash : public client::CCitadelBaseYamatoAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xca0[0x118]; // 0xca0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flExplodeEndTime; // 0xdb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flBuffEndTime; // 0xdbc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_InfinitySlash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_InfinitySlash) == 0xdc0);
};
