#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x610
    // Has VTable
    #pragma pack(push, 1)
    class CPointAngularVelocitySensor : public server::CPointEntity
    {
    public:
        // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEntity;
        char m_hTargetEntity[0x4]; // 0x4e8        
        float m_flThreshold; // 0x4ec        
        int32_t m_nLastCompareResult; // 0x4f0        
        int32_t m_nLastFireResult; // 0x4f4        
        entity2::GameTime_t m_flFireTime; // 0x4f8        
        float m_flFireInterval; // 0x4fc        
        float m_flLastAngVelocity; // 0x500        
        QAngle m_lastOrientation; // 0x504        
        Vector m_vecAxis; // 0x510        
        bool m_bUseHelper; // 0x51c        
        [[maybe_unused]] std::uint8_t pad_0x51d[0x3]; // 0x51d
        // m_AngularVelocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_AngularVelocity;
        char m_AngularVelocity[0x28]; // 0x520        
        entity2::CEntityIOOutput m_OnLessThan; // 0x548        
        entity2::CEntityIOOutput m_OnLessThanOrEqualTo; // 0x570        
        entity2::CEntityIOOutput m_OnGreaterThan; // 0x598        
        entity2::CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x5c0        
        entity2::CEntityIOOutput m_OnEqualTo; // 0x5e8        
        
        // Datamap fields:
        // void InputTest; // 0x0
        // void InputTestWithInterval; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointAngularVelocitySensor because it is not a standard-layout class
    static_assert(sizeof(CPointAngularVelocitySensor) == 0x610);
};
