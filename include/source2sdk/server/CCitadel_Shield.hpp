#pragma once
#include "source2sdk/server/CCitadelModelEntity.hpp"
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
    // Size: 0x928
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAllowRotatingUp"
    // static metadata: MNetworkVarNames "bool m_bFixedPosition"
    // static metadata: MNetworkVarNames "float m_flShieldOffset"
    #pragma pack(push, 1)
    class CCitadel_Shield : public server::CCitadelModelEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bAllowRotatingUp; // 0x920        
        // metadata: MNetworkEnable
        bool m_bFixedPosition; // 0x921        
        [[maybe_unused]] std::uint8_t pad_0x922[0x2]; // 0x922
        // metadata: MNetworkEnable
        float m_flShieldOffset; // 0x924        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Shield because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Shield) == 0x928);
};
