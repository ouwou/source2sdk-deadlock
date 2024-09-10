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
    // Size: 0x950
    // Has VTable
    #pragma pack(push, 1)
    class CPhysBox : public server::CBreakable
    {
    public:
        int32_t m_damageType; // 0x840        
        float m_massScale; // 0x844        
        int32_t m_damageToEnableMotion; // 0x848        
        float m_flForceToEnableMotion; // 0x84c        
        QAngle m_angPreferredCarryAngles; // 0x850        
        bool m_bNotSolidToWorld; // 0x85c        
        bool m_bEnableUseOutput; // 0x85d        
        [[maybe_unused]] std::uint8_t pad_0x85e[0x2]; // 0x85e
        int32_t m_iExploitableByPlayer; // 0x860        
        float m_flTouchOutputPerEntityDelay; // 0x864        
        entity2::CEntityIOOutput m_OnDamaged; // 0x868        
        entity2::CEntityIOOutput m_OnAwakened; // 0x890        
        entity2::CEntityIOOutput m_OnMotionEnabled; // 0x8b8        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x8e0        
        entity2::CEntityIOOutput m_OnStartTouch; // 0x908        
        // m_hCarryingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hCarryingPlayer;
        char m_hCarryingPlayer[0x4]; // 0x930        
        [[maybe_unused]] std::uint8_t pad_0x934[0x1c];
        
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
    
    static_assert(sizeof(CPhysBox) == 0x950);
};
