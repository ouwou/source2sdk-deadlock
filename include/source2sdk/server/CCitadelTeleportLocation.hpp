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
    // Size: 0x4e0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelTeleportLocation : public server::CServerOnlyEntity
    {
    public:
        int32_t m_iLane; // 0x4d8        
        int32_t m_iObjective; // 0x4dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelTeleportLocation because it is not a standard-layout class
    static_assert(sizeof(CCitadelTeleportLocation) == 0x4e0);
};
