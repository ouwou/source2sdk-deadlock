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
    // Size: 0xac0
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
        [[maybe_unused]] std::uint8_t pad_0x888[0x8]; // 0x888
        bool m_bForceRecreateNextUpdate; // 0x890        
        bool m_bMoveViewToPlayerNextThink; // 0x891        
        bool m_bCheckCSSClasses; // 0x892        
        [[maybe_unused]] std::uint8_t pad_0x893[0xd]; // 0x893
        CTransform m_anchorDeltaTransform; // 0x8a0        
        [[maybe_unused]] std::uint8_t pad_0x8c0[0x178]; // 0x8c0
        client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xa38        
        [[maybe_unused]] std::uint8_t pad_0xa40[0x20]; // 0xa40
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0xa60        
        // metadata: MNetworkEnable
        bool m_bLit; // 0xa61        
        // metadata: MNetworkEnable
        bool m_bFollowPlayerAcrossTeleport; // 0xa62        
        [[maybe_unused]] std::uint8_t pad_0xa63[0x1]; // 0xa63
        // metadata: MNetworkEnable
        float m_flWidth; // 0xa64        
        // metadata: MNetworkEnable
        float m_flHeight; // 0xa68        
        // metadata: MNetworkEnable
        float m_flDPI; // 0xa6c        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0xa70        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xa74        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0xa78        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0xa7c        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0xa80        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0xa84        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0xa88        
        [[maybe_unused]] std::uint8_t pad_0xa89[0x7]; // 0xa89
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0xa90        
        // metadata: MNetworkEnable
        bool m_bOpaque; // 0xaa8        
        // metadata: MNetworkEnable
        bool m_bNoDepth; // 0xaa9        
        // metadata: MNetworkEnable
        bool m_bRenderBackface; // 0xaaa        
        // metadata: MNetworkEnable
        bool m_bUseOffScreenIndicator; // 0xaab        
        // metadata: MNetworkEnable
        bool m_bExcludeFromSaveGames; // 0xaac        
        // metadata: MNetworkEnable
        bool m_bGrabbable; // 0xaad        
        // metadata: MNetworkEnable
        bool m_bOnlyRenderToTexture; // 0xaae        
        // metadata: MNetworkEnable
        bool m_bDisableMipGen; // 0xaaf        
        // metadata: MNetworkEnable
        int32_t m_nExplicitImageLayout; // 0xab0        
        [[maybe_unused]] std::uint8_t pad_0xab4[0xc];
        
        // Datamap fields:
        // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xa30
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIWorldPanel) == 0xac0);
};
