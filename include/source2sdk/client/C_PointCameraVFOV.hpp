#pragma once
#include "source2sdk/client/C_PointCamera.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c0
    // Has VTable
    #pragma pack(push, 1)
    class C_PointCameraVFOV : public client::C_PointCamera
    {
    public:
        float m_flVerticalFOV; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4];
        
        // Datamap fields:
        // float m_flDofFarCrisp; // 0x598
        // float m_flDofFarBlurry; // 0x59c
        // float m_flDofTiltToGround; // 0x5a0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointCameraVFOV because it is not a standard-layout class
    static_assert(sizeof(C_PointCameraVFOV) == 0x5c0);
};
