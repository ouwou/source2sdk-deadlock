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
    // Size: 0xf80
    // Has VTable
    #pragma pack(push, 1)
    class CPropDoorRotating : public server::CBasePropDoor
    {
    public:
        Vector m_vecAxis; // 0xee8        
        float m_flDistance; // 0xef4        
        server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xef8        
        server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xefc        
        server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xf00        
        float m_flAjarAngle; // 0xf04        
        QAngle m_angRotationAjarDeprecated; // 0xf08        
        QAngle m_angRotationClosed; // 0xf14        
        QAngle m_angRotationOpenForward; // 0xf20        
        QAngle m_angRotationOpenBack; // 0xf2c        
        QAngle m_angGoal; // 0xf38        
        Vector m_vecForwardBoundsMin; // 0xf44        
        Vector m_vecForwardBoundsMax; // 0xf50        
        Vector m_vecBackBoundsMin; // 0xf5c        
        Vector m_vecBackBoundsMax; // 0xf68        
        bool m_bAjarDoorShouldntAlwaysOpen; // 0xf74        
        [[maybe_unused]] std::uint8_t pad_0xf75[0x3]; // 0xf75
        // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEntityBlocker> m_hEntityBlocker;
        char m_hEntityBlocker[0x4]; // 0xf78        
        [[maybe_unused]] std::uint8_t pad_0xf7c[0x4];
        
        // Datamap fields:
        // float InputSetRotationDistance; // 0x0
        // float InputSetSpeed; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
    static_assert(sizeof(CPropDoorRotating) == 0xf80);
};
