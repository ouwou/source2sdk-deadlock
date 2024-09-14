#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x788
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
    // static metadata: MNetworkIncludeByName "m_clrRender"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "uint32 m_nHorizontalSize"
    // static metadata: MNetworkVarNames "uint32 m_nVerticalSize"
    // static metadata: MNetworkVarNames "uint32 m_nMinDist"
    // static metadata: MNetworkVarNames "uint32 m_nMaxDist"
    // static metadata: MNetworkVarNames "uint32 m_nOuterMaxDist"
    // static metadata: MNetworkVarNames "float32 m_flGlowProxySize"
    // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
    #pragma pack(push, 1)
    class CLightGlow : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_nHorizontalSize; // 0x768        
        // metadata: MNetworkEnable
        uint32_t m_nVerticalSize; // 0x76c        
        // metadata: MNetworkEnable
        uint32_t m_nMinDist; // 0x770        
        // metadata: MNetworkEnable
        uint32_t m_nMaxDist; // 0x774        
        // metadata: MNetworkEnable
        uint32_t m_nOuterMaxDist; // 0x778        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "6"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "64.000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flGlowProxySize; // 0x77c        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "100.000000"
        float m_flHDRColorScale; // 0x780        
        [[maybe_unused]] std::uint8_t pad_0x784[0x4];
        
        // Datamap fields:
        // Color InputColor; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLightGlow because it is not a standard-layout class
    static_assert(sizeof(CLightGlow) == 0x788);
};
