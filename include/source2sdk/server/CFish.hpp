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
    // Size: 0xb40
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
        char m_pool[0x4]; // 0xa38        
        uint32_t m_id; // 0xa3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_x"
        float m_x; // 0xa40        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_y"
        float m_y; // 0xa44        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_z"
        float m_z; // 0xa48        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "angle_normalize_positive"
        // metadata: MNetworkBitCount "7"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "360.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_angle; // 0xa4c        
        float m_angleChange; // 0xa50        
        Vector m_forward; // 0xa54        
        Vector m_perp; // 0xa60        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_poolOrigin; // 0xa6c        
        // metadata: MNetworkEnable
        float m_waterLevel; // 0xa78        
        float m_speed; // 0xa7c        
        float m_desiredSpeed; // 0xa80        
        float m_calmSpeed; // 0xa84        
        float m_panicSpeed; // 0xa88        
        float m_avoidRange; // 0xa8c        
        server::CountdownTimer m_turnTimer; // 0xa90        
        bool m_turnClockwise; // 0xaa8        
        [[maybe_unused]] std::uint8_t pad_0xaa9[0x7]; // 0xaa9
        server::CountdownTimer m_goTimer; // 0xab0        
        server::CountdownTimer m_moveTimer; // 0xac8        
        server::CountdownTimer m_panicTimer; // 0xae0        
        server::CountdownTimer m_disperseTimer; // 0xaf8        
        server::CountdownTimer m_proximityTimer; // 0xb10        
        // m_visible has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CFish*> m_visible;
        char m_visible[0x18]; // 0xb28        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFish because it is not a standard-layout class
    static_assert(sizeof(CFish) == 0xb40);
};
