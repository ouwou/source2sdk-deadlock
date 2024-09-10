#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x1
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FireUserEntityIO_t
    {
    public:
        bool m_bFireUser1; // 0x0        
        bool m_bFireUser2; // 0x1        
        bool m_bFireUser3; // 0x2        
        bool m_bFireUser4; // 0x3        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FireUserEntityIO_t, m_bFireUser1) == 0x0);
    static_assert(offsetof(FireUserEntityIO_t, m_bFireUser2) == 0x1);
    static_assert(offsetof(FireUserEntityIO_t, m_bFireUser3) == 0x2);
    static_assert(offsetof(FireUserEntityIO_t, m_bFireUser4) == 0x3);
    
    static_assert(sizeof(FireUserEntityIO_t) == 0x4);
};
