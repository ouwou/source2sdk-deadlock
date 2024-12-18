#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x14
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CRemapValueUpdateItem
    {
    public:
        animgraphlib::CAnimParamHandle m_hParamIn; // 0x0        
        animgraphlib::CAnimParamHandle m_hParamOut; // 0x2        
        float m_flMinInputValue; // 0x4        
        float m_flMaxInputValue; // 0x8        
        float m_flMinOutputValue; // 0xc        
        float m_flMaxOutputValue; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CRemapValueUpdateItem, m_hParamIn) == 0x0);
    static_assert(offsetof(CRemapValueUpdateItem, m_hParamOut) == 0x2);
    static_assert(offsetof(CRemapValueUpdateItem, m_flMinInputValue) == 0x4);
    static_assert(offsetof(CRemapValueUpdateItem, m_flMaxInputValue) == 0x8);
    static_assert(offsetof(CRemapValueUpdateItem, m_flMinOutputValue) == 0xc);
    static_assert(offsetof(CRemapValueUpdateItem, m_flMaxOutputValue) == 0x10);
    
    static_assert(sizeof(CRemapValueUpdateItem) == 0x14);
};
