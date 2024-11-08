#pragma once
#include "source2sdk/client/EFlexSlotTypes_t.hpp"
#include "source2sdk/server/CTeam.hpp"
#include "source2sdk/server/STeamFOWEntity.hpp"
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
    // Size: 0x630
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hPayload"
    // static metadata: MNetworkVarNames "int m_nBossesAlive"
    // static metadata: MNetworkVarNames "int m_nBossesMax"
    // static metadata: MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
    // static metadata: MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
    #pragma pack(push, 1)
    class CCitadelTeam : public server::CTeam
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x18]; // 0x5a0
        // metadata: MNetworkEnable
        // m_hPayload has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPayload;
        char m_hPayload[0x4]; // 0x5b8        
        // metadata: MNetworkEnable
        int32_t m_nBossesAlive; // 0x5bc        
        // metadata: MNetworkEnable
        int32_t m_nBossesMax; // 0x5c0        
        // metadata: MNetworkEnable
        client::EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x5c4        
        [[maybe_unused]] std::uint8_t pad_0x5c6[0x2]; // 0x5c6
        // metadata: MNetworkEnable
        // metadata: MNetworkSendProxyRecipientsFilter
        // metadata: MNetworkPriority "32"
        // m_vecFOWEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::STeamFOWEntity> m_vecFOWEntities;
        char m_vecFOWEntities[0x68]; // 0x5c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelTeam because it is not a standard-layout class
    static_assert(sizeof(CCitadelTeam) == 0x630);
};
