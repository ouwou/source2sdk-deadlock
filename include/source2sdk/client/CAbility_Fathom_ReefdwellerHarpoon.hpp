#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0xdc8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsVisibleOnMinimap"
    // static metadata: MNetworkVarNames "bool m_bLatched"
    // static metadata: MNetworkVarNames "Vector m_vHarpoonTarget"
    // static metadata: MNetworkVarNames "float m_flLatchedYaw"
    // static metadata: MNetworkVarNames "GameTime_t m_flCloseEnoughStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStuckStartTime"
    #pragma pack(push, 1)
    class CAbility_Fathom_ReefdwellerHarpoon : public client::C_CitadelBaseAbility
    {
    public:
        bool m_bHitTarget; // 0xca0        
        [[maybe_unused]] std::uint8_t pad_0xca1[0x7]; // 0xca1
        // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<client::CCitadelModifier> m_hRegenModifier;
        char m_hRegenModifier[0x18]; // 0xca8        
        Vector m_vPrevPos; // 0xcc0        
        // metadata: MNetworkEnable
        bool m_bIsVisibleOnMinimap; // 0xccc        
        // metadata: MNetworkEnable
        bool m_bLatched; // 0xccd        
        [[maybe_unused]] std::uint8_t pad_0xcce[0x2]; // 0xcce
        // metadata: MNetworkEnable
        Vector m_vHarpoonTarget; // 0xcd0        
        // metadata: MNetworkEnable
        float m_flLatchedYaw; // 0xcdc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCloseEnoughStartTime; // 0xce0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStuckStartTime; // 0xce4        
        [[maybe_unused]] std::uint8_t pad_0xce8[0xe0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_ReefdwellerHarpoon) == 0xdc8);
};
