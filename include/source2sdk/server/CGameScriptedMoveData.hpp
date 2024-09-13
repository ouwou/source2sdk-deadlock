#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/ForcedCrouchState_t.hpp"
#include "source2sdk/server/ScriptedMoveType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x70
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CGameScriptedMoveData
    {
    public:
        Vector m_vAccumulatedRootMotion; // 0x0        
        Vector m_vDest; // 0xc        
        Vector m_vSrc; // 0x18        
        QAngle m_angSrc; // 0x24        
        QAngle m_angDst; // 0x30        
        QAngle m_angCurrent; // 0x3c        
        // m_hDestEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDestEntity;
        char m_hDestEntity[0x4]; // 0x48        
        float m_flLockedSpeed; // 0x4c        
        float m_flAngRate; // 0x50        
        float m_flDuration; // 0x54        
        entity2::GameTime_t m_flStartTime; // 0x58        
        bool m_bActive; // 0x5c        
        bool m_bTeleportOnEnd; // 0x5d        
        bool m_bIgnoreRotation; // 0x5e        
        [[maybe_unused]] std::uint8_t pad_0x5f[0x1]; // 0x5f
        server::ScriptedMoveType_t m_nType; // 0x60        
        bool m_bSuccess; // 0x64        
        [[maybe_unused]] std::uint8_t pad_0x65[0x3]; // 0x65
        server::ForcedCrouchState_t m_nForcedCrouchState; // 0x68        
        bool m_bIgnoreCollisions; // 0x6c        
        [[maybe_unused]] std::uint8_t pad_0x6d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CGameScriptedMoveData, m_vAccumulatedRootMotion) == 0x0);
    static_assert(offsetof(CGameScriptedMoveData, m_vDest) == 0xc);
    static_assert(offsetof(CGameScriptedMoveData, m_vSrc) == 0x18);
    static_assert(offsetof(CGameScriptedMoveData, m_angSrc) == 0x24);
    static_assert(offsetof(CGameScriptedMoveData, m_angDst) == 0x30);
    static_assert(offsetof(CGameScriptedMoveData, m_angCurrent) == 0x3c);
    static_assert(offsetof(CGameScriptedMoveData, m_hDestEntity) == 0x48);
    static_assert(offsetof(CGameScriptedMoveData, m_flLockedSpeed) == 0x4c);
    static_assert(offsetof(CGameScriptedMoveData, m_flAngRate) == 0x50);
    static_assert(offsetof(CGameScriptedMoveData, m_flDuration) == 0x54);
    static_assert(offsetof(CGameScriptedMoveData, m_flStartTime) == 0x58);
    static_assert(offsetof(CGameScriptedMoveData, m_bActive) == 0x5c);
    static_assert(offsetof(CGameScriptedMoveData, m_bTeleportOnEnd) == 0x5d);
    static_assert(offsetof(CGameScriptedMoveData, m_bIgnoreRotation) == 0x5e);
    static_assert(offsetof(CGameScriptedMoveData, m_nType) == 0x60);
    static_assert(offsetof(CGameScriptedMoveData, m_bSuccess) == 0x64);
    static_assert(offsetof(CGameScriptedMoveData, m_nForcedCrouchState) == 0x68);
    static_assert(offsetof(CGameScriptedMoveData, m_bIgnoreCollisions) == 0x6c);
    
    static_assert(sizeof(CGameScriptedMoveData) == 0x70);
};
