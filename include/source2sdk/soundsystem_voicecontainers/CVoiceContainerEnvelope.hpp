#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
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
    class CVoiceContainerAnalysisBase;
};

namespace source2sdk::soundsystem_voicecontainers
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Envelope VSND"
    // static metadata: MPropertyDescription "Plays sound with envelope."
    #pragma pack(push, 1)
    class CVoiceContainerEnvelope : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        // metadata: MPropertyFriendlyName "Vsnd File"
        // m_sound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_sound;
        char m_sound[0x8]; // 0xc0        
        // metadata: MPropertyFriendlyName "Container Analyzers"
        soundsystem_voicecontainers::CVoiceContainerAnalysisBase* m_analysisContainer; // 0xc8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerEnvelope because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerEnvelope) == 0xd0);
};
