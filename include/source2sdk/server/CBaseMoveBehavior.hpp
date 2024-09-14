#pragma once
#include "source2sdk/server/CPathKeyFrame.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPathKeyFrame;
};

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x570
    // Has VTable
    #pragma pack(push, 1)
    class CBaseMoveBehavior : public server::CPathKeyFrame
    {
    public:
        int32_t m_iPositionInterpolator; // 0x530        
        int32_t m_iRotationInterpolator; // 0x534        
        float m_flAnimStartTime; // 0x538        
        float m_flAnimEndTime; // 0x53c        
        float m_flAverageSpeedAcrossFrame; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x544[0x4]; // 0x544
        server::CPathKeyFrame* m_pCurrentKeyFrame; // 0x548        
        server::CPathKeyFrame* m_pTargetKeyFrame; // 0x550        
        server::CPathKeyFrame* m_pPreKeyFrame; // 0x558        
        server::CPathKeyFrame* m_pPostKeyFrame; // 0x560        
        float m_flTimeIntoFrame; // 0x568        
        int32_t m_iDirection; // 0x56c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseMoveBehavior because it is not a standard-layout class
    static_assert(sizeof(CBaseMoveBehavior) == 0x570);
};
