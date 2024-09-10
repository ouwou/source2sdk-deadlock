#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
#include "source2sdk/server/CCitadelBaseShivAbility.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xee8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "EHANDLE m_hCurrentTarget"
    // static metadata: MNetworkVarNames "Vector m_vStartPosition"
    // static metadata: MNetworkVarNames "Vector m_vDeparturePosition"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Shiv_KillingBlow : public server::CCitadelBaseShivAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xad8[0x1c0]; // 0xad8
        // metadata: MNetworkEnable
        bool m_bActive; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc99[0x3]; // 0xc99
        // metadata: MNetworkEnable
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCurrentTarget;
        char m_hCurrentTarget[0x4]; // 0xc9c        
        // metadata: MNetworkEnable
        Vector m_vStartPosition; // 0xca0        
        // metadata: MNetworkEnable
        Vector m_vDeparturePosition; // 0xcac        
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flDepartureTime; // 0xcb8        
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flArrivalTime; // 0xcd0        
        Vector m_vLastKnownSafePos; // 0xce8        
        [[maybe_unused]] std::uint8_t pad_0xcf4[0x4]; // 0xcf4
        client::ParticleIndex_t m_ChannelParticle; // 0xcf8        
        [[maybe_unused]] std::uint8_t pad_0xcfc[0xc]; // 0xcfc
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDrainSuppressEndTime; // 0xd08        
        [[maybe_unused]] std::uint8_t pad_0xd0c[0x1c4]; // 0xd0c
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x18]; // 0xed0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Shiv_KillingBlow because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Shiv_KillingBlow) == 0xee8);
};