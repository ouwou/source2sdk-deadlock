#pragma once
#include "source2sdk/server/CBasePropDoor.hpp"
#include "source2sdk/server/PropDoorRotatingOpenDirection_e.hpp"
#include "source2sdk/server/PropDoorRotatingSpawnPos_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CEntityBlocker;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1000
    // Has VTable
    #pragma pack(push, 1)
    class CPropDoorRotating : public server::CBasePropDoor
    {
    public:
        Vector m_vecAxis; // 0xf68        
        float m_flDistance; // 0xf74        
        server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xf78        
        server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xf7c        
        server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xf80        
        float m_flAjarAngle; // 0xf84        
        QAngle m_angRotationAjarDeprecated; // 0xf88        
        QAngle m_angRotationClosed; // 0xf94        
        QAngle m_angRotationOpenForward; // 0xfa0        
        QAngle m_angRotationOpenBack; // 0xfac        
        QAngle m_angGoal; // 0xfb8        
        Vector m_vecForwardBoundsMin; // 0xfc4        
        Vector m_vecForwardBoundsMax; // 0xfd0        
        Vector m_vecBackBoundsMin; // 0xfdc        
        Vector m_vecBackBoundsMax; // 0xfe8        
        bool m_bAjarDoorShouldntAlwaysOpen; // 0xff4        
        [[maybe_unused]] std::uint8_t pad_0xff5[0x3]; // 0xff5
        // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEntityBlocker> m_hEntityBlocker;
        char m_hEntityBlocker[0x4]; // 0xff8        
        [[maybe_unused]] std::uint8_t pad_0xffc[0x4];
        
        // Datamap fields:
        // float InputSetRotationDistance; // 0x0
        // float InputSetSpeed; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
    static_assert(sizeof(CPropDoorRotating) == 0x1000);
};
