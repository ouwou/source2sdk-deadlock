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
    // Size: 0x6a0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hPayload"
    // static metadata: MNetworkVarNames "int m_nBossesAlive"
    // static metadata: MNetworkVarNames "int m_nBossesMax"
    // static metadata: MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
    // static metadata: MNetworkVarNames "int m_nBaseGuardianLanesCleared"
    // static metadata: MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
    #pragma pack(push, 1)
    class C_CitadelTeam : public client::C_Team
    {
    public:
        // metadata: MNetworkEnable
        // m_hPayload has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPayload;
        char m_hPayload[0x4]; // 0x620        
        // metadata: MNetworkEnable
        int32_t m_nBossesAlive; // 0x624        
        // metadata: MNetworkEnable
        int32_t m_nBossesMax; // 0x628        
        // metadata: MNetworkEnable
        client::EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x62c        
        [[maybe_unused]] std::uint8_t pad_0x62e[0x2]; // 0x62e
        // metadata: MNetworkEnable
        int32_t m_nBaseGuardianLanesCleared; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4]; // 0x634
        // metadata: MNetworkEnable
        // m_vecFOWEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::STeamFOWEntity> m_vecFOWEntities;
        char m_vecFOWEntities[0x68]; // 0x638        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelTeam because it is not a standard-layout class
    static_assert(sizeof(C_CitadelTeam) == 0x6a0);
};
