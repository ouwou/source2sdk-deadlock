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
    // Size: 0x780
    // Has VTable
    #pragma pack(push, 1)
    class CFuncInteractionLayerClip : public server::CBaseModelEntity
    {
    public:
        bool m_bDisabled; // 0x768        
        [[maybe_unused]] std::uint8_t pad_0x769[0x7]; // 0x769
        CUtlSymbolLarge m_iszInteractsAs; // 0x770        
        CUtlSymbolLarge m_iszInteractsWith; // 0x778        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncInteractionLayerClip because it is not a standard-layout class
    static_assert(sizeof(CFuncInteractionLayerClip) == 0x780);
};
