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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7a0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hLocalPortalLink"
    // static metadata: MNetworkVarNames "EHANDLE m_hRemotePortalLink"
    // static metadata: MNetworkVarNames "CUtlString m_brushModelName"
    // static metadata: MNetworkVarNames "float m_flFadeStartDist"
    // static metadata: MNetworkVarNames "float m_flFadeEndDist"
    // static metadata: MNetworkVarNames "float m_flFadeStartAngle"
    // static metadata: MNetworkVarNames "float m_flFadeEndAngle"
    // static metadata: MNetworkVarNames "Color m_fadeToColor"
    #pragma pack(push, 1)
    class CRenderPortal : public server::CBaseModelEntity
    {
    public:
        CUtlSymbolLarge m_szLocalPortalLink; // 0x768        
        CUtlSymbolLarge m_szRemotePortalLink; // 0x770        
        // metadata: MNetworkEnable
        // m_hLocalPortalLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLocalPortalLink;
        char m_hLocalPortalLink[0x4]; // 0x778        
        // metadata: MNetworkEnable
        // m_hRemotePortalLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRemotePortalLink;
        char m_hRemotePortalLink[0x4]; // 0x77c        
        // metadata: MNetworkEnable
        CUtlString m_brushModelName; // 0x780        
        // metadata: MNetworkEnable
        float m_flFadeStartDist; // 0x788        
        // metadata: MNetworkEnable
        float m_flFadeEndDist; // 0x78c        
        // metadata: MNetworkEnable
        float m_flFadeStartAngle; // 0x790        
        // metadata: MNetworkEnable
        float m_flFadeEndAngle; // 0x794        
        // metadata: MNetworkEnable
        Color m_fadeToColor; // 0x798        
        [[maybe_unused]] std::uint8_t pad_0x79c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRenderPortal because it is not a standard-layout class
    static_assert(sizeof(CRenderPortal) == 0x7a0);
};
