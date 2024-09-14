#pragma once
#include "source2sdk/server/CConstantForceController.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x538
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CPhysForce : public server::CPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4d8[0x8]; // 0x4d8
        CUtlSymbolLarge m_nameAttach; // 0x4e0        
        float m_force; // 0x4e8        
        float m_forceTime; // 0x4ec        
        // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_attachedObject;
        char m_attachedObject[0x4]; // 0x4f0        
        bool m_wasRestored; // 0x4f4        
        [[maybe_unused]] std::uint8_t pad_0x4f5[0x3]; // 0x4f5
        server::CConstantForceController m_integrator; // 0x4f8        
        
        // Datamap fields:
        // void m_pController; // 0x4d8
        // void InputActivate; // 0x0
        // void InputDeactivate; // 0x0
        // float InputForceScale; // 0x0
        // void CPhysForceForceOff; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysForce because it is not a standard-layout class
    static_assert(sizeof(CPhysForce) == 0x538);
};
