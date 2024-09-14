#pragma once
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CTriggerModifier.hpp"
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
    // Size: 0x970
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    #pragma pack(push, 1)
    class CCitadelIdolReturnTrigger : public server::CTriggerModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x948[0x8]; // 0x948
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x950        
        [[maybe_unused]] std::uint8_t pad_0x968[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelIdolReturnTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelIdolReturnTrigger) == 0x970);
};
