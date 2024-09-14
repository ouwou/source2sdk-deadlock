#pragma once
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x68
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CUnaryUpdateNode : public animgraphlib::CAnimUpdateNodeBase
    {
    public:
        animgraphlib::CAnimUpdateNodeRef m_pChildNode; // 0x58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CUnaryUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CUnaryUpdateNode) == 0x68);
};
