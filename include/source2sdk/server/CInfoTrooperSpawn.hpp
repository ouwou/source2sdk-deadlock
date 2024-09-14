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
    // Size: 0x4f8
    // Has VTable
    #pragma pack(push, 1)
    class CInfoTrooperSpawn : public server::CServerOnlyPointEntity
    {
    public:
        int32_t m_iLane; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4dc[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoTrooperSpawn because it is not a standard-layout class
    static_assert(sizeof(CInfoTrooperSpawn) == 0x4f8);
};
