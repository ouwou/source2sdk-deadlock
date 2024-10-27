#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x888
    // Has VTable
    // 
    // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
    // static metadata: MNetworkOverride "m_flSimulationTime CBaseEntity"
    #pragma pack(push, 1)
    class CFuncRotating : public server::CBaseModelEntity
    {
    public:
        entity2::CEntityIOOutput m_OnStopped; // 0x7a0        
        entity2::CEntityIOOutput m_OnStarted; // 0x7c8        
        entity2::CEntityIOOutput m_OnReachedStart; // 0x7f0        
        RotationVector m_localRotationVector; // 0x818        
        float m_flFanFriction; // 0x824        
        float m_flAttenuation; // 0x828        
        float m_flVolume; // 0x82c        
        float m_flTargetSpeed; // 0x830        
        float m_flMaxSpeed; // 0x834        
        float m_flBlockDamage; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x83c[0x4]; // 0x83c
        CUtlSymbolLarge m_NoiseRunning; // 0x840        
        bool m_bReversed; // 0x848        
        bool m_bAccelDecel; // 0x849        
        [[maybe_unused]] std::uint8_t pad_0x84a[0xa]; // 0x84a
        QAngle m_prevLocalAngles; // 0x854        
        QAngle m_angStart; // 0x860        
        bool m_bStopAtStartPos; // 0x86c        
        [[maybe_unused]] std::uint8_t pad_0x86d[0x3]; // 0x86d
        Vector m_vecClientOrigin; // 0x870        
        QAngle m_vecClientAngles; // 0x87c        
        
        // Datamap fields:
        // bool movewithoutpushingblockers; // 0x7fffffff
        // void CFuncRotatingSpinUpMove; // 0x0
        // void CFuncRotatingSpinDownMove; // 0x0
        // void CFuncRotatingHurtTouch; // 0x0
        // void CFuncRotatingRotatingUse; // 0x0
        // void CFuncRotatingRotateMove; // 0x0
        // void CFuncRotatingReverseMove; // 0x0
        // float InputSetSpeed; // 0x0
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputToggle; // 0x0
        // void InputReverse; // 0x0
        // void InputStartForward; // 0x0
        // void InputStartBackward; // 0x0
        // void InputStopAtStartPos; // 0x0
        // void InputSnapToStartPos; // 0x0
        // Vector InputSetStartPos; // 0x0
        // void InputEnableAccelDecel; // 0x0
        // void InputDisableAccelDecel; // 0x0
        // void m_nNoiseRunningGuid; // 0x84c
        // int32_t fanfriction; // 0x7fffffff
        // int32_t Volume; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncRotating because it is not a standard-layout class
    static_assert(sizeof(CFuncRotating) == 0x888);
};
