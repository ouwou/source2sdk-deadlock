#pragma once
#include "source2sdk/server/CPathParticleRope.hpp"
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
    // Size: 0x5c8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelZiplinePath : public server::CPathParticleRope
    {
    public:
        int32_t m_iLaneNumber; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelZiplinePath because it is not a standard-layout class
    static_assert(sizeof(CCitadelZiplinePath) == 0x5c8);
};
