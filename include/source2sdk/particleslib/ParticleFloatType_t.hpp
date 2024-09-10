#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Enumerator count: 24
    // Alignment: 4
    // Size: 0x4
    enum class ParticleFloatType_t : std::uint32_t
    {
        PF_TYPE_INVALID = 0xffffffff,
        PF_TYPE_LITERAL = 0x0,
        PF_TYPE_NAMED_VALUE = 0x1,
        PF_TYPE_RANDOM_UNIFORM = 0x2,
        PF_TYPE_RANDOM_BIASED = 0x3,
        PF_TYPE_COLLECTION_AGE = 0x4,
        PF_TYPE_ENDCAP_AGE = 0x5,
        PF_TYPE_CONTROL_POINT_COMPONENT = 0x6,
        PF_TYPE_CONTROL_POINT_CHANGE_AGE = 0x7,
        PF_TYPE_CONTROL_POINT_SPEED = 0x8,
        PF_TYPE_PARTICLE_DETAIL_LEVEL = 0x9,
        PF_TYPE_CONCURRENT_DEF_COUNT = 0xa,
        PF_TYPE_CLOSEST_CAMERA_DISTANCE = 0xb,
        PF_TYPE_RENDERER_CAMERA_DISTANCE = 0xc,
        PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT = 0xd,
        PF_TYPE_PARTICLE_NOISE = 0xe,
        PF_TYPE_PARTICLE_AGE = 0xf,
        PF_TYPE_PARTICLE_AGE_NORMALIZED = 0x10,
        PF_TYPE_PARTICLE_FLOAT = 0x11,
        PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0x12,
        PF_TYPE_PARTICLE_SPEED = 0x13,
        PF_TYPE_PARTICLE_NUMBER = 0x14,
        PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0x15,
        PF_TYPE_COUNT = 0x16,
    };
};
