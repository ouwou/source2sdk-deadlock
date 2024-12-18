#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf38
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
    class CCitadel_Ability_Nano_Pounce_Instant : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x230]; // 0xc98
        // metadata: MNetworkEnable
        bool m_bActive; // 0xec8        
        [[maybe_unused]] std::uint8_t pad_0xec9[0x3]; // 0xec9
        // metadata: MNetworkEnable
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCurrentTarget;
        char m_hCurrentTarget[0x4]; // 0xecc        
        // metadata: MNetworkEnable
        // m_hLastCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastCastTarget;
        char m_hLastCastTarget[0x4]; // 0xed0        
        // metadata: MNetworkEnable
        Vector m_vStartPosition; // 0xed4        
        // metadata: MNetworkEnable
        Vector m_vDeparturePosition; // 0xee0        
        [[maybe_unused]] std::uint8_t pad_0xeec[0x4]; // 0xeec
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flDepartureTime; // 0xef0        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flArrivalTime; // 0xf08        
        Vector m_vLastKnownSafePos; // 0xf20        
        [[maybe_unused]] std::uint8_t pad_0xf2c[0x2]; // 0xf2c
        // metadata: MNetworkEnable
        bool m_bIsFirstCastCompleted; // 0xf2e        
        [[maybe_unused]] std::uint8_t pad_0xf2f[0x1]; // 0xf2f
        // metadata: MNetworkEnable
        entity2::GameTime_t m_tDoubleCastWindow; // 0xf30        
        [[maybe_unused]] std::uint8_t pad_0xf34[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce_Instant because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_Pounce_Instant) == 0xf38);
};
