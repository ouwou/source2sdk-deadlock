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
    // Size: 0xb28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "CUtlString m_sPickupName"
    // static metadata: MNetworkVarNames "int m_nNameOffset"
    // static metadata: MNetworkVarNames "CUtlString m_sAmbientNoise"
    #pragma pack(push, 1)
    class C_Citadel_BreakblePropPickup : public client::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnActiveChanged"
        bool m_bActive; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xaf9[0x7]; // 0xaf9
        // metadata: MNetworkEnable
        CUtlString m_sPickupName; // 0xb00        
        // metadata: MNetworkEnable
        int32_t m_nNameOffset; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x4]; // 0xb0c
        // metadata: MNetworkEnable
        CUtlString m_sAmbientNoise; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb18[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_BreakblePropPickup because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_BreakblePropPickup) == 0xb28);
};
