#pragma once
#include "source2sdk/server/CPhysConstraint.hpp"
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
    // Size: 0x568
    // Has VTable
    #pragma pack(push, 1)
    class CPhysBallSocket : public server::CPhysConstraint
    {
    public:
        float m_flJointFriction; // 0x550        
        bool m_bEnableSwingLimit; // 0x554        
        [[maybe_unused]] std::uint8_t pad_0x555[0x3]; // 0x555
        float m_flSwingLimit; // 0x558        
        bool m_bEnableTwistLimit; // 0x55c        
        [[maybe_unused]] std::uint8_t pad_0x55d[0x3]; // 0x55d
        float m_flMinTwistAngle; // 0x560        
        float m_flMaxTwistAngle; // 0x564        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysBallSocket because it is not a standard-layout class
    static_assert(sizeof(CPhysBallSocket) == 0x568);
};
