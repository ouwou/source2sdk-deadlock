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
    // Size: 0x1018
    // Has VTable
    #pragma pack(push, 1)
    class CPropDoorRotating : public server::CBasePropDoor
    {
    public:
        Vector m_vecAxis; // 0xf80        
        float m_flDistance; // 0xf8c        
        server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xf90        
        server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xf94        
        server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xf98        
        float m_flAjarAngle; // 0xf9c        
        QAngle m_angRotationAjarDeprecated; // 0xfa0        
        QAngle m_angRotationClosed; // 0xfac        
        QAngle m_angRotationOpenForward; // 0xfb8        
        QAngle m_angRotationOpenBack; // 0xfc4        
        QAngle m_angGoal; // 0xfd0        
        Vector m_vecForwardBoundsMin; // 0xfdc        
        Vector m_vecForwardBoundsMax; // 0xfe8        
        Vector m_vecBackBoundsMin; // 0xff4        
        Vector m_vecBackBoundsMax; // 0x1000        
        bool m_bAjarDoorShouldntAlwaysOpen; // 0x100c        
        [[maybe_unused]] std::uint8_t pad_0x100d[0x3]; // 0x100d
        // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEntityBlocker> m_hEntityBlocker;
        char m_hEntityBlocker[0x4]; // 0x1010        
        [[maybe_unused]] std::uint8_t pad_0x1014[0x4];
        
        // Datamap fields:
        // float InputSetRotationDistance; // 0x0
        // float InputSetSpeed; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
    static_assert(sizeof(CPropDoorRotating) == 0x1018);
};
