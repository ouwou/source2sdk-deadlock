#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0xbf8
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_nModelIndex"
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkVarNames "Vector m_poolOrigin"
    // static metadata: MNetworkVarNames "float32 m_waterLevel"
    // static metadata: MNetworkVarNames "float32 m_x"
    // static metadata: MNetworkVarNames "float32 m_y"
    // static metadata: MNetworkVarNames "float32 m_z"
    // static metadata: MNetworkVarNames "float32 m_angle"
    #pragma pack(push, 1)
    class C_Fish : public client::CBaseAnimGraph
    {
    public:
        Vector m_pos; // 0xb08        
        Vector m_vel; // 0xb14        
        QAngle m_angles; // 0xb20        
        int32_t m_localLifeState; // 0xb2c        
        float m_deathDepth; // 0xb30        
        float m_deathAngle; // 0xb34        
        float m_buoyancy; // 0xb38        
        [[maybe_unused]] std::uint8_t pad_0xb3c[0x4]; // 0xb3c
        client::CountdownTimer m_wiggleTimer; // 0xb40        
        float m_wigglePhase; // 0xb58        
        float m_wiggleRate; // 0xb5c        
        Vector m_actualPos; // 0xb60        
        QAngle m_actualAngles; // 0xb6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_poolOrigin; // 0xb78        
        // metadata: MNetworkEnable
        float m_waterLevel; // 0xb84        
        bool m_gotUpdate; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb89[0x3]; // 0xb89
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_x"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_x; // 0xb8c        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_y"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_y; // 0xb90        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_z"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_z; // 0xb94        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "angle_normalize_positive"
        // metadata: MNetworkBitCount "7"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "360.000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkChangeCallback "OnAngChanged"
        float m_angle; // 0xb98        
        float m_errorHistory[20]; // 0xb9c        
        int32_t m_errorHistoryIndex; // 0xbec        
        int32_t m_errorHistoryCount; // 0xbf0        
        float m_averageError; // 0xbf4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Fish because it is not a standard-layout class
    static_assert(sizeof(C_Fish) == 0xbf8);
};
