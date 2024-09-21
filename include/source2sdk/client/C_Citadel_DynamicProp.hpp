#pragma once
#include "source2sdk/client/C_DynamicProp.hpp"
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
    // static metadata: MNetworkVarNames "CUtlString m_strDefaultSkin"
    // static metadata: MNetworkVarNames "CUtlString m_strFriendlySkin"
    // static metadata: MNetworkVarNames "CUtlString m_strEnemySkin"
    // static metadata: MNetworkVarNames "bool m_bIsWorld"
    #pragma pack(push, 1)
    class C_Citadel_DynamicProp : public client::C_DynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xde8[0x10]; // 0xde8
        int32_t m_nPlayerTeamEvent; // 0xdf8        
        [[maybe_unused]] std::uint8_t pad_0xdfc[0x4]; // 0xdfc
        // metadata: MNetworkEnable
        CUtlString m_strDefaultSkin; // 0xe00        
        // metadata: MNetworkEnable
        CUtlString m_strFriendlySkin; // 0xe08        
        // metadata: MNetworkEnable
        CUtlString m_strEnemySkin; // 0xe10        
        // metadata: MNetworkEnable
        bool m_bIsWorld; // 0xe18        
        [[maybe_unused]] std::uint8_t pad_0xe19[0x7];
        
        // Datamap fields:
        // CUtlSymbolLarge SetFriendlySkin; // 0x0
        // CUtlSymbolLarge SetEnemySkin; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_DynamicProp because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_DynamicProp) == 0xe20);
};
