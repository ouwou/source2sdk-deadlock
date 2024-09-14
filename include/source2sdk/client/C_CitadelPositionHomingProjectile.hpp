#pragma once
#include "source2sdk/client/C_CitadelTrackedProjectile.hpp"
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
    // Size: 0x8c8
    // Has VTable
    #pragma pack(push, 1)
    class C_CitadelPositionHomingProjectile : public client::C_CitadelTrackedProjectile
    {
    public:
        Vector m_vecHomingPosition; // 0x8b8        
        [[maybe_unused]] std::uint8_t pad_0x8c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelPositionHomingProjectile because it is not a standard-layout class
    static_assert(sizeof(C_CitadelPositionHomingProjectile) == 0x8c8);
};
