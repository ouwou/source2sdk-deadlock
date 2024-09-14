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
    // Size: 0xc20
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flCastStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Mirage_FireBeetles : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vLaunchPosition; // 0xae8        
        QAngle m_qLaunchAngle; // 0xaf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flCastStartTime; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Mirage_FireBeetles because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Mirage_FireBeetles) == 0xc20);
};
