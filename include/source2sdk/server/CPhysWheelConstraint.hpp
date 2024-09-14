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
    // Size: 0x580
    // Has VTable
    #pragma pack(push, 1)
    class CPhysWheelConstraint : public server::CPhysConstraint
    {
    public:
        float m_flSuspensionFrequency; // 0x550        
        float m_flSuspensionDampingRatio; // 0x554        
        float m_flSuspensionHeightOffset; // 0x558        
        bool m_bEnableSuspensionLimit; // 0x55c        
        [[maybe_unused]] std::uint8_t pad_0x55d[0x3]; // 0x55d
        float m_flMinSuspensionOffset; // 0x560        
        float m_flMaxSuspensionOffset; // 0x564        
        bool m_bEnableSteeringLimit; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x569[0x3]; // 0x569
        float m_flMinSteeringAngle; // 0x56c        
        float m_flMaxSteeringAngle; // 0x570        
        float m_flSteeringAxisFriction; // 0x574        
        float m_flSpinAxisFriction; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x57c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysWheelConstraint because it is not a standard-layout class
    static_assert(sizeof(CPhysWheelConstraint) == 0x580);
};
