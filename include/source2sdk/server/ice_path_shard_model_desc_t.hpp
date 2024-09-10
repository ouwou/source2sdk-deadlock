#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int32 m_nModelID"
    // static metadata: MNetworkVarNames "Vector2D m_vecPanelSize"
    // static metadata: MNetworkVarNames "Vector m_vecPanelVertices"
    // static metadata: MNetworkVarNames "float m_flThickness"
    // static metadata: MNetworkVarNames "CUtlStringToken m_SurfacePropStringToken"
    #pragma pack(push, 1)
    struct ice_path_shard_model_desc_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        int32_t m_nModelID; // 0x8        
        // metadata: MNetworkEnable
        Vector2D m_vecPanelSize; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4]; // 0x14
        // metadata: MNetworkEnable
        // m_vecPanelVertices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector> m_vecPanelVertices;
        char m_vecPanelVertices[0x18]; // 0x18        
        // metadata: MNetworkEnable
        float m_flThickness; // 0x30        
        // metadata: MNetworkEnable
        CUtlStringToken m_SurfacePropStringToken; // 0x34        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ice_path_shard_model_desc_t, m_nModelID) == 0x8);
    static_assert(offsetof(ice_path_shard_model_desc_t, m_vecPanelSize) == 0xc);
    static_assert(offsetof(ice_path_shard_model_desc_t, m_vecPanelVertices) == 0x18);
    static_assert(offsetof(ice_path_shard_model_desc_t, m_flThickness) == 0x30);
    static_assert(offsetof(ice_path_shard_model_desc_t, m_SurfacePropStringToken) == 0x34);
    
    static_assert(sizeof(ice_path_shard_model_desc_t) == 0x38);
};
