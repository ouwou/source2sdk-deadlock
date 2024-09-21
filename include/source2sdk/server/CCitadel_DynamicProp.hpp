#pragma once
#include "source2sdk/server/CDynamicProp.hpp"
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
    // Size: 0xc88
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CUtlString m_strDefaultSkin"
    // static metadata: MNetworkVarNames "CUtlString m_strFriendlySkin"
    // static metadata: MNetworkVarNames "CUtlString m_strEnemySkin"
    // static metadata: MNetworkVarNames "bool m_bIsWorld"
    #pragma pack(push, 1)
    class CCitadel_DynamicProp : public server::CDynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc58[0x10]; // 0xc58
        // metadata: MNetworkEnable
        CUtlString m_strDefaultSkin; // 0xc68        
        // metadata: MNetworkEnable
        CUtlString m_strFriendlySkin; // 0xc70        
        // metadata: MNetworkEnable
        CUtlString m_strEnemySkin; // 0xc78        
        // metadata: MNetworkEnable
        bool m_bIsWorld; // 0xc80        
        [[maybe_unused]] std::uint8_t pad_0xc81[0x7];
        
        // Datamap fields:
        // CUtlSymbolLarge SetFriendlySkin; // 0x0
        // CUtlSymbolLarge SetEnemySkin; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_DynamicProp because it is not a standard-layout class
    static_assert(sizeof(CCitadel_DynamicProp) == 0xc88);
};
