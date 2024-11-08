#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmIKBody
    {
    public:
        float m_flMass; // 0x0        
        Vector m_vLocalMassCenter; // 0x4        
        Vector m_vRadius; // 0x10        
        float m_flResistance; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmIKBody, m_flMass) == 0x0);
    static_assert(offsetof(CNmIKBody, m_vLocalMassCenter) == 0x4);
    static_assert(offsetof(CNmIKBody, m_vRadius) == 0x10);
    static_assert(offsetof(CNmIKBody, m_flResistance) == 0x1c);
    
    static_assert(sizeof(CNmIKBody) == 0x20);
};
