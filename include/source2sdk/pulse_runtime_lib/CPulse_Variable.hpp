#pragma once
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x48
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulse_Variable
    {
    public:
        PulseSymbol_t m_Name; // 0x0        
        CUtlString m_Description; // 0x10        
        CPulseValueFullType m_Type; // 0x18        
        KeyValues3 m_DefaultValue; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x40[0x2]; // 0x40
        bool m_bIsPublic; // 0x42        
        bool m_bIsObservable; // 0x43        
        pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x44        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_Variable, m_Name) == 0x0);
    static_assert(offsetof(CPulse_Variable, m_Description) == 0x10);
    static_assert(offsetof(CPulse_Variable, m_Type) == 0x18);
    static_assert(offsetof(CPulse_Variable, m_DefaultValue) == 0x30);
    static_assert(offsetof(CPulse_Variable, m_bIsPublic) == 0x42);
    static_assert(offsetof(CPulse_Variable, m_bIsObservable) == 0x43);
    static_assert(offsetof(CPulse_Variable, m_nEditorNodeID) == 0x44);
    
    static_assert(sizeof(CPulse_Variable) == 0x48);
};
