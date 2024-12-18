#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
    // Size: 0x8b8
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
    // static metadata: MNetworkVarNames "HMaterialStrong m_hSkyMaterialLightingOnly"
    // static metadata: MNetworkVarNames "bool m_bStartDisabled"
    // static metadata: MNetworkVarNames "Color m_vTintColor"
    // static metadata: MNetworkVarNames "Color m_vTintColorLightingOnly"
    // static metadata: MNetworkVarNames "float m_flBrightnessScale"
    // static metadata: MNetworkVarNames "int m_nFogType"
    // static metadata: MNetworkVarNames "float m_flFogMinStart"
    // static metadata: MNetworkVarNames "float m_flFogMinEnd"
    // static metadata: MNetworkVarNames "float m_flFogMaxStart"
    // static metadata: MNetworkVarNames "float m_flFogMaxEnd"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    #pragma pack(push, 1)
    class C_EnvSky : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
        char m_hSkyMaterial[0x8]; // 0x858        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        // m_hSkyMaterialLightingOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterialLightingOnly;
        char m_hSkyMaterialLightingOnly[0x8]; // 0x860        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        bool m_bStartDisabled; // 0x868        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        Color m_vTintColor; // 0x869        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        Color m_vTintColorLightingOnly; // 0x86d        
        [[maybe_unused]] std::uint8_t pad_0x871[0x3]; // 0x871
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        float m_flBrightnessScale; // 0x874        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        int32_t m_nFogType; // 0x878        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        float m_flFogMinStart; // 0x87c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        float m_flFogMinEnd; // 0x880        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        float m_flFogMaxStart; // 0x884        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        float m_flFogMaxEnd; // 0x888        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        bool m_bEnabled; // 0x88c        
        [[maybe_unused]] std::uint8_t pad_0x88d[0x2b];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvSky because it is not a standard-layout class
    static_assert(sizeof(C_EnvSky) == 0x8b8);
};
