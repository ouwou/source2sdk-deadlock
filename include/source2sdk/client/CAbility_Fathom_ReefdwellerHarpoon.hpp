#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xde8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bBulletFlying"
    // static metadata: MNetworkVarNames "bool m_bHasLatchedOnce"
    // static metadata: MNetworkVarNames "bool m_bLatched"
    // static metadata: MNetworkVarNames "Vector m_vHarpoonTarget"
    // static metadata: MNetworkVarNames "float m_flLatchedYaw"
    // static metadata: MNetworkVarNames "GameTime_t m_flCloseEnoughStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStuckStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flReelStartTime"
    #pragma pack(push, 1)
    class CAbility_Fathom_ReefdwellerHarpoon : public client::C_CitadelBaseAbility
    {
    public:
        bool m_bHitTarget; // 0xca0        
        [[maybe_unused]] std::uint8_t pad_0xca1[0x3]; // 0xca1
        Vector m_vPrevPos; // 0xca4        
        // metadata: MNetworkEnable
        bool m_bBulletFlying; // 0xcb0        
        // metadata: MNetworkEnable
        bool m_bHasLatchedOnce; // 0xcb1        
        // metadata: MNetworkEnable
        bool m_bLatched; // 0xcb2        
        [[maybe_unused]] std::uint8_t pad_0xcb3[0x1]; // 0xcb3
        // metadata: MNetworkEnable
        Vector m_vHarpoonTarget; // 0xcb4        
        // metadata: MNetworkEnable
        float m_flLatchedYaw; // 0xcc0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCloseEnoughStartTime; // 0xcc4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStuckStartTime; // 0xcc8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flReelStartTime; // 0xccc        
        [[maybe_unused]] std::uint8_t pad_0xcd0[0x118];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_ReefdwellerHarpoon) == 0xde8);
};
