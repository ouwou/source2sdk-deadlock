#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1068
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
    class CCitadel_Ability_Shiv_KillingBlow : public client::CCitadelBaseShivAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0x1c0]; // 0xc80
        // metadata: MNetworkEnable
        bool m_bActive; // 0xe40        
        [[maybe_unused]] std::uint8_t pad_0xe41[0x3]; // 0xe41
        // metadata: MNetworkEnable
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCurrentTarget;
        char m_hCurrentTarget[0x4]; // 0xe44        
        // metadata: MNetworkEnable
        Vector m_vStartPosition; // 0xe48        
        // metadata: MNetworkEnable
        Vector m_vDeparturePosition; // 0xe54        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flDepartureTime; // 0xe60        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flArrivalTime; // 0xe78        
        Vector m_vLastKnownSafePos; // 0xe90        
        [[maybe_unused]] std::uint8_t pad_0xe9c[0x4]; // 0xe9c
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDrainSuppressEndTime; // 0xea0        
        [[maybe_unused]] std::uint8_t pad_0xea4[0x1c4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Shiv_KillingBlow because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Shiv_KillingBlow) == 0x1068);
};
