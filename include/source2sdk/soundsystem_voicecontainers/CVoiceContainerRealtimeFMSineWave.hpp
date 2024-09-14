#pragma once
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "TESTBED: FM Synth Container"
    // static metadata: MPropertyDescription "Real time FM Synthesis"
    #pragma pack(push, 1)
    class CVoiceContainerRealtimeFMSineWave : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        // metadata: MPropertyFriendlyName "Frequency (Hz)"
        // metadata: MPropertyDescription "The frequency of this sine tone."
        float m_flCarrierFrequency; // 0xc0        
        // metadata: MPropertyFriendlyName "Mod Frequency (Hz)"
        // metadata: MPropertyDescription "The frequency of the sine tone modulating this sine tone."
        float m_flModulatorFrequency; // 0xc4        
        // metadata: MPropertyFriendlyName "Mod Amount (Hz)"
        // metadata: MPropertyDescription "The amount the modulating sine tone modulates this sine tone."
        float m_flModulatorAmount; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerRealtimeFMSineWave because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerRealtimeFMSineWave) == 0xd0);
};
