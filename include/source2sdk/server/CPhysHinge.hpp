#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/server/ConstraintSoundInfo.hpp"
#include "source2sdk/vphysics2/constraint_hingeparams_t.hpp"
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
    // Size: 0x6f0
    // Has VTable
    #pragma pack(push, 1)
    class CPhysHinge : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x550[0x8]; // 0x550
        server::ConstraintSoundInfo m_soundInfo; // 0x558        
        entity2::CEntityIOOutput m_NotifyMinLimitReached; // 0x5e0        
        entity2::CEntityIOOutput m_NotifyMaxLimitReached; // 0x608        
        bool m_bAtMinLimit; // 0x630        
        bool m_bAtMaxLimit; // 0x631        
        [[maybe_unused]] std::uint8_t pad_0x632[0x2]; // 0x632
        vphysics2::constraint_hingeparams_t m_hinge; // 0x634        
        float m_hingeFriction; // 0x674        
        float m_systemLoadScale; // 0x678        
        bool m_bIsAxisLocal; // 0x67c        
        [[maybe_unused]] std::uint8_t pad_0x67d[0x3]; // 0x67d
        float m_flMinRotation; // 0x680        
        float m_flMaxRotation; // 0x684        
        float m_flInitialRotation; // 0x688        
        float m_flMotorFrequency; // 0x68c        
        float m_flMotorDampingRatio; // 0x690        
        float m_flAngleSpeed; // 0x694        
        float m_flAngleSpeedThreshold; // 0x698        
        [[maybe_unused]] std::uint8_t pad_0x69c[0x4]; // 0x69c
        entity2::CEntityIOOutput m_OnStartMoving; // 0x6a0        
        entity2::CEntityIOOutput m_OnStopMoving; // 0x6c8        
        
        // Datamap fields:
        // Vector m_hinge.worldPosition; // 0x634
        // Vector m_hinge.worldAxisDirection; // 0x640
        // float InputSetMotorTargetAngle; // 0x0
        // float InputSetVelocity; // 0x0
        // float InputSetHingeFriction; // 0x0
        // float InputSetMinLimit; // 0x0
        // float InputSetMaxLimit; // 0x0
        // void CPhysHingeSoundThink; // 0x0
        // void CPhysHingeLimitThink; // 0x0
        // void CPhysHingeMoveThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysHinge because it is not a standard-layout class
    static_assert(sizeof(CPhysHinge) == 0x6f0);
};
