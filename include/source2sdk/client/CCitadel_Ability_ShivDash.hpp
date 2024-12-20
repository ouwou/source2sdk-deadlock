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
    // Size: 0xf18
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
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vStartPosition; // 0xc98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vDashDirection; // 0xca4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bIsDashing; // 0xcb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bStartedInAir; // 0xcb1        
        [[maybe_unused]] std::uint8_t pad_0xcb2[0x6]; // 0xcb2
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xcb8        
        Vector m_vecLastPosition; // 0xcd0        
        int32_t m_nReductionsLeft; // 0xcdc        
        [[maybe_unused]] std::uint8_t pad_0xce0[0x230]; // 0xce0
        entity2::GameTime_t m_flStuckTime; // 0xf10        
        [[maybe_unused]] std::uint8_t pad_0xf14[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ShivDash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ShivDash) == 0xf18);
};
