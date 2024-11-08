#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x970
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
    // static metadata: MNetworkVarNames "string_t m_PanelClassName"
    // static metadata: MNetworkVarNames "string_t m_PanelID"
    #pragma pack(push, 1)
    class CBaseClientUIEntity : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x7c0        
        [[maybe_unused]] std::uint8_t pad_0x7c1[0x7]; // 0x7c1
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_DialogXMLName; // 0x7c8        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_PanelClassName; // 0x7d0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_PanelID; // 0x7d8        
        entity2::CEntityIOOutput m_CustomOutput0; // 0x7e0        
        entity2::CEntityIOOutput m_CustomOutput1; // 0x808        
        entity2::CEntityIOOutput m_CustomOutput2; // 0x830        
        entity2::CEntityIOOutput m_CustomOutput3; // 0x858        
        entity2::CEntityIOOutput m_CustomOutput4; // 0x880        
        entity2::CEntityIOOutput m_CustomOutput5; // 0x8a8        
        entity2::CEntityIOOutput m_CustomOutput6; // 0x8d0        
        entity2::CEntityIOOutput m_CustomOutput7; // 0x8f8        
        entity2::CEntityIOOutput m_CustomOutput8; // 0x920        
        entity2::CEntityIOOutput m_CustomOutput9; // 0x948        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseClientUIEntity because it is not a standard-layout class
    static_assert(sizeof(CBaseClientUIEntity) == 0x970);
};
