#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xd10
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsVisibleOnMinimap"
    // static metadata: MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
    #pragma pack(push, 1)
    class CAbility_Fathom_LurkersAmbush : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_ChargeUpParticle; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x1c4]; // 0xafc
        // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_hRegenModifier;
        char m_hRegenModifier[0x18]; // 0xcc0        
        // m_hInvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_hInvisModifier;
        char m_hInvisModifier[0x18]; // 0xcd8        
        // metadata: MNetworkEnable
        bool m_bIsVisibleOnMinimap; // 0xcf0        
        [[maybe_unused]] std::uint8_t pad_0xcf1[0x3]; // 0xcf1
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStoppedMovingStartTime; // 0xcf4        
        Vector m_vLastPos; // 0xcf8        
        float m_flImmobilizeDuration; // 0xd04        
        entity2::GameTime_t m_flChannelTimeStarted; // 0xd08        
        [[maybe_unused]] std::uint8_t pad_0xd0c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_LurkersAmbush because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_LurkersAmbush) == 0xd10);
};
