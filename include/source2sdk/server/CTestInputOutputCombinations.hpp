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
    // Size: 0x608
    // Has VTable
    #pragma pack(push, 1)
    class CTestInputOutputCombinations : public server::CLogicalEntity
    {
    public:
        entity2::CEntityIOOutput m_OnVariantVoid; // 0x4e8        
        entity2::CEntityIOOutput m_OnVariantBool; // 0x510        
        entity2::CEntityIOOutput m_OnVariantInt; // 0x538        
        entity2::CEntityIOOutput m_OnVariantFloat; // 0x560        
        entity2::CEntityIOOutput m_OnVariantString; // 0x588        
        entity2::CEntityIOOutput m_OnVariantColor; // 0x5b0        
        entity2::CEntityIOOutput m_OnVariantVector; // 0x5d8        
        bool m_bAllowEmptyInputs; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x601[0x7];
        
        // Datamap fields:
        // void InputVariantVoid; // 0x0
        // bool InputVariantBool; // 0x0
        // int32_t InputVariantInt; // 0x0
        // float InputVariantFloat; // 0x0
        // CUtlSymbolLarge InputVariantString; // 0x0
        // Color InputVariantColor; // 0x0
        // Vector InputVariantVector; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTestInputOutputCombinations because it is not a standard-layout class
    static_assert(sizeof(CTestInputOutputCombinations) == 0x608);
};
