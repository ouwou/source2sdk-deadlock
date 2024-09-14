#pragma once
#include "source2sdk/server/CServerOnlyEntity.hpp"
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
    // Size: 0x4f0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelEnergyTower : public server::CServerOnlyEntity
    {
    public:
        bool m_bEnabled; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4d9[0x3]; // 0x4d9
        float m_flDamage; // 0x4dc        
        float m_flRadius; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0xc];
        
        // Datamap fields:
        //  InputEnable; // 0x0
        //  InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelEnergyTower because it is not a standard-layout class
    static_assert(sizeof(CCitadelEnergyTower) == 0x4f0);
};
