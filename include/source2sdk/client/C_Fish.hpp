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
    // Size: 0xbe8
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
        Vector m_pos; // 0xaf8        
        Vector m_vel; // 0xb04        
        QAngle m_angles; // 0xb10        
        int32_t m_localLifeState; // 0xb1c        
        float m_deathDepth; // 0xb20        
        float m_deathAngle; // 0xb24        
        float m_buoyancy; // 0xb28        
        [[maybe_unused]] std::uint8_t pad_0xb2c[0x4]; // 0xb2c
        client::CountdownTimer m_wiggleTimer; // 0xb30        
        float m_wigglePhase; // 0xb48        
        float m_wiggleRate; // 0xb4c        
        Vector m_actualPos; // 0xb50        
        QAngle m_actualAngles; // 0xb5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_poolOrigin; // 0xb68        
        // metadata: MNetworkEnable
        float m_waterLevel; // 0xb74        
        bool m_gotUpdate; // 0xb78        
        [[maybe_unused]] std::uint8_t pad_0xb79[0x3]; // 0xb79
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_x"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_x; // 0xb7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_y"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_y; // 0xb80        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_z"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_z; // 0xb84        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "angle_normalize_positive"
        // metadata: MNetworkBitCount "7"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "360.000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkChangeCallback "OnAngChanged"
        float m_angle; // 0xb88        
        float m_errorHistory[20]; // 0xb8c        
        int32_t m_errorHistoryIndex; // 0xbdc        
        int32_t m_errorHistoryCount; // 0xbe0        
        float m_averageError; // 0xbe4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Fish because it is not a standard-layout class
    static_assert(sizeof(C_Fish) == 0xbe8);
};
