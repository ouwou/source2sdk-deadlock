#pragma once
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x818
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
    class CEnvSky : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
        char m_hSkyMaterial[0x8]; // 0x7b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        // m_hSkyMaterialLightingOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterialLightingOnly;
        char m_hSkyMaterialLightingOnly[0x8]; // 0x7c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        bool m_bStartDisabled; // 0x7c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        Color m_vTintColor; // 0x7c9        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        Color m_vTintColorLightingOnly; // 0x7cd        
        [[maybe_unused]] std::uint8_t pad_0x7d1[0x3]; // 0x7d1
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        float m_flBrightnessScale; // 0x7d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        int32_t m_nFogType; // 0x7d8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        float m_flFogMinStart; // 0x7dc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        float m_flFogMinEnd; // 0x7e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        float m_flFogMaxStart; // 0x7e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        float m_flFogMaxEnd; // 0x7e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "SkyStateChanged"
        bool m_bEnabled; // 0x7ec        
        [[maybe_unused]] std::uint8_t pad_0x7ed[0x2b];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvSky because it is not a standard-layout class
    static_assert(sizeof(CEnvSky) == 0x818);
};
