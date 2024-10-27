#pragma once
#include "source2sdk/client/PointWorldTextJustifyHorizontal_t.hpp"
#include "source2sdk/client/PointWorldTextJustifyVertical_t.hpp"
#include "source2sdk/client/PointWorldTextReorientMode_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"
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
    // Size: 0xa08
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "char m_messageText"
    // static metadata: MNetworkVarNames "char m_FontName"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bFullbright"
    // static metadata: MNetworkVarNames "float m_flWorldUnitsPerPx"
    // static metadata: MNetworkVarNames "float m_flFontSize"
    // static metadata: MNetworkVarNames "float m_flDepthOffset"
    // static metadata: MNetworkVarNames "bool m_bDrawBackground"
    // static metadata: MNetworkVarNames "Color m_Color"
    // static metadata: MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
    // static metadata: MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
    // static metadata: MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
    #pragma pack(push, 1)
    class CPointWorldText : public server::CModelPointEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_messageText[512]; // 0x7a0        
        // metadata: MNetworkEnable
        char m_FontName[64]; // 0x9a0        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x9e0        
        // metadata: MNetworkEnable
        bool m_bFullbright; // 0x9e1        
        [[maybe_unused]] std::uint8_t pad_0x9e2[0x2]; // 0x9e2
        // metadata: MNetworkEnable
        float m_flWorldUnitsPerPx; // 0x9e4        
        // metadata: MNetworkEnable
        float m_flFontSize; // 0x9e8        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0x9ec        
        // metadata: MNetworkEnable
        bool m_bDrawBackground; // 0x9f0        
        // metadata: MNetworkEnable
        Color m_Color; // 0x9f1        
        [[maybe_unused]] std::uint8_t pad_0x9f5[0x3]; // 0x9f5
        // metadata: MNetworkEnable
        client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x9f8        
        // metadata: MNetworkEnable
        client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x9fc        
        // metadata: MNetworkEnable
        client::PointWorldTextReorientMode_t m_nReorientMode; // 0xa00        
        [[maybe_unused]] std::uint8_t pad_0xa04[0x4];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputSetMessage; // 0x0
        // int32_t InputSetIntMessage; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointWorldText because it is not a standard-layout class
    static_assert(sizeof(CPointWorldText) == 0xa08);
};
