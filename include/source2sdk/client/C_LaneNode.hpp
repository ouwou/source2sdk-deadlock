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
    // Size: 0x898
    // Has VTable
    #pragma pack(push, 1)
    class C_LaneNode : public client::CCitadelModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x860[0x30]; // 0x860
        int32_t m_nPlayerTeamEventIndex; // 0x890        
        [[maybe_unused]] std::uint8_t pad_0x894[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LaneNode because it is not a standard-layout class
    static_assert(sizeof(C_LaneNode) == 0x898);
};
