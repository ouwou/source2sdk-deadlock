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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
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
    #pragma pack(push, 1)
    class C_PointClientUIHUD : public client::C_BaseClientUIEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x870[0x8]; // 0x870
        bool m_bCheckCSSClasses; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x879[0x17f]; // 0x879
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0x9f8        
        [[maybe_unused]] std::uint8_t pad_0x9f9[0x3]; // 0x9f9
        // metadata: MNetworkEnable
        float m_flWidth; // 0x9fc        
        // metadata: MNetworkEnable
        float m_flHeight; // 0xa00        
        // metadata: MNetworkEnable
        float m_flDPI; // 0xa04        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0xa08        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xa0c        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0xa10        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0xa14        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0xa18        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0xa1c        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0xa20        
        [[maybe_unused]] std::uint8_t pad_0xa21[0x7]; // 0xa21
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0xa28        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIHUD because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIHUD) == 0xa40);
};
