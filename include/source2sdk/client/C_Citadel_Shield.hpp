#pragma once
#include "source2sdk/client/CCitadelModelEntity.hpp"
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
    // Size: 0x868
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAllowRotatingUp"
    // static metadata: MNetworkVarNames "bool m_bFixedPosition"
    // static metadata: MNetworkVarNames "float m_flShieldOffset"
    #pragma pack(push, 1)
    class C_Citadel_Shield : public client::CCitadelModelEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bAllowRotatingUp; // 0x860        
        // metadata: MNetworkEnable
        bool m_bFixedPosition; // 0x861        
        [[maybe_unused]] std::uint8_t pad_0x862[0x2]; // 0x862
        // metadata: MNetworkEnable
        float m_flShieldOffset; // 0x864        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Shield because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Shield) == 0x868);
};
