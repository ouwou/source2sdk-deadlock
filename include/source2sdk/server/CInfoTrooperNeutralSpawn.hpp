#pragma once
#include "source2sdk/client/ENeutralTrooperType.hpp"
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
    // Size: 0x500
    // Has VTable
    #pragma pack(push, 1)
    class CInfoTrooperNeutralSpawn : public server::CServerOnlyPointEntity
    {
    public:
        int32_t m_iCoverGroupID; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4dc[0x4]; // 0x4dc
        CUtlSymbolLarge m_iszSquadName; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e8[0xc]; // 0x4e8
        client::ENeutralTrooperType m_eTrooperType; // 0x4f4        
        [[maybe_unused]] std::uint8_t pad_0x4f8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoTrooperNeutralSpawn because it is not a standard-layout class
    static_assert(sizeof(CInfoTrooperNeutralSpawn) == 0x500);
};
