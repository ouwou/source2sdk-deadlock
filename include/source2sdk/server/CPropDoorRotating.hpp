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
    // Size: 0x1020
    // Has VTable
    #pragma pack(push, 1)
    class CPropDoorRotating : public server::CBasePropDoor
    {
    public:
        Vector m_vecAxis; // 0xf88        
        float m_flDistance; // 0xf94        
        server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xf98        
        server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xf9c        
        server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xfa0        
        float m_flAjarAngle; // 0xfa4        
        QAngle m_angRotationAjarDeprecated; // 0xfa8        
        QAngle m_angRotationClosed; // 0xfb4        
        QAngle m_angRotationOpenForward; // 0xfc0        
        QAngle m_angRotationOpenBack; // 0xfcc        
        QAngle m_angGoal; // 0xfd8        
        Vector m_vecForwardBoundsMin; // 0xfe4        
        Vector m_vecForwardBoundsMax; // 0xff0        
        Vector m_vecBackBoundsMin; // 0xffc        
        Vector m_vecBackBoundsMax; // 0x1008        
        bool m_bAjarDoorShouldntAlwaysOpen; // 0x1014        
        [[maybe_unused]] std::uint8_t pad_0x1015[0x3]; // 0x1015
        // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEntityBlocker> m_hEntityBlocker;
        char m_hEntityBlocker[0x4]; // 0x1018        
        [[maybe_unused]] std::uint8_t pad_0x101c[0x4];
        
        // Datamap fields:
        // float InputSetRotationDistance; // 0x0
        // float InputSetSpeed; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
    static_assert(sizeof(CPropDoorRotating) == 0x1020);
};
