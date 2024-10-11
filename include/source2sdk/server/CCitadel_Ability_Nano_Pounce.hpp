#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd90
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "EHANDLE m_hCurrentTarget"
    // static metadata: MNetworkVarNames "EHANDLE m_hLastCastTarget"
    // static metadata: MNetworkVarNames "Vector m_vStartPosition"
    // static metadata: MNetworkVarNames "Vector m_vDeparturePosition"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
    // static metadata: MNetworkVarNames "bool m_bIsFirstCastCompleted"
    // static metadata: MNetworkVarNames "GameTime_t m_tDoubleCastWindow"
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_Pounce : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf0[0x230]; // 0xaf0
        // metadata: MNetworkEnable
        bool m_bActive; // 0xd20        
        [[maybe_unused]] std::uint8_t pad_0xd21[0x3]; // 0xd21
        // metadata: MNetworkEnable
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCurrentTarget;
        char m_hCurrentTarget[0x4]; // 0xd24        
        // metadata: MNetworkEnable
        // m_hLastCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastCastTarget;
        char m_hLastCastTarget[0x4]; // 0xd28        
        // metadata: MNetworkEnable
        Vector m_vStartPosition; // 0xd2c        
        // metadata: MNetworkEnable
        Vector m_vDeparturePosition; // 0xd38        
        [[maybe_unused]] std::uint8_t pad_0xd44[0x4]; // 0xd44
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flDepartureTime; // 0xd48        
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flArrivalTime; // 0xd60        
        Vector m_vLastKnownSafePos; // 0xd78        
        [[maybe_unused]] std::uint8_t pad_0xd84[0x2]; // 0xd84
        // metadata: MNetworkEnable
        bool m_bIsFirstCastCompleted; // 0xd86        
        [[maybe_unused]] std::uint8_t pad_0xd87[0x1]; // 0xd87
        // metadata: MNetworkEnable
        entity2::GameTime_t m_tDoubleCastWindow; // 0xd88        
        client::ParticleIndex_t m_CastStartParticle; // 0xd8c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_Pounce) == 0xd90);
};
