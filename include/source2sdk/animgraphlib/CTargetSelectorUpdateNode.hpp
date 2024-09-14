#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
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
    // Size: 0x78
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CTargetSelectorUpdateNode : public animgraphlib::CAnimUpdateNodeBase
    {
    public:
        // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CAnimUpdateNodeRef> m_children;
        char m_children[0x18]; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x70[0x4]; // 0x70
        animgraphlib::CAnimParamHandle m_hPositionParameter; // 0x74        
        animgraphlib::CAnimParamHandle m_hOrientationParameter; // 0x76        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTargetSelectorUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CTargetSelectorUpdateNode) == 0x78);
};
