#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_Inflow_BaseEntrypoint.hpp"
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
    // Standard-layout class: false
    // Size: 0xb8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPulseCellWithCustomDocNode
    #pragma pack(push, 1)
    class CPulseCell_Inflow_EntOutputHandler : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint
    {
    public:
        PulseSymbol_t m_SourceEntity; // 0x70        
        PulseSymbol_t m_SourceOutput; // 0x80        
        PulseSymbol_t m_TargetInput; // 0x90        
        CPulseValueFullType m_ExpectedParamType; // 0xa0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Inflow_EntOutputHandler because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Inflow_EntOutputHandler) == 0xb8);
};
