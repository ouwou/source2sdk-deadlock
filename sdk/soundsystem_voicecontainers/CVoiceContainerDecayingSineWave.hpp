#pragma once
#include "soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0xc8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "TESTBED: Decaying Sine Wave Container"
	// MPropertyDescription "Only text params, renders in real time"
	class CVoiceContainerDecayingSineWave : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		// MPropertyFriendlyName "Frequency (Hz)"
		// MPropertyDescription "The frequency of this sine tone."
		float m_flFrequency; // 0xc0		
		// MPropertyFriendlyName "Decay Time (Seconds)"
		// MPropertyDescription "The frequency of this sine tone."
		float m_flDecayTime; // 0xc4		
	};
};
