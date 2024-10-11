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
    // Size: 0xd90
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
        Vector m_vStartPosition; // 0xaf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vDashDirection; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bIsDashing; // 0xb08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bStartedInAir; // 0xb09        
        [[maybe_unused]] std::uint8_t pad_0xb0a[0x6]; // 0xb0a
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xb10        
        Vector m_vecLastPosition; // 0xb28        
        int32_t m_nReductionsLeft; // 0xb34        
        [[maybe_unused]] std::uint8_t pad_0xb38[0x230]; // 0xb38
        entity2::GameTime_t m_flStuckTime; // 0xd68        
        // m_hEchoThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPointModifierThinker> m_hEchoThinker;
        char m_hEchoThinker[0x4]; // 0xd6c        
        entity2::GameTime_t m_EchoStartTime; // 0xd70        
        bool m_bLetEchoPlay; // 0xd74        
        [[maybe_unused]] std::uint8_t pad_0xd75[0x1b];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ShivDash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ShivDash) == 0xd90);
};
