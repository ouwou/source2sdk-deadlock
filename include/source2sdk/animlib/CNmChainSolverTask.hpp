#pragma once
#include "source2sdk/animlib/CNmTarget.hpp"
#include "source2sdk/animlib/CNmTask.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x100
    // Has VTable
    #pragma pack(push, 1)
    class CNmChainSolverTask : public animlib::CNmTask
    {
    public:
        int32_t m_nEffectorBoneIdx; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0xc]; // 0x34
        CTransform m_targetTransform; // 0x40        
        int32_t m_nNumBonesInChain; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0xc]; // 0x64
        animlib::CNmTarget m_effectorTarget; // 0x70        
        bool m_bIsTargetInWorldSpace; // 0xa0        
        bool m_bIsRunningFromDeserializedData; // 0xa1        
        [[maybe_unused]] std::uint8_t pad_0xa2[0x6]; // 0xa2
        CGlobalSymbol m_debugEffectorBoneID; // 0xa8        
        CTransform m_chainStartTransformMS; // 0xb0        
        CTransform m_debugRequestedTargetTransformMS; // 0xd0        
        float m_debugTotalChainLength; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0xf4[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmChainSolverTask because it is not a standard-layout class
    static_assert(sizeof(CNmChainSolverTask) == 0x100);
};
