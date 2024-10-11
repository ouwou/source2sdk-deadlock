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
    // Size: 0xa28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "char m_messageText"
    // static metadata: MNetworkVarNames "char m_FontName"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bFullbright"
    // static metadata: MNetworkVarNames "float m_flWorldUnitsPerPx"
    // static metadata: MNetworkVarNames "float m_flFontSize"
    // static metadata: MNetworkVarNames "float m_flDepthOffset"
    // static metadata: MNetworkVarNames "Color m_Color"
    // static metadata: MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
    // static metadata: MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
    // static metadata: MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
    #pragma pack(push, 1)
    class CPointWorldText : public server::CModelPointEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_messageText[512]; // 0x7c8        
        // metadata: MNetworkEnable
        char m_FontName[64]; // 0x9c8        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0xa08        
        // metadata: MNetworkEnable
        bool m_bFullbright; // 0xa09        
        [[maybe_unused]] std::uint8_t pad_0xa0a[0x2]; // 0xa0a
        // metadata: MNetworkEnable
        float m_flWorldUnitsPerPx; // 0xa0c        
        // metadata: MNetworkEnable
        float m_flFontSize; // 0xa10        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xa14        
        // metadata: MNetworkEnable
        Color m_Color; // 0xa18        
        // metadata: MNetworkEnable
        client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xa1c        
        // metadata: MNetworkEnable
        client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xa20        
        // metadata: MNetworkEnable
        client::PointWorldTextReorientMode_t m_nReorientMode; // 0xa24        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputSetMessage; // 0x0
        // int32_t InputSetIntMessage; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointWorldText because it is not a standard-layout class
    static_assert(sizeof(CPointWorldText) == 0xa28);
};
