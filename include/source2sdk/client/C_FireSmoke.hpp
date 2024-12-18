#pragma once
#include "source2sdk/client/C_BaseFire.hpp"
#include "source2sdk/client/TimedEvent.hpp"
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
    class CFireOverlay;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // 
    // static metadata: MNetworkOverride "m_flScale"
    // static metadata: MNetworkOverride "m_flScaleTime"
    // static metadata: MNetworkVarNames "int32 m_nFlameModelIndex"
    // static metadata: MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
    #pragma pack(push, 1)
    class C_FireSmoke : public client::C_BaseFire
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nFlameModelIndex; // 0x570        
        // metadata: MNetworkEnable
        int32_t m_nFlameFromAboveModelIndex; // 0x574        
        float m_flScaleRegister; // 0x578        
        float m_flScaleStart; // 0x57c        
        float m_flScaleEnd; // 0x580        
        entity2::GameTime_t m_flScaleTimeStart; // 0x584        
        entity2::GameTime_t m_flScaleTimeEnd; // 0x588        
        float m_flChildFlameSpread; // 0x58c        
        [[maybe_unused]] std::uint8_t pad_0x590[0x10]; // 0x590
        float m_flClipPerc; // 0x5a0        
        bool m_bClipTested; // 0x5a4        
        bool m_bFadingOut; // 0x5a5        
        [[maybe_unused]] std::uint8_t pad_0x5a6[0x2]; // 0x5a6
        client::TimedEvent m_tParticleSpawn; // 0x5a8        
        client::CFireOverlay* m_pFireOverlay; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b8[0x20];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FireSmoke because it is not a standard-layout class
    static_assert(sizeof(C_FireSmoke) == 0x5d8);
};
