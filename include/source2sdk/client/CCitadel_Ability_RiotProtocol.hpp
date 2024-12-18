#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xd10
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    #pragma pack(push, 1)
    class CCitadel_Ability_RiotProtocol : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bActive; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc99[0x77];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_RiotProtocol because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_RiotProtocol) == 0xd10);
};
