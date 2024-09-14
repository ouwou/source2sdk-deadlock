#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
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
    // Size: 0x968
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "string_t m_iszSoundName"
    #pragma pack(push, 1)
    class CTriggerItemShop : public server::CBaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x938        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSoundName; // 0x950        
        Vector m_vAudioOffset; // 0x958        
        [[maybe_unused]] std::uint8_t pad_0x964[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerItemShop because it is not a standard-layout class
    static_assert(sizeof(CTriggerItemShop) == 0x968);
};
