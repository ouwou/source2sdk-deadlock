#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
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
    // Size: 0xb00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "CUtlString m_sPickupName"
    // static metadata: MNetworkVarNames "int m_nNameOffset"
    #pragma pack(push, 1)
    class C_Citadel_BreakblePropPickup : public client::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnActiveChanged"
        bool m_bActive; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xae9[0x7]; // 0xae9
        // metadata: MNetworkEnable
        CUtlString m_sPickupName; // 0xaf0        
        // metadata: MNetworkEnable
        int32_t m_nNameOffset; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_BreakblePropPickup because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_BreakblePropPickup) == 0xb00);
};
