#pragma once
#include "source2sdk/server/CCitadelBaseTriggerAbility.hpp"
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
    // Size: 0xb00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flActiveRadius"
    #pragma pack(push, 1)
    class CCitadelNanoPredatoryStatueTrigger : public server::CCitadelBaseTriggerAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flActiveRadius; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelNanoPredatoryStatueTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelNanoPredatoryStatueTrigger) == 0xb00);
};
