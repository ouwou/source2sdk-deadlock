#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x860
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
    class C_RenderPortal : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hLocalPortalLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLocalPortalLink;
        char m_hLocalPortalLink[0x4]; // 0x830        
        // metadata: MNetworkEnable
        // m_hRemotePortalLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hRemotePortalLink;
        char m_hRemotePortalLink[0x4]; // 0x834        
        // metadata: MNetworkEnable
        CUtlString m_brushModelName; // 0x838        
        // metadata: MNetworkEnable
        float m_flFadeStartDist; // 0x840        
        // metadata: MNetworkEnable
        float m_flFadeEndDist; // 0x844        
        // metadata: MNetworkEnable
        float m_flFadeStartAngle; // 0x848        
        // metadata: MNetworkEnable
        float m_flFadeEndAngle; // 0x84c        
        // metadata: MNetworkEnable
        Color m_fadeToColor; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x854[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_RenderPortal because it is not a standard-layout class
    static_assert(sizeof(C_RenderPortal) == 0x860);
};
