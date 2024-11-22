#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CPoseHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
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
    // Size: 0xb0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootAdjustmentUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x70[0x8]; // 0x70
        // m_clips has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::HSequence> m_clips;
        char m_clips[0x18]; // 0x78        
        animgraphlib::CPoseHandle m_hBasePoseCacheHandle; // 0x90        
        animgraphlib::CAnimParamHandle m_facingTarget; // 0x94        
        [[maybe_unused]] std::uint8_t pad_0x96[0x2]; // 0x96
        float m_flTurnTimeMin; // 0x98        
        float m_flTurnTimeMax; // 0x9c        
        float m_flStepHeightMax; // 0xa0        
        float m_flStepHeightMaxAngle; // 0xa4        
        bool m_bResetChild; // 0xa8        
        bool m_bAnimationDriven; // 0xa9        
        [[maybe_unused]] std::uint8_t pad_0xaa[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootAdjustmentUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CFootAdjustmentUpdateNode) == 0xb0);
};
