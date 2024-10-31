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
    // Size: 0xc20
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
        bool m_bHitTarget; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xaf9[0x7]; // 0xaf9
        // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_hRegenModifier;
        char m_hRegenModifier[0x18]; // 0xb00        
        Vector m_vPrevPos; // 0xb18        
        // metadata: MNetworkEnable
        bool m_bIsVisibleOnMinimap; // 0xb24        
        // metadata: MNetworkEnable
        bool m_bLatched; // 0xb25        
        [[maybe_unused]] std::uint8_t pad_0xb26[0x2]; // 0xb26
        // metadata: MNetworkEnable
        Vector m_vHarpoonTarget; // 0xb28        
        // metadata: MNetworkEnable
        float m_flLatchedYaw; // 0xb34        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCloseEnoughStartTime; // 0xb38        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStuckStartTime; // 0xb3c        
        [[maybe_unused]] std::uint8_t pad_0xb40[0xe0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_ReefdwellerHarpoon) == 0xc20);
};
