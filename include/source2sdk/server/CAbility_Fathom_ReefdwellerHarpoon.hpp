#pragma once
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc48
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
    class CAbility_Fathom_ReefdwellerHarpoon : public server::CCitadelBaseAbility
    {
    public:
        bool m_bHitTarget; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb01[0x3]; // 0xb01
        Vector m_vPrevPos; // 0xb04        
        // metadata: MNetworkEnable
        bool m_bBulletFlying; // 0xb10        
        // metadata: MNetworkEnable
        bool m_bHasLatchedOnce; // 0xb11        
        // metadata: MNetworkEnable
        bool m_bLatched; // 0xb12        
        [[maybe_unused]] std::uint8_t pad_0xb13[0x1]; // 0xb13
        // metadata: MNetworkEnable
        Vector m_vHarpoonTarget; // 0xb14        
        // metadata: MNetworkEnable
        float m_flLatchedYaw; // 0xb20        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCloseEnoughStartTime; // 0xb24        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStuckStartTime; // 0xb28        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flReelStartTime; // 0xb2c        
        [[maybe_unused]] std::uint8_t pad_0xb30[0x118];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_ReefdwellerHarpoon) == 0xc48);
};
