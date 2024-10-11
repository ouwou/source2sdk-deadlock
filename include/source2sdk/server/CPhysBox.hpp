#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakable.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9b0
    // Has VTable
    #pragma pack(push, 1)
    class CPhysBox : public server::CBreakable
    {
    public:
        int32_t m_damageType; // 0x8a0        
        int32_t m_damageToEnableMotion; // 0x8a4        
        float m_flForceToEnableMotion; // 0x8a8        
        QAngle m_angPreferredCarryAngles; // 0x8ac        
        bool m_bNotSolidToWorld; // 0x8b8        
        bool m_bEnableUseOutput; // 0x8b9        
        [[maybe_unused]] std::uint8_t pad_0x8ba[0x2]; // 0x8ba
        int32_t m_iExploitableByPlayer; // 0x8bc        
        float m_flTouchOutputPerEntityDelay; // 0x8c0        
        [[maybe_unused]] std::uint8_t pad_0x8c4[0x4]; // 0x8c4
        entity2::CEntityIOOutput m_OnDamaged; // 0x8c8        
        entity2::CEntityIOOutput m_OnAwakened; // 0x8f0        
        entity2::CEntityIOOutput m_OnMotionEnabled; // 0x918        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x940        
        entity2::CEntityIOOutput m_OnStartTouch; // 0x968        
        // m_hCarryingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hCarryingPlayer;
        char m_hCarryingPlayer[0x4]; // 0x990        
        [[maybe_unused]] std::uint8_t pad_0x994[0x1c];
        
        // Datamap fields:
        // void InputWake; // 0x0
        // void InputSleep; // 0x0
        // void InputEnableMotion; // 0x0
        // void InputDisableMotion; // 0x0
        // void InputForceDrop; // 0x0
        // void InputDisableFloating; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysBox because it is not a standard-layout class
    static_assert(sizeof(CPhysBox) == 0x9b0);
};
