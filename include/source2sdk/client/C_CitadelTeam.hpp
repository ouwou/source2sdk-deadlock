#pragma once
#include "source2sdk/client/C_Team.hpp"
#include "source2sdk/client/EFlexSlotTypes_t.hpp"
#include "source2sdk/client/STeamFOWEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x678
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hPayload"
    // static metadata: MNetworkVarNames "int m_nBossesAlive"
    // static metadata: MNetworkVarNames "int m_nBossesMax"
    // static metadata: MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
    // static metadata: MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
    #pragma pack(push, 1)
    class C_CitadelTeam : public client::C_Team
    {
    public:
        // metadata: MNetworkEnable
        // m_hPayload has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPayload;
        char m_hPayload[0x4]; // 0x618        
        // metadata: MNetworkEnable
        int32_t m_nBossesAlive; // 0x61c        
        // metadata: MNetworkEnable
        int32_t m_nBossesMax; // 0x620        
        // metadata: MNetworkEnable
        client::EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x624        
        [[maybe_unused]] std::uint8_t pad_0x626[0x2]; // 0x626
        // metadata: MNetworkEnable
        // m_vecFOWEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::STeamFOWEntity> m_vecFOWEntities;
        char m_vecFOWEntities[0x50]; // 0x628        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelTeam because it is not a standard-layout class
    static_assert(sizeof(C_CitadelTeam) == 0x678);
};
