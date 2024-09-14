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
    // Size: 0x850
    // Has VTable
    // 
    // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
    // static metadata: MNetworkOverride "m_flSimulationTime CBaseEntity"
    #pragma pack(push, 1)
    class CFuncRotating : public server::CBaseModelEntity
    {
    public:
        entity2::CEntityIOOutput m_OnStopped; // 0x768        
        entity2::CEntityIOOutput m_OnStarted; // 0x790        
        entity2::CEntityIOOutput m_OnReachedStart; // 0x7b8        
        RotationVector m_localRotationVector; // 0x7e0        
        float m_flFanFriction; // 0x7ec        
        float m_flAttenuation; // 0x7f0        
        float m_flVolume; // 0x7f4        
        float m_flTargetSpeed; // 0x7f8        
        float m_flMaxSpeed; // 0x7fc        
        float m_flBlockDamage; // 0x800        
        [[maybe_unused]] std::uint8_t pad_0x804[0x4]; // 0x804
        CUtlSymbolLarge m_NoiseRunning; // 0x808        
        bool m_bReversed; // 0x810        
        bool m_bAccelDecel; // 0x811        
        [[maybe_unused]] std::uint8_t pad_0x812[0xa]; // 0x812
        QAngle m_prevLocalAngles; // 0x81c        
        QAngle m_angStart; // 0x828        
        bool m_bStopAtStartPos; // 0x834        
        [[maybe_unused]] std::uint8_t pad_0x835[0x3]; // 0x835
        Vector m_vecClientOrigin; // 0x838        
        QAngle m_vecClientAngles; // 0x844        
        
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
        // void m_nNoiseRunningGuid; // 0x814
        // int32_t fanfriction; // 0x7fffffff
        // int32_t Volume; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncRotating because it is not a standard-layout class
    static_assert(sizeof(CFuncRotating) == 0x850);
};
