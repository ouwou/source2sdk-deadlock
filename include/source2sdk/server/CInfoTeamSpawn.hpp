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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4e8
    // Has VTable
    #pragma pack(push, 1)
    class CInfoTeamSpawn : public server::CServerOnlyPointEntity
    {
    public:
        bool m_bIntroSpawn; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4d9[0x3]; // 0x4d9
        int32_t m_iLaneNum; // 0x4dc        
        // m_hAssignedPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAssignedPlayer;
        char m_hAssignedPlayer[0x4]; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoTeamSpawn because it is not a standard-layout class
    static_assert(sizeof(CInfoTeamSpawn) == 0x4e8);
};
