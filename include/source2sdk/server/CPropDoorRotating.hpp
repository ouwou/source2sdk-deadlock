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
    // Size: 0xf78
    // Has VTable
    #pragma pack(push, 1)
    class CPropDoorRotating : public server::CBasePropDoor
    {
    public:
        Vector m_vecAxis; // 0xee0        
        float m_flDistance; // 0xeec        
        server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xef0        
        server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xef4        
        server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xef8        
        float m_flAjarAngle; // 0xefc        
        QAngle m_angRotationAjarDeprecated; // 0xf00        
        QAngle m_angRotationClosed; // 0xf0c        
        QAngle m_angRotationOpenForward; // 0xf18        
        QAngle m_angRotationOpenBack; // 0xf24        
        QAngle m_angGoal; // 0xf30        
        Vector m_vecForwardBoundsMin; // 0xf3c        
        Vector m_vecForwardBoundsMax; // 0xf48        
        Vector m_vecBackBoundsMin; // 0xf54        
        Vector m_vecBackBoundsMax; // 0xf60        
        bool m_bAjarDoorShouldntAlwaysOpen; // 0xf6c        
        [[maybe_unused]] std::uint8_t pad_0xf6d[0x3]; // 0xf6d
        // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEntityBlocker> m_hEntityBlocker;
        char m_hEntityBlocker[0x4]; // 0xf70        
        [[maybe_unused]] std::uint8_t pad_0xf74[0x4];
        
        // Datamap fields:
        // float InputSetRotationDistance; // 0x0
        // float InputSetSpeed; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
    static_assert(sizeof(CPropDoorRotating) == 0xf78);
};
