#pragma once
#include "source2sdk/client/CCitadelBaseShivAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vStartPosition"
    // static metadata: MNetworkVarNames "Vector m_vDashDirection"
    // static metadata: MNetworkVarNames "bool m_bIsDashing"
    // static metadata: MNetworkVarNames "bool m_bStartedInAir"
    #pragma pack(push, 1)
    class CCitadel_Ability_ShivDash : public client::CCitadelBaseShivAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vStartPosition; // 0xc80        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vDashDirection; // 0xc8c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bIsDashing; // 0xc98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bStartedInAir; // 0xc99        
        [[maybe_unused]] std::uint8_t pad_0xc9a[0x6]; // 0xc9a
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xca0        
        Vector m_vecLastPosition; // 0xcb8        
        int32_t m_nReductionsLeft; // 0xcc4        
        [[maybe_unused]] std::uint8_t pad_0xcc8[0x230]; // 0xcc8
        entity2::GameTime_t m_flStuckTime; // 0xef8        
        [[maybe_unused]] std::uint8_t pad_0xefc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ShivDash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ShivDash) == 0xf00);
};
