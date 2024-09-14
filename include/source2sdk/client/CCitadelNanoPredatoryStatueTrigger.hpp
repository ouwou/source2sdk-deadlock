#pragma once
#include "source2sdk/client/CCitadelBaseTriggerAbility.hpp"
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
    // Size: 0xc88
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flActiveRadius"
    #pragma pack(push, 1)
    class CCitadelNanoPredatoryStatueTrigger : public client::CCitadelBaseTriggerAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flActiveRadius; // 0xc80        
        [[maybe_unused]] std::uint8_t pad_0xc84[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelNanoPredatoryStatueTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelNanoPredatoryStatueTrigger) == 0xc88);
};
