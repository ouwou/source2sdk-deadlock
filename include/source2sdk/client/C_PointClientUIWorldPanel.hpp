#pragma once
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CPointOffScreenIndicatorUi;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xaa0
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
    // static metadata: MNetworkVarNames "bool m_bLit"
    // static metadata: MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
    // static metadata: MNetworkVarNames "float m_flWidth"
    // static metadata: MNetworkVarNames "float m_flHeight"
    // static metadata: MNetworkVarNames "float m_flDPI"
    // static metadata: MNetworkVarNames "float m_flInteractDistance"
    // static metadata: MNetworkVarNames "float m_flDepthOffset"
    // static metadata: MNetworkVarNames "uint32 m_unOwnerContext"
    // static metadata: MNetworkVarNames "uint32 m_unHorizontalAlign"
    // static metadata: MNetworkVarNames "uint32 m_unVerticalAlign"
    // static metadata: MNetworkVarNames "uint32 m_unOrientation"
    // static metadata: MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
    // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
    // static metadata: MNetworkVarNames "bool m_bOpaque"
    // static metadata: MNetworkVarNames "bool m_bNoDepth"
    // static metadata: MNetworkVarNames "bool m_bRenderBackface"
    // static metadata: MNetworkVarNames "bool m_bUseOffScreenIndicator"
    // static metadata: MNetworkVarNames "bool m_bExcludeFromSaveGames"
    // static metadata: MNetworkVarNames "bool m_bGrabbable"
    // static metadata: MNetworkVarNames "bool m_bOnlyRenderToTexture"
    // static metadata: MNetworkVarNames "bool m_bDisableMipGen"
    // static metadata: MNetworkVarNames "int32 m_nExplicitImageLayout"
    #pragma pack(push, 1)
    class C_PointClientUIWorldPanel : public client::C_BaseClientUIEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x870[0x8]; // 0x870
        bool m_bForceRecreateNextUpdate; // 0x878        
        bool m_bMoveViewToPlayerNextThink; // 0x879        
        bool m_bCheckCSSClasses; // 0x87a        
        [[maybe_unused]] std::uint8_t pad_0x87b[0x5]; // 0x87b
        CTransform m_anchorDeltaTransform; // 0x880        
        [[maybe_unused]] std::uint8_t pad_0x8a0[0x178]; // 0x8a0
        client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xa18        
        [[maybe_unused]] std::uint8_t pad_0xa20[0x20]; // 0xa20
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0xa40        
        // metadata: MNetworkEnable
        bool m_bLit; // 0xa41        
        // metadata: MNetworkEnable
        bool m_bFollowPlayerAcrossTeleport; // 0xa42        
        [[maybe_unused]] std::uint8_t pad_0xa43[0x1]; // 0xa43
        // metadata: MNetworkEnable
        float m_flWidth; // 0xa44        
        // metadata: MNetworkEnable
        float m_flHeight; // 0xa48        
        // metadata: MNetworkEnable
        float m_flDPI; // 0xa4c        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0xa50        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xa54        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0xa58        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0xa5c        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0xa60        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0xa64        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0xa68        
        [[maybe_unused]] std::uint8_t pad_0xa69[0x7]; // 0xa69
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0xa70        
        // metadata: MNetworkEnable
        bool m_bOpaque; // 0xa88        
        // metadata: MNetworkEnable
        bool m_bNoDepth; // 0xa89        
        // metadata: MNetworkEnable
        bool m_bRenderBackface; // 0xa8a        
        // metadata: MNetworkEnable
        bool m_bUseOffScreenIndicator; // 0xa8b        
        // metadata: MNetworkEnable
        bool m_bExcludeFromSaveGames; // 0xa8c        
        // metadata: MNetworkEnable
        bool m_bGrabbable; // 0xa8d        
        // metadata: MNetworkEnable
        bool m_bOnlyRenderToTexture; // 0xa8e        
        // metadata: MNetworkEnable
        bool m_bDisableMipGen; // 0xa8f        
        // metadata: MNetworkEnable
        int32_t m_nExplicitImageLayout; // 0xa90        
        [[maybe_unused]] std::uint8_t pad_0xa94[0xc];
        
        // Datamap fields:
        // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xa10
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIWorldPanel) == 0xaa0);
};
