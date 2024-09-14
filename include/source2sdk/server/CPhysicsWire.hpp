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
    // Size: 0x4e0
    // Has VTable
    #pragma pack(push, 1)
    class CPhysicsWire : public server::CBaseEntity
    {
    public:
        int32_t m_nDensity; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsWire because it is not a standard-layout class
    static_assert(sizeof(CPhysicsWire) == 0x4e0);
};
