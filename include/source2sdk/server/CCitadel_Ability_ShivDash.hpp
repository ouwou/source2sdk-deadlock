#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseShivAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPointModifierThinker;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd88
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vStartPosition"
    // static metadata: MNetworkVarNames "Vector m_vDashDirection"
    // static metadata: MNetworkVarNames "bool m_bIsDashing"
    // static metadata: MNetworkVarNames "bool m_bStartedInAir"
    #pragma pack(push, 1)
    class CCitadel_Ability_ShivDash : public server::CCitadelBaseShivAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vStartPosition; // 0xae8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vDashDirection; // 0xaf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bIsDashing; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bStartedInAir; // 0xb01        
        [[maybe_unused]] std::uint8_t pad_0xb02[0x6]; // 0xb02
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xb08        
        Vector m_vecLastPosition; // 0xb20        
        int32_t m_nReductionsLeft; // 0xb2c        
        [[maybe_unused]] std::uint8_t pad_0xb30[0x230]; // 0xb30
        entity2::GameTime_t m_flStuckTime; // 0xd60        
        // m_hEchoThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPointModifierThinker> m_hEchoThinker;
        char m_hEchoThinker[0x4]; // 0xd64        
        entity2::GameTime_t m_EchoStartTime; // 0xd68        
        bool m_bLetEchoPlay; // 0xd6c        
        [[maybe_unused]] std::uint8_t pad_0xd6d[0x1b];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ShivDash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ShivDash) == 0xd88);
};
