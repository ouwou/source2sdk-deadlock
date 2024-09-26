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
    // Size: 0xe20
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flCastStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Mirage_FireBeetles : public client::C_CitadelBaseAbility
    {
    public:
        Vector m_vLaunchPosition; // 0xc78        
        QAngle m_qLaunchAngle; // 0xc84        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flCastStartTime; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc94[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Mirage_FireBeetles because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Mirage_FireBeetles) == 0xe20);
};
