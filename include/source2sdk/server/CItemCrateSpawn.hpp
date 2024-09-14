#pragma once
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
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
    #pragma pack(push, 1)
    class CItemCrateSpawn : public server::CServerOnlyPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4d8[0x18];
        // Datamap fields:
        // int32_t m_eLootType; // 0x4e0
        // int32_t m_eObjectivePosition; // 0x4e4
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CItemCrateSpawn) == 0x4f0);
};
