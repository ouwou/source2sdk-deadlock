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
    // Size: 0xd8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Container Switch"
    // static metadata: MPropertyDescription "An array of containers"
    #pragma pack(push, 1)
    class CVoiceContainerSwitch : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        // metadata: MPropertyFriendlyName "Container List"
        // m_soundsToPlay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<soundsystem_voicecontainers::CSoundContainerReference> m_soundsToPlay;
        char m_soundsToPlay[0x18]; // 0xc0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerSwitch because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerSwitch) == 0xd8);
};
