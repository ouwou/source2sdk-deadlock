#pragma once
#include "source2sdk/server/CPointEntity.hpp"
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
    class CNavSpaceInfo : public server::CPointEntity
    {
    public:
        bool m_bCreateFlightSpace; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4d9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNavSpaceInfo because it is not a standard-layout class
    static_assert(sizeof(CNavSpaceInfo) == 0x4e0);
};
