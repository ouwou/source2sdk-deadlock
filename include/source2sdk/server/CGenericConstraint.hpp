#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/physicslib/JointMotion_t.hpp"
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
    // Size: 0x690
    // Has VTable
    #pragma pack(push, 1)
    class CGenericConstraint : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x560[0x8]; // 0x560
        physicslib::JointMotion_t m_nLinearMotionX; // 0x568        
        physicslib::JointMotion_t m_nLinearMotionY; // 0x56c        
        physicslib::JointMotion_t m_nLinearMotionZ; // 0x570        
        float m_flLinearFrequencyX; // 0x574        
        float m_flLinearFrequencyY; // 0x578        
        float m_flLinearFrequencyZ; // 0x57c        
        float m_flLinearDampingRatioX; // 0x580        
        float m_flLinearDampingRatioY; // 0x584        
        float m_flLinearDampingRatioZ; // 0x588        
        float m_flMaxLinearImpulseX; // 0x58c        
        float m_flMaxLinearImpulseY; // 0x590        
        float m_flMaxLinearImpulseZ; // 0x594        
        float m_flBreakAfterTimeX; // 0x598        
        float m_flBreakAfterTimeY; // 0x59c        
        float m_flBreakAfterTimeZ; // 0x5a0        
        entity2::GameTime_t m_flBreakAfterTimeStartTimeX; // 0x5a4        
        entity2::GameTime_t m_flBreakAfterTimeStartTimeY; // 0x5a8        
        entity2::GameTime_t m_flBreakAfterTimeStartTimeZ; // 0x5ac        
        float m_flBreakAfterTimeThresholdX; // 0x5b0        
        float m_flBreakAfterTimeThresholdY; // 0x5b4        
        float m_flBreakAfterTimeThresholdZ; // 0x5b8        
        float m_flNotifyForceX; // 0x5bc        
        float m_flNotifyForceY; // 0x5c0        
        float m_flNotifyForceZ; // 0x5c4        
        float m_flNotifyForceMinTimeX; // 0x5c8        
        float m_flNotifyForceMinTimeY; // 0x5cc        
        float m_flNotifyForceMinTimeZ; // 0x5d0        
        entity2::GameTime_t m_flNotifyForceLastTimeX; // 0x5d4        
        entity2::GameTime_t m_flNotifyForceLastTimeY; // 0x5d8        
        entity2::GameTime_t m_flNotifyForceLastTimeZ; // 0x5dc        
        bool m_bAxisNotifiedX; // 0x5e0        
        bool m_bAxisNotifiedY; // 0x5e1        
        bool m_bAxisNotifiedZ; // 0x5e2        
        [[maybe_unused]] std::uint8_t pad_0x5e3[0x1]; // 0x5e3
        physicslib::JointMotion_t m_nAngularMotionX; // 0x5e4        
        physicslib::JointMotion_t m_nAngularMotionY; // 0x5e8        
        physicslib::JointMotion_t m_nAngularMotionZ; // 0x5ec        
        float m_flAngularFrequencyX; // 0x5f0        
        float m_flAngularFrequencyY; // 0x5f4        
        float m_flAngularFrequencyZ; // 0x5f8        
        float m_flAngularDampingRatioX; // 0x5fc        
        float m_flAngularDampingRatioY; // 0x600        
        float m_flAngularDampingRatioZ; // 0x604        
        float m_flMaxAngularImpulseX; // 0x608        
        float m_flMaxAngularImpulseY; // 0x60c        
        float m_flMaxAngularImpulseZ; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4]; // 0x614
        entity2::CEntityIOOutput m_NotifyForceReachedX; // 0x618        
        entity2::CEntityIOOutput m_NotifyForceReachedY; // 0x640        
        entity2::CEntityIOOutput m_NotifyForceReachedZ; // 0x668        
        
        // Datamap fields:
        // void CGenericConstraintUpdateThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGenericConstraint because it is not a standard-layout class
    static_assert(sizeof(CGenericConstraint) == 0x690);
};
