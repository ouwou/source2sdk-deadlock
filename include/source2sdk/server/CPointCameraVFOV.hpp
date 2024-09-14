#pragma once
#include "source2sdk/server/CPointCamera.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x540
    // Has VTable
    #pragma pack(push, 1)
    class CPointCameraVFOV : public server::CPointCamera
    {
    public:
        float m_flVerticalFOV; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x53c[0x4];
        
        // Datamap fields:
        // float m_flDofFarCrisp; // 0x518
        // float m_flDofFarBlurry; // 0x51c
        // float m_flDofTiltToGround; // 0x520
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointCameraVFOV because it is not a standard-layout class
    static_assert(sizeof(CPointCameraVFOV) == 0x540);
};
