#pragma once
#include "source2sdk/client/C_PathParticleRope.hpp"
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
    // Size: 0x670
    // Has VTable
    #pragma pack(push, 1)
    class C_CitadelZiplinePath : public client::C_PathParticleRope
    {
    public:
        int32_t m_iLaneNumber; // 0x668        
        [[maybe_unused]] std::uint8_t pad_0x66c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelZiplinePath because it is not a standard-layout class
    static_assert(sizeof(C_CitadelZiplinePath) == 0x670);
};
