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
    // Size: 0xde8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecCastPosition"
    // static metadata: MNetworkVarNames "Vector m_vecCastPositionNormal"
    // static metadata: MNetworkVarNames "Vector m_vecEndPosition"
    // static metadata: MNetworkVarNames "Vector m_vecEndPositionNormal"
    #pragma pack(push, 1)
    class CCitadel_Ability_Trapper_WebWall : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xca0[0x118]; // 0xca0
        // metadata: MNetworkEnable
        Vector m_vecCastPosition; // 0xdb8        
        // metadata: MNetworkEnable
        Vector m_vecCastPositionNormal; // 0xdc4        
        // metadata: MNetworkEnable
        Vector m_vecEndPosition; // 0xdd0        
        // metadata: MNetworkEnable
        Vector m_vecEndPositionNormal; // 0xddc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Trapper_WebWall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Trapper_WebWall) == 0xde8);
};
