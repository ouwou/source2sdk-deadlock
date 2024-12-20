#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class C_BaseModelEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xba0
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "int m_nColorMode"
    // static metadata: MNetworkVarNames "Color m_Color"
    // static metadata: MNetworkVarNames "float m_flColorTemperature"
    // static metadata: MNetworkVarNames "float m_flBrightness"
    // static metadata: MNetworkVarNames "float m_flBrightnessScale"
    // static metadata: MNetworkVarNames "int m_nDirectLight"
    // static metadata: MNetworkVarNames "int m_nBakedShadowIndex"
    // static metadata: MNetworkVarNames "int m_nLuminaireShape"
    // static metadata: MNetworkVarNames "float m_flLuminaireSize"
    // static metadata: MNetworkVarNames "float m_flLuminaireAnisotropy"
    // static metadata: MNetworkVarNames "CUtlString m_LightStyleString"
    // static metadata: MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
    // static metadata: MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
    // static metadata: MNetworkVarNames "CUtlString m_LightStyleEvents"
    // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_LightStyleTargets"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
    // static metadata: MNetworkVarNames "float m_flShape"
    // static metadata: MNetworkVarNames "float m_flSoftX"
    // static metadata: MNetworkVarNames "float m_flSoftY"
    // static metadata: MNetworkVarNames "float m_flSkirt"
    // static metadata: MNetworkVarNames "float m_flSkirtNear"
    // static metadata: MNetworkVarNames "Vector m_vSizeParams"
    // static metadata: MNetworkVarNames "float m_flRange"
    // static metadata: MNetworkVarNames "Vector m_vShear"
    // static metadata: MNetworkVarNames "int m_nBakeSpecularToCubemaps"
    // static metadata: MNetworkVarNames "Vector m_vBakeSpecularToCubemapsSize"
    // static metadata: MNetworkVarNames "int m_nCastShadows"
    // static metadata: MNetworkVarNames "int m_nShadowMapSize"
    // static metadata: MNetworkVarNames "int m_nShadowPriority"
    // static metadata: MNetworkVarNames "bool m_bContactShadow"
    // static metadata: MNetworkVarNames "bool m_bForceShadowsEnabled"
    // static metadata: MNetworkVarNames "int m_nBounceLight"
    // static metadata: MNetworkVarNames "float m_flBounceScale"
    // static metadata: MNetworkVarNames "float m_flMinRoughness"
    // static metadata: MNetworkVarNames "Vector m_vAlternateColor"
    // static metadata: MNetworkVarNames "float m_fAlternateColorBrightness"
    // static metadata: MNetworkVarNames "int m_nFog"
    // static metadata: MNetworkVarNames "float m_flFogStrength"
    // static metadata: MNetworkVarNames "int m_nFogShadows"
    // static metadata: MNetworkVarNames "float m_flFogScale"
    // static metadata: MNetworkVarNames "bool m_bFogMixedShadows"
    // static metadata: MNetworkVarNames "float m_flFadeSizeStart"
    // static metadata: MNetworkVarNames "float m_flFadeSizeEnd"
    // static metadata: MNetworkVarNames "float m_flShadowFadeSizeStart"
    // static metadata: MNetworkVarNames "float m_flShadowFadeSizeEnd"
    // static metadata: MNetworkVarNames "bool m_bPrecomputedFieldsValid"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
    // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
    // static metadata: MNetworkVarNames "int m_nPrecomputedSubFrusta"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin0"
    // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles0"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent0"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin1"
    // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles1"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent1"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin2"
    // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles2"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent2"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin3"
    // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles3"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent3"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin4"
    // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles4"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent4"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin5"
    // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles5"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent5"
    // static metadata: MNetworkVarNames "uint16 m_VisClusters"
    #pragma pack(push, 1)
    class C_BarnLight : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        bool m_bEnabled; // 0x858        
        [[maybe_unused]] std::uint8_t pad_0x859[0x3]; // 0x859
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        int32_t m_nColorMode; // 0x85c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Color m_Color; // 0x860        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flColorTemperature; // 0x864        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flBrightness; // 0x868        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flBrightnessScale; // 0x86c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        int32_t m_nDirectLight; // 0x870        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        int32_t m_nBakedShadowIndex; // 0x874        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        int32_t m_nLuminaireShape; // 0x878        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flLuminaireSize; // 0x87c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flLuminaireAnisotropy; // 0x880        
        [[maybe_unused]] std::uint8_t pad_0x884[0x4]; // 0x884
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "StyleChanged"
        CUtlString m_LightStyleString; // 0x888        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        entity2::GameTime_t m_flLightStyleStartTime; // 0x890        
        [[maybe_unused]] std::uint8_t pad_0x894[0x4]; // 0x894
        // metadata: MNetworkEnable
        // m_QueuedLightStyleStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlString> m_QueuedLightStyleStrings;
        char m_QueuedLightStyleStrings[0x18]; // 0x898        
        // metadata: MNetworkEnable
        // m_LightStyleEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlString> m_LightStyleEvents;
        char m_LightStyleEvents[0x18]; // 0x8b0        
        // metadata: MNetworkEnable
        // m_LightStyleTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_LightStyleTargets;
        char m_LightStyleTargets[0x18]; // 0x8c8        
        entity2::CEntityIOOutput m_StyleEvent[4]; // 0x8e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
        char m_hLightCookie[0x8]; // 0x980        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flShape; // 0x988        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flSoftX; // 0x98c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flSoftY; // 0x990        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flSkirt; // 0x994        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flSkirtNear; // 0x998        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        // metadata: MNetworkBitCount "32"
        Vector m_vSizeParams; // 0x99c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        // metadata: MNetworkBitCount "32"
        float m_flRange; // 0x9a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        // metadata: MNetworkBitCount "32"
        Vector m_vShear; // 0x9ac        
        // metadata: MNetworkEnable
        int32_t m_nBakeSpecularToCubemaps; // 0x9b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        // metadata: MNetworkBitCount "32"
        Vector m_vBakeSpecularToCubemapsSize; // 0x9bc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        int32_t m_nCastShadows; // 0x9c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        int32_t m_nShadowMapSize; // 0x9cc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        int32_t m_nShadowPriority; // 0x9d0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        bool m_bContactShadow; // 0x9d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        bool m_bForceShadowsEnabled; // 0x9d5        
        [[maybe_unused]] std::uint8_t pad_0x9d6[0x2]; // 0x9d6
        // metadata: MNetworkEnable
        int32_t m_nBounceLight; // 0x9d8        
        // metadata: MNetworkEnable
        float m_flBounceScale; // 0x9dc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flMinRoughness; // 0x9e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vAlternateColor; // 0x9e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_fAlternateColorBrightness; // 0x9f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        int32_t m_nFog; // 0x9f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flFogStrength; // 0x9f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        int32_t m_nFogShadows; // 0x9fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flFogScale; // 0xa00        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        bool m_bFogMixedShadows; // 0xa04        
        [[maybe_unused]] std::uint8_t pad_0xa05[0x3]; // 0xa05
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flFadeSizeStart; // 0xa08        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flFadeSizeEnd; // 0xa0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flShadowFadeSizeStart; // 0xa10        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flShadowFadeSizeEnd; // 0xa14        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        bool m_bPrecomputedFieldsValid; // 0xa18        
        [[maybe_unused]] std::uint8_t pad_0xa19[0x3]; // 0xa19
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedBoundsMins; // 0xa1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedBoundsMaxs; // 0xa28        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBOrigin; // 0xa34        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        QAngle m_vPrecomputedOBBAngles; // 0xa40        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBExtent; // 0xa4c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        int32_t m_nPrecomputedSubFrusta; // 0xa58        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBOrigin0; // 0xa5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        QAngle m_vPrecomputedOBBAngles0; // 0xa68        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBExtent0; // 0xa74        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBOrigin1; // 0xa80        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        QAngle m_vPrecomputedOBBAngles1; // 0xa8c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBExtent1; // 0xa98        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBOrigin2; // 0xaa4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        QAngle m_vPrecomputedOBBAngles2; // 0xab0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBExtent2; // 0xabc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBOrigin3; // 0xac8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        QAngle m_vPrecomputedOBBAngles3; // 0xad4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBExtent3; // 0xae0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBOrigin4; // 0xaec        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        QAngle m_vPrecomputedOBBAngles4; // 0xaf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBExtent4; // 0xb04        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBOrigin5; // 0xb10        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        QAngle m_vPrecomputedOBBAngles5; // 0xb1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        Vector m_vPrecomputedOBBExtent5; // 0xb28        
        [[maybe_unused]] std::uint8_t pad_0xb34[0x44]; // 0xb34
        bool m_bInitialBoneSetup; // 0xb78        
        [[maybe_unused]] std::uint8_t pad_0xb79[0x7]; // 0xb79
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        // m_VisClusters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<uint16_t> m_VisClusters;
        char m_VisClusters[0x18]; // 0xb80        
        [[maybe_unused]] std::uint8_t pad_0xb98[0x8];
        
        // Datamap fields:
        // void m_StyleEvent[0]; // 0x8e0
        // void m_StyleEvent[1]; // 0x908
        // void m_StyleEvent[2]; // 0x930
        // void m_StyleEvent[3]; // 0x958
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BarnLight because it is not a standard-layout class
    static_assert(sizeof(C_BarnLight) == 0xba0);
};
