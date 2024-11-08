#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0xa28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "Vector m_vExitOrigin"
    #pragma pack(push, 1)
    class CCitadelTeleportTrigger : public server::CTriggerModifier
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x9a0        
        // metadata: MNetworkEnable
        Vector m_vExitOrigin; // 0x9b8        
        [[maybe_unused]] std::uint8_t pad_0x9c4[0x2c]; // 0x9c4
        CUtlSymbolLarge m_strExitPoint; // 0x9f0        
        entity2::CEntityIOOutput m_OnTeleport; // 0x9f8        
        CUtlSymbolLarge m_strPropModel; // 0xa20        
        
        // Datamap fields:
        // void m_pEntExit; // 0x9c8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelTeleportTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelTeleportTrigger) == 0xa28);
};
