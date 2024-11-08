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
    // Size: 0xa60
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
        [[maybe_unused]] std::uint8_t pad_0x890[0x8]; // 0x890
        bool m_bCheckCSSClasses; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x899[0x17f]; // 0x899
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0xa18        
        [[maybe_unused]] std::uint8_t pad_0xa19[0x3]; // 0xa19
        // metadata: MNetworkEnable
        float m_flWidth; // 0xa1c        
        // metadata: MNetworkEnable
        float m_flHeight; // 0xa20        
        // metadata: MNetworkEnable
        float m_flDPI; // 0xa24        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0xa28        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xa2c        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0xa30        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0xa34        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0xa38        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0xa3c        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0xa40        
        [[maybe_unused]] std::uint8_t pad_0xa41[0x7]; // 0xa41
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0xa48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIHUD because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIHUD) == 0xa60);
};
