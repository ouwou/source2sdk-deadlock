#pragma once
#include "source2sdk/client/ECatStatueState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Size: 0xc70
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "ECatStatueState_t m_eState"
    // static metadata: MNetworkVarNames "EHANDLE m_hStatue"
    #pragma pack(push, 1)
    class CCitadel_Ability_ProximityRitual : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::ECatStatueState_t m_eState; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf1[0x3]; // 0xaf1
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_hStatue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hStatue;
        char m_hStatue[0x4]; // 0xaf4        
        entity2::GameTime_t m_tCatRecallTime; // 0xaf8        
        int32_t m_iCatRecallHealth; // 0xafc        
        Vector m_vLaunchPosition; // 0xb00        
        QAngle m_qLaunchAngle; // 0xb0c        
        [[maybe_unused]] std::uint8_t pad_0xb18[0x158];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ProximityRitual) == 0xc70);
};
