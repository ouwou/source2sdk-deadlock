#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseRuntimeMethodArg.hpp"
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
    // Size: 0x28
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulse_PublicOutput
    {
    public:
        PulseSymbol_t m_Name; // 0x0        
        CUtlString m_Description; // 0x10        
        // m_Args has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<pulse_runtime_lib::CPulseRuntimeMethodArg> m_Args;
        char m_Args[0x10]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_PublicOutput, m_Name) == 0x0);
    static_assert(offsetof(CPulse_PublicOutput, m_Description) == 0x10);
    static_assert(offsetof(CPulse_PublicOutput, m_Args) == 0x18);
    
    static_assert(sizeof(CPulse_PublicOutput) == 0x28);
};
