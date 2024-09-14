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
    // Size: 0xa90
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
        [[maybe_unused]] std::uint8_t pad_0x860[0x8]; // 0x860
        bool m_bForceRecreateNextUpdate; // 0x868        
        bool m_bMoveViewToPlayerNextThink; // 0x869        
        bool m_bCheckCSSClasses; // 0x86a        
        [[maybe_unused]] std::uint8_t pad_0x86b[0x5]; // 0x86b
        CTransform m_anchorDeltaTransform; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x890[0x178]; // 0x890
        client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xa08        
        [[maybe_unused]] std::uint8_t pad_0xa10[0x20]; // 0xa10
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0xa30        
        // metadata: MNetworkEnable
        bool m_bLit; // 0xa31        
        // metadata: MNetworkEnable
        bool m_bFollowPlayerAcrossTeleport; // 0xa32        
        [[maybe_unused]] std::uint8_t pad_0xa33[0x1]; // 0xa33
        // metadata: MNetworkEnable
        float m_flWidth; // 0xa34        
        // metadata: MNetworkEnable
        float m_flHeight; // 0xa38        
        // metadata: MNetworkEnable
        float m_flDPI; // 0xa3c        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0xa40        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xa44        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0xa48        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0xa4c        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0xa50        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0xa54        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0xa58        
        [[maybe_unused]] std::uint8_t pad_0xa59[0x7]; // 0xa59
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0xa60        
        // metadata: MNetworkEnable
        bool m_bOpaque; // 0xa78        
        // metadata: MNetworkEnable
        bool m_bNoDepth; // 0xa79        
        // metadata: MNetworkEnable
        bool m_bRenderBackface; // 0xa7a        
        // metadata: MNetworkEnable
        bool m_bUseOffScreenIndicator; // 0xa7b        
        // metadata: MNetworkEnable
        bool m_bExcludeFromSaveGames; // 0xa7c        
        // metadata: MNetworkEnable
        bool m_bGrabbable; // 0xa7d        
        // metadata: MNetworkEnable
        bool m_bOnlyRenderToTexture; // 0xa7e        
        // metadata: MNetworkEnable
        bool m_bDisableMipGen; // 0xa7f        
        // metadata: MNetworkEnable
        int32_t m_nExplicitImageLayout; // 0xa80        
        [[maybe_unused]] std::uint8_t pad_0xa84[0xc];
        
        // Datamap fields:
        // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xa00
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIWorldPanel) == 0xa90);
};
