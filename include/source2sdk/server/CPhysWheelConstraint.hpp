#pragma once
#include "source2sdk/server/CPhysConstraint.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x590
    // Has VTable
    #pragma pack(push, 1)
    class CPhysWheelConstraint : public server::CPhysConstraint
    {
    public:
        float m_flSuspensionFrequency; // 0x560        
        float m_flSuspensionDampingRatio; // 0x564        
        float m_flSuspensionHeightOffset; // 0x568        
        bool m_bEnableSuspensionLimit; // 0x56c        
        [[maybe_unused]] std::uint8_t pad_0x56d[0x3]; // 0x56d
        float m_flMinSuspensionOffset; // 0x570        
        float m_flMaxSuspensionOffset; // 0x574        
        bool m_bEnableSteeringLimit; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x579[0x3]; // 0x579
        float m_flMinSteeringAngle; // 0x57c        
        float m_flMaxSteeringAngle; // 0x580        
        float m_flSteeringAxisFriction; // 0x584        
        float m_flSpinAxisFriction; // 0x588        
        // m_hSteeringMimicsEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSteeringMimicsEntity;
        char m_hSteeringMimicsEntity[0x4]; // 0x58c        
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSteeringMimicsEntity; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysWheelConstraint because it is not a standard-layout class
    static_assert(sizeof(CPhysWheelConstraint) == 0x590);
};
