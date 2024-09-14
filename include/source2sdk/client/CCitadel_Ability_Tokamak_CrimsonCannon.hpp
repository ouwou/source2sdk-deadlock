#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xe60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tokamak_CrimsonCannon : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xc70        
        [[maybe_unused]] std::uint8_t pad_0xc71[0x1c7]; // 0xc71
        bool m_bIsZoomed; // 0xe38        
        [[maybe_unused]] std::uint8_t pad_0xe39[0x27];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_CrimsonCannon because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tokamak_CrimsonCannon) == 0xe60);
};
