#pragma once
#include "source2sdk/server/CNPC_FlyingDrone.hpp"
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
    // Size: 0x18b8
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_SurveillanceDrone : public server::CNPC_FlyingDrone
    {
    public:
        int32_t m_iMinionHealth; // 0x1858        
        float m_flLifetime; // 0x185c        
        [[maybe_unused]] std::uint8_t pad_0x1860[0xc]; // 0x1860
        Vector m_vecHome; // 0x186c        
        [[maybe_unused]] std::uint8_t pad_0x1878[0x10]; // 0x1878
        int32_t m_nAbilityLevel; // 0x1888        
        [[maybe_unused]] std::uint8_t pad_0x188c[0x2c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_SurveillanceDrone because it is not a standard-layout class
    static_assert(sizeof(CNPC_SurveillanceDrone) == 0x18b8);
};
