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
    // Size: 0xa10
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
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x988        
        // metadata: MNetworkEnable
        Vector m_vExitOrigin; // 0x9a0        
        [[maybe_unused]] std::uint8_t pad_0x9ac[0x2c]; // 0x9ac
        CUtlSymbolLarge m_strExitPoint; // 0x9d8        
        entity2::CEntityIOOutput m_OnTeleport; // 0x9e0        
        CUtlSymbolLarge m_strPropModel; // 0xa08        
        
        // Datamap fields:
        // void m_pEntExit; // 0x9b0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelTeleportTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelTeleportTrigger) == 0xa10);
};
