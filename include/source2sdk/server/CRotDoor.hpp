#pragma once
#include "source2sdk/server/CBaseDoor.hpp"
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
    // Size: 0x9f8
    // Has VTable
    #pragma pack(push, 1)
    class CRotDoor : public server::CBaseDoor
    {
    public:
        bool m_bSolidBsp; // 0x9f0        
        [[maybe_unused]] std::uint8_t pad_0x9f1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRotDoor because it is not a standard-layout class
    static_assert(sizeof(CRotDoor) == 0x9f8);
};
