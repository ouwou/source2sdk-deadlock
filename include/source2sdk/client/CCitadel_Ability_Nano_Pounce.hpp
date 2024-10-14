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
    // Size: 0xf30
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
    class CCitadel_Ability_Nano_Pounce : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc90[0x230]; // 0xc90
        // metadata: MNetworkEnable
        bool m_bActive; // 0xec0        
        [[maybe_unused]] std::uint8_t pad_0xec1[0x3]; // 0xec1
        // metadata: MNetworkEnable
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCurrentTarget;
        char m_hCurrentTarget[0x4]; // 0xec4        
        // metadata: MNetworkEnable
        // m_hLastCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastCastTarget;
        char m_hLastCastTarget[0x4]; // 0xec8        
        // metadata: MNetworkEnable
        Vector m_vStartPosition; // 0xecc        
        // metadata: MNetworkEnable
        Vector m_vDeparturePosition; // 0xed8        
        [[maybe_unused]] std::uint8_t pad_0xee4[0x4]; // 0xee4
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flDepartureTime; // 0xee8        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flArrivalTime; // 0xf00        
        Vector m_vLastKnownSafePos; // 0xf18        
        [[maybe_unused]] std::uint8_t pad_0xf24[0x2]; // 0xf24
        // metadata: MNetworkEnable
        bool m_bIsFirstCastCompleted; // 0xf26        
        [[maybe_unused]] std::uint8_t pad_0xf27[0x1]; // 0xf27
        // metadata: MNetworkEnable
        entity2::GameTime_t m_tDoubleCastWindow; // 0xf28        
        [[maybe_unused]] std::uint8_t pad_0xf2c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_Pounce) == 0xf30);
};
