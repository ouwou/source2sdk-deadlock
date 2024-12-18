#pragma once
#include "source2sdk/client/BeamClipStyle_t.hpp"
#include "source2sdk/client/BeamType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x858
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "m_nModelIndex"
    // static metadata: MNetworkIncludeByName "m_nRenderFX"
    // static metadata: MNetworkIncludeByName "m_nRenderMode"
    // static metadata: MNetworkIncludeByName "m_clrRender"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkOverride "m_clrRender"
    // static metadata: MNetworkVarNames "float32 m_flFrameRate"
    // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
    // static metadata: MNetworkVarNames "uint8 m_nNumBeamEnts"
    // static metadata: MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
    // static metadata: MNetworkVarNames "HMaterialStrong m_nHaloIndex"
    // static metadata: MNetworkVarNames "BeamType_t m_nBeamType"
    // static metadata: MNetworkVarNames "uint32 m_nBeamFlags"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
    // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachIndex"
    // static metadata: MNetworkVarNames "float32 m_fWidth"
    // static metadata: MNetworkVarNames "float32 m_fEndWidth"
    // static metadata: MNetworkVarNames "float32 m_fFadeLength"
    // static metadata: MNetworkVarNames "float32 m_fHaloScale"
    // static metadata: MNetworkVarNames "float32 m_fAmplitude"
    // static metadata: MNetworkVarNames "float32 m_fStartFrame"
    // static metadata: MNetworkVarNames "float32 m_fSpeed"
    // static metadata: MNetworkVarNames "float32 m_flFrame"
    // static metadata: MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
    // static metadata: MNetworkVarNames "bool m_bTurnedOff"
    // static metadata: MNetworkVarNames "Vector m_vecEndPos"
    #pragma pack(push, 1)
    class CBeam : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "-25.000000"
        // metadata: MNetworkMaxValue "25.000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flFrameRate; // 0x7b8        
        // metadata: MNetworkEnable
        float m_flHDRColorScale; // 0x7bc        
        entity2::GameTime_t m_flFireTime; // 0x7c0        
        float m_flDamage; // 0x7c4        
        // metadata: MNetworkEnable
        uint8_t m_nNumBeamEnts; // 0x7c8        
        [[maybe_unused]] std::uint8_t pad_0x7c9[0x7]; // 0x7c9
        // metadata: MNetworkEnable
        // m_hBaseMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hBaseMaterial;
        char m_hBaseMaterial[0x8]; // 0x7d0        
        // metadata: MNetworkEnable
        // m_nHaloIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_nHaloIndex;
        char m_nHaloIndex[0x8]; // 0x7d8        
        // metadata: MNetworkEnable
        client::BeamType_t m_nBeamType; // 0x7e0        
        // metadata: MNetworkEnable
        uint32_t m_nBeamFlags; // 0x7e4        
        // metadata: MNetworkEnable
        // m_hAttachEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAttachEntity[10];
        char m_hAttachEntity[0x28]; // 0x7e8        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_nAttachIndex[10]; // 0x810        
        [[maybe_unused]] std::uint8_t pad_0x81a[0x2]; // 0x81a
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "102.300003"
        // metadata: MNetworkEncodeFlags "2"
        float m_fWidth; // 0x81c        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "102.300003"
        // metadata: MNetworkEncodeFlags "2"
        float m_fEndWidth; // 0x820        
        // metadata: MNetworkEnable
        float m_fFadeLength; // 0x824        
        // metadata: MNetworkEnable
        float m_fHaloScale; // 0x828        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "64.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_fAmplitude; // 0x82c        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "256.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_fStartFrame; // 0x830        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "100.000000"
        float m_fSpeed; // 0x834        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "256.000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkPriority "32"
        float m_flFrame; // 0x838        
        // metadata: MNetworkEnable
        client::BeamClipStyle_t m_nClipStyle; // 0x83c        
        // metadata: MNetworkEnable
        bool m_bTurnedOff; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x841[0x3]; // 0x841
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecEndPos; // 0x844        
        // m_hEndEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEndEntity;
        char m_hEndEntity[0x4]; // 0x850        
        int32_t m_nDissolveType; // 0x854        
        
        // Datamap fields:
        // float InputWidth; // 0x0
        // float InputNoise; // 0x0
        // float InputColorRedValue; // 0x0
        // float InputColorGreenValue; // 0x0
        // float InputColorBlueValue; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBeam because it is not a standard-layout class
    static_assert(sizeof(CBeam) == 0x858);
};
