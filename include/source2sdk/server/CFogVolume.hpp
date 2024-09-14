#pragma once
#include "source2sdk/server/CServerOnlyModelEntity.hpp"
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
    // Size: 0x790
    // Has VTable
    #pragma pack(push, 1)
    class CFogVolume : public server::CServerOnlyModelEntity
    {
    public:
        CUtlSymbolLarge m_fogName; // 0x768        
        CUtlSymbolLarge m_postProcessName; // 0x770        
        CUtlSymbolLarge m_colorCorrectionName; // 0x778        
        [[maybe_unused]] std::uint8_t pad_0x780[0x8]; // 0x780
        bool m_bDisabled; // 0x788        
        bool m_bInFogVolumesList; // 0x789        
        [[maybe_unused]] std::uint8_t pad_0x78a[0x6];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // CHandle< CBaseEntity > m_hFogController; // 0x780
        // CHandle< CBaseEntity > m_hColorCorrectionController; // 0x784
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFogVolume because it is not a standard-layout class
    static_assert(sizeof(CFogVolume) == 0x790);
};
