#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
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
    // Size: 0x15a8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
    // static metadata: MNetworkVarNames "Vector m_Entity_vBoxMins"
    // static metadata: MNetworkVarNames "Vector m_Entity_vBoxMaxs"
    // static metadata: MNetworkVarNames "bool m_Entity_bMoveable"
    // static metadata: MNetworkVarNames "int m_Entity_nHandshake"
    // static metadata: MNetworkVarNames "int m_Entity_nPriority"
    // static metadata: MNetworkVarNames "bool m_Entity_bStartDisabled"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeX"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeY"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
    // static metadata: MNetworkVarNames "bool m_Entity_bEnabled"
    #pragma pack(push, 1)
    class C_EnvLightProbeVolume : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x558[0xfe0]; // 0x558
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture;
        char m_Entity_hLightProbeTexture[0x8]; // 0x1538        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
        char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x1540        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
        char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x1548        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
        char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x1550        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxMins; // 0x1558        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxMaxs; // 0x1564        
        // metadata: MNetworkEnable
        bool m_Entity_bMoveable; // 0x1570        
        [[maybe_unused]] std::uint8_t pad_0x1571[0x3]; // 0x1571
        // metadata: MNetworkEnable
        int32_t m_Entity_nHandshake; // 0x1574        
        // metadata: MNetworkEnable
        int32_t m_Entity_nPriority; // 0x1578        
        // metadata: MNetworkEnable
        bool m_Entity_bStartDisabled; // 0x157c        
        [[maybe_unused]] std::uint8_t pad_0x157d[0x3]; // 0x157d
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeX; // 0x1580        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeY; // 0x1584        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeZ; // 0x1588        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasX; // 0x158c        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasY; // 0x1590        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasZ; // 0x1594        
        [[maybe_unused]] std::uint8_t pad_0x1598[0x9]; // 0x1598
        // metadata: MNetworkEnable
        bool m_Entity_bEnabled; // 0x15a1        
        [[maybe_unused]] std::uint8_t pad_0x15a2[0x6];
        
        // Datamap fields:
        // void m_Entity_pSceneObject; // 0x1598
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvLightProbeVolume because it is not a standard-layout class
    static_assert(sizeof(C_EnvLightProbeVolume) == 0x15a8);
};
