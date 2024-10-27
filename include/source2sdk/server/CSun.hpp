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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7e8
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_clrRender"
    // static metadata: MNetworkVarNames "Vector m_vDirection"
    // static metadata: MNetworkVarNames "Color m_clrOverlay"
    // static metadata: MNetworkVarNames "string_t m_iszEffectName"
    // static metadata: MNetworkVarNames "string_t m_iszSSEffectName"
    // static metadata: MNetworkVarNames "bool m_bOn"
    // static metadata: MNetworkVarNames "bool m_bmaxColor"
    // static metadata: MNetworkVarNames "float32 m_flSize"
    // static metadata: MNetworkVarNames "float32 m_flRotation"
    // static metadata: MNetworkVarNames "float32 m_flHazeScale"
    // static metadata: MNetworkVarNames "float32 m_flAlphaHaze"
    // static metadata: MNetworkVarNames "float32 m_flAlphaHdr"
    // static metadata: MNetworkVarNames "float32 m_flAlphaScale"
    // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
    // static metadata: MNetworkVarNames "float32 m_flFarZScale"
    #pragma pack(push, 1)
    class CSun : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vDirection; // 0x7a0        
        // metadata: MNetworkEnable
        Color m_clrOverlay; // 0x7ac        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszEffectName; // 0x7b0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSSEffectName; // 0x7b8        
        // metadata: MNetworkEnable
        bool m_bOn; // 0x7c0        
        // metadata: MNetworkEnable
        bool m_bmaxColor; // 0x7c1        
        [[maybe_unused]] std::uint8_t pad_0x7c2[0x2]; // 0x7c2
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "100.000000"
        float m_flSize; // 0x7c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-360.000000"
        // metadata: MNetworkMaxValue "360.000000"
        float m_flRotation; // 0x7c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "100.000000"
        float m_flHazeScale; // 0x7cc        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "2.000000"
        float m_flAlphaHaze; // 0x7d0        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "2.000000"
        float m_flAlphaHdr; // 0x7d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "2.000000"
        float m_flAlphaScale; // 0x7d8        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "100.000000"
        float m_flHDRColorScale; // 0x7dc        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        float m_flFarZScale; // 0x7e0        
        [[maybe_unused]] std::uint8_t pad_0x7e4[0x4];
        
        // Datamap fields:
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // Color InputSetColor; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSun because it is not a standard-layout class
    static_assert(sizeof(CSun) == 0x7e8);
};
