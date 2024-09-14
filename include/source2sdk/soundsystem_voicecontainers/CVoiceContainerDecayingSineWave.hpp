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
    // Size: 0xc8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "TESTBED: Decaying Sine Wave Container"
    // static metadata: MPropertyDescription "Only text params, renders in real time"
    #pragma pack(push, 1)
    class CVoiceContainerDecayingSineWave : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        // metadata: MPropertyFriendlyName "Frequency (Hz)"
        // metadata: MPropertyDescription "The frequency of this sine tone."
        float m_flFrequency; // 0xc0        
        // metadata: MPropertyFriendlyName "Decay Time (Seconds)"
        // metadata: MPropertyDescription "The frequency of this sine tone."
        float m_flDecayTime; // 0xc4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerDecayingSineWave because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerDecayingSineWave) == 0xc8);
};
