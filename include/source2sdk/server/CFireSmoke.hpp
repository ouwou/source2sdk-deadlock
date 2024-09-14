#pragma once
#include "source2sdk/server/CBaseFire.hpp"
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
    // 
    // static metadata: MNetworkVarNames "int32 m_nFlameModelIndex"
    // static metadata: MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
    #pragma pack(push, 1)
    class CFireSmoke : public server::CBaseFire
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nFlameModelIndex; // 0x4e8        
        // metadata: MNetworkEnable
        int32_t m_nFlameFromAboveModelIndex; // 0x4ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFireSmoke because it is not a standard-layout class
    static_assert(sizeof(CFireSmoke) == 0x4f0);
};
