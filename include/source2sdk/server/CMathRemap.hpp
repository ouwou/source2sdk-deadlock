#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x5c8
    // Has VTable
    #pragma pack(push, 1)
    class CMathRemap : public server::CLogicalEntity
    {
    public:
        float m_flInMin; // 0x4e8        
        float m_flInMax; // 0x4ec        
        float m_flOut1; // 0x4f0        
        float m_flOut2; // 0x4f4        
        float m_flOldInValue; // 0x4f8        
        bool m_bEnabled; // 0x4fc        
        [[maybe_unused]] std::uint8_t pad_0x4fd[0x3]; // 0x4fd
        // m_OutValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OutValue;
        char m_OutValue[0x28]; // 0x500        
        entity2::CEntityIOOutput m_OnRoseAboveMin; // 0x528        
        entity2::CEntityIOOutput m_OnRoseAboveMax; // 0x550        
        entity2::CEntityIOOutput m_OnFellBelowMin; // 0x578        
        entity2::CEntityIOOutput m_OnFellBelowMax; // 0x5a0        
        
        // Datamap fields:
        // float InputValue; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMathRemap because it is not a standard-layout class
    static_assert(sizeof(CMathRemap) == 0x5c8);
};
