#pragma once
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CFishPool;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xaa8
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_nModelIndex"
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkVarNames "float32 m_x"
    // static metadata: MNetworkVarNames "float32 m_y"
    // static metadata: MNetworkVarNames "float32 m_z"
    // static metadata: MNetworkVarNames "float32 m_angle"
    // static metadata: MNetworkVarNames "Vector m_poolOrigin"
    // static metadata: MNetworkVarNames "float32 m_waterLevel"
    #pragma pack(push, 1)
    class CFish : public server::CBaseAnimGraph
    {
    public:
        // m_pool has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CFishPool> m_pool;
        char m_pool[0x4]; // 0x9a0        
        uint32_t m_id; // 0x9a4        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_x"
        float m_x; // 0x9a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_y"
        float m_y; // 0x9ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_z"
        float m_z; // 0x9b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "angle_normalize_positive"
        // metadata: MNetworkBitCount "7"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "360.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_angle; // 0x9b4        
        float m_angleChange; // 0x9b8        
        Vector m_forward; // 0x9bc        
        Vector m_perp; // 0x9c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_poolOrigin; // 0x9d4        
        // metadata: MNetworkEnable
        float m_waterLevel; // 0x9e0        
        float m_speed; // 0x9e4        
        float m_desiredSpeed; // 0x9e8        
        float m_calmSpeed; // 0x9ec        
        float m_panicSpeed; // 0x9f0        
        float m_avoidRange; // 0x9f4        
        server::CountdownTimer m_turnTimer; // 0x9f8        
        bool m_turnClockwise; // 0xa10        
        [[maybe_unused]] std::uint8_t pad_0xa11[0x7]; // 0xa11
        server::CountdownTimer m_goTimer; // 0xa18        
        server::CountdownTimer m_moveTimer; // 0xa30        
        server::CountdownTimer m_panicTimer; // 0xa48        
        server::CountdownTimer m_disperseTimer; // 0xa60        
        server::CountdownTimer m_proximityTimer; // 0xa78        
        // m_visible has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CFish*> m_visible;
        char m_visible[0x18]; // 0xa90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFish because it is not a standard-layout class
    static_assert(sizeof(CFish) == 0xaa8);
};
