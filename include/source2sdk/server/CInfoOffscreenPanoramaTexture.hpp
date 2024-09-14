#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseModelEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x550
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    // static metadata: MNetworkVarNames "int m_nResolutionX"
    // static metadata: MNetworkVarNames "int m_nResolutionY"
    // static metadata: MNetworkVarNames "string_t m_szLayoutFileName"
    // static metadata: MNetworkVarNames "string_t m_RenderAttrName"
    // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_TargetEntities"
    // static metadata: MNetworkVarNames "int m_nTargetChangeCount"
    // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
    #pragma pack(push, 1)
    class CInfoOffscreenPanoramaTexture : public server::CPointEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4d9[0x3]; // 0x4d9
        // metadata: MNetworkEnable
        int32_t m_nResolutionX; // 0x4dc        
        // metadata: MNetworkEnable
        int32_t m_nResolutionY; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4]; // 0x4e4
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szLayoutFileName; // 0x4e8        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_RenderAttrName; // 0x4f0        
        // metadata: MNetworkEnable
        // m_TargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseModelEntity>> m_TargetEntities;
        char m_TargetEntities[0x18]; // 0x4f8        
        // metadata: MNetworkEnable
        int32_t m_nTargetChangeCount; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x514[0x4]; // 0x514
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0x518        
        CUtlSymbolLarge m_szTargetsName; // 0x530        
        // m_AdditionalTargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseModelEntity>> m_AdditionalTargetEntities;
        char m_AdditionalTargetEntities[0x18]; // 0x538        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // CUtlSymbolLarge InputAddCSSClass; // 0x0
        // CUtlSymbolLarge InputRemoveCSSClass; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoOffscreenPanoramaTexture because it is not a standard-layout class
    static_assert(sizeof(CInfoOffscreenPanoramaTexture) == 0x550);
};
