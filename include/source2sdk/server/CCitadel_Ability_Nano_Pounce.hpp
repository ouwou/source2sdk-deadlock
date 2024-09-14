#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xdb8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "EHANDLE m_hCurrentTarget"
    // static metadata: MNetworkVarNames "Vector m_vStartPosition"
    // static metadata: MNetworkVarNames "Vector m_vDeparturePosition"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_Pounce : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x268]; // 0xae8
        // metadata: MNetworkEnable
        bool m_bActive; // 0xd50        
        [[maybe_unused]] std::uint8_t pad_0xd51[0x3]; // 0xd51
        // metadata: MNetworkEnable
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCurrentTarget;
        char m_hCurrentTarget[0x4]; // 0xd54        
        // metadata: MNetworkEnable
        Vector m_vStartPosition; // 0xd58        
        // metadata: MNetworkEnable
        Vector m_vDeparturePosition; // 0xd64        
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flDepartureTime; // 0xd70        
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flArrivalTime; // 0xd88        
        Vector m_vLastKnownSafePos; // 0xda0        
        [[maybe_unused]] std::uint8_t pad_0xdac[0x4]; // 0xdac
        client::ParticleIndex_t m_CastStartParticle; // 0xdb0        
        [[maybe_unused]] std::uint8_t pad_0xdb4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_Pounce) == 0xdb8);
};
