#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    class CEnvFireSource : public server::CBaseEntity
    {
    public:
        bool m_bEnabled; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x3]; // 0x4e1
        float m_radius; // 0x4e4        
        float m_damage; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvFireSource because it is not a standard-layout class
    static_assert(sizeof(CEnvFireSource) == 0x4f0);
};
