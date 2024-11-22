#pragma once
#include "source2sdk/soundsystem_voicecontainers/CSoundContainerReference.hpp"
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
    // Size: 0x170
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Distance Blender"
    // static metadata: MPropertyDescription "Blends two containers according to distance curves."
    #pragma pack(push, 1)
    class CVoiceContainerDistanceBlender : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        // metadata: MPropertyFriendlyName "First Sound"
        soundsystem_voicecontainers::CSoundContainerReference m_firstSound; // 0xc0        
        // metadata: MPropertyFriendlyName "Second Sound"
        soundsystem_voicecontainers::CSoundContainerReference m_secondSound; // 0xd8        
        // metadata: MPropertyFriendlyName "First Curve"
        CPiecewiseCurve m_curve1; // 0xf0        
        // metadata: MPropertyFriendlyName "Second Curve"
        CPiecewiseCurve m_curve2; // 0x130        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerDistanceBlender because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerDistanceBlender) == 0x170);
};
