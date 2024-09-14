#pragma once
#include "source2sdk/client/BrushSolidities_e.hpp"
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
    // Size: 0x788
    // Has VTable
    #pragma pack(push, 1)
    class CFuncBrush : public server::CBaseModelEntity
    {
    public:
        client::BrushSolidities_e m_iSolidity; // 0x768        
        int32_t m_iDisabled; // 0x76c        
        bool m_bSolidBsp; // 0x770        
        [[maybe_unused]] std::uint8_t pad_0x771[0x7]; // 0x771
        CUtlSymbolLarge m_iszExcludedClass; // 0x778        
        bool m_bInvertExclusion; // 0x780        
        bool m_bScriptedMovement; // 0x781        
        [[maybe_unused]] std::uint8_t pad_0x782[0x6];
        
        // Datamap fields:
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputSetExcluded; // 0x0
        // bool InputSetInvert; // 0x0
        // void InputSetSolid; // 0x0
        // void InputSetNonsolid; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncBrush because it is not a standard-layout class
    static_assert(sizeof(CFuncBrush) == 0x788);
};
