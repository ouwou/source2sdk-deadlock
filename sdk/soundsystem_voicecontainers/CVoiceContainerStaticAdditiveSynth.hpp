#pragma once
#include "soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include "soundsystem_voicecontainers/CVoiceContainerStaticAdditiveSynth__CTone.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0xf0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Additive Synth Container"
	// MPropertyDescription "This is a static additive synth that can scale components of the synth based on how many instances are running."
	class CVoiceContainerStaticAdditiveSynth : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		CUtlVector<soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth__CTone> m_tones; // 0xc0		
	};
};
