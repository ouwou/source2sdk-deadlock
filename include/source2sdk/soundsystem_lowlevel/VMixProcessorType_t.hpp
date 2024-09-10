#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
    // Enumerator count: 30
    // Alignment: 2
    // Size: 0x2
    enum class VMixProcessorType_t : std::uint16_t
    {
        VPROCESSOR_UNKNOWN = 0x0,
        VPROCESSOR_RT_PITCH = 0x1,
        VPROCESSOR_STEAMAUDIO_HRTF = 0x2,
        VPROCESSOR_DYNAMICS = 0x3,
        VPROCESSOR_PRESETDSP = 0x4,
        VPROCESSOR_DELAY = 0x5,
        VPROCESSOR_MOD_DELAY = 0x6,
        VPROCESSOR_DIFFUSOR = 0x7,
        VPROCESSOR_BOXVERB = 0x8,
        VPROCESSOR_FREEVERB = 0x9,
        VPROCESSOR_PLATEVERB = 0xa,
        VPROCESSOR_FULLWAVE_INTEGRATOR = 0xb,
        VPROCESSOR_FILTER = 0xc,
        VPROCESSOR_STEAMAUDIO_PATHING = 0xd,
        VPROCESSOR_EQ8 = 0xe,
        VPROCESSOR_ENVELOPE = 0xf,
        VPROCESSOR_VOCODER = 0x10,
        VPROCESSOR_CONVOLUTION = 0x11,
        VPROCESSOR_DYNAMICS_3BAND = 0x12,
        VPROCESSOR_DYNAMICS_COMPRESSOR = 0x13,
        VPROCESSOR_SHAPER = 0x14,
        VPROCESSOR_PANNER = 0x15,
        VPROCESSOR_UTILITY = 0x16,
        VPROCESSOR_AUTOFILTER = 0x17,
        VPROCESSOR_OSC = 0x18,
        VPROCESSOR_STEREODELAY = 0x19,
        VPROCESSOR_EFFECT_CHAIN = 0x1a,
        VPROCESSOR_SUBGRAPH_SWITCH = 0x1b,
        VPROCESSOR_STEAMAUDIO_DIRECT = 0x1c,
        VPROCESSOR_STEAMAUDIO_HYBRIDREVERB = 0x1d,
    };
};
