#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0xc28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsVisibleOnMinimap"
    // static metadata: MNetworkVarNames "bool m_bLatched"
    // static metadata: MNetworkVarNames "Vector m_vHarpoonTarget"
    // static metadata: MNetworkVarNames "float m_flLatchedYaw"
    // static metadata: MNetworkVarNames "GameTime_t m_flCloseEnoughStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStuckStartTime"
    #pragma pack(push, 1)
    class CAbility_Fathom_ReefdwellerHarpoon : public server::CCitadelBaseAbility
    {
    public:
        bool m_bHitTarget; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb01[0x7]; // 0xb01
        // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_hRegenModifier;
        char m_hRegenModifier[0x18]; // 0xb08        
        Vector m_vPrevPos; // 0xb20        
        // metadata: MNetworkEnable
        bool m_bIsVisibleOnMinimap; // 0xb2c        
        // metadata: MNetworkEnable
        bool m_bLatched; // 0xb2d        
        [[maybe_unused]] std::uint8_t pad_0xb2e[0x2]; // 0xb2e
        // metadata: MNetworkEnable
        Vector m_vHarpoonTarget; // 0xb30        
        // metadata: MNetworkEnable
        float m_flLatchedYaw; // 0xb3c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCloseEnoughStartTime; // 0xb40        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStuckStartTime; // 0xb44        
        [[maybe_unused]] std::uint8_t pad_0xb48[0xe0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_ReefdwellerHarpoon) == 0xc28);
};
