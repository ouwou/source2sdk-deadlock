#pragma once
#include "source2sdk/server/CBaseClientUIEntity.hpp"
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
    // Size: 0x970
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
    class CPointClientUIWorldPanel : public server::CBaseClientUIEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0x918        
        // metadata: MNetworkEnable
        bool m_bLit; // 0x919        
        // metadata: MNetworkEnable
        bool m_bFollowPlayerAcrossTeleport; // 0x91a        
        [[maybe_unused]] std::uint8_t pad_0x91b[0x1]; // 0x91b
        // metadata: MNetworkEnable
        float m_flWidth; // 0x91c        
        // metadata: MNetworkEnable
        float m_flHeight; // 0x920        
        // metadata: MNetworkEnable
        float m_flDPI; // 0x924        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0x928        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0x92c        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0x930        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0x934        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0x938        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0x93c        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0x940        
        [[maybe_unused]] std::uint8_t pad_0x941[0x7]; // 0x941
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0x948        
        // metadata: MNetworkEnable
        bool m_bOpaque; // 0x960        
        // metadata: MNetworkEnable
        bool m_bNoDepth; // 0x961        
        // metadata: MNetworkEnable
        bool m_bRenderBackface; // 0x962        
        // metadata: MNetworkEnable
        bool m_bUseOffScreenIndicator; // 0x963        
        // metadata: MNetworkEnable
        bool m_bExcludeFromSaveGames; // 0x964        
        // metadata: MNetworkEnable
        bool m_bGrabbable; // 0x965        
        // metadata: MNetworkEnable
        bool m_bOnlyRenderToTexture; // 0x966        
        // metadata: MNetworkEnable
        bool m_bDisableMipGen; // 0x967        
        // metadata: MNetworkEnable
        int32_t m_nExplicitImageLayout; // 0x968        
        [[maybe_unused]] std::uint8_t pad_0x96c[0x4];
        
        // Datamap fields:
        // void InputIgnoreUserInput; // 0x0
        // void InputAcceptUserInput; // 0x0
        // CUtlSymbolLarge InputAddCSSClass; // 0x0
        // CUtlSymbolLarge InputRemoveCSSClass; // 0x0
        // CUtlSymbolLarge InputLocalPlayerAddCSSClass; // 0x0
        // CUtlSymbolLarge InputLocalPlayerRemoveCSSClass; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointClientUIWorldPanel because it is not a standard-layout class
    static_assert(sizeof(CPointClientUIWorldPanel) == 0x970);
};
