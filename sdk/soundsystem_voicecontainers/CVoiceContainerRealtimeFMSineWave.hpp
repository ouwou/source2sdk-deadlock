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
	// Size: 0xd0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "TESTBED: FM Synth Container"
	// MPropertyDescription "Real time FM Synthesis"
	class CVoiceContainerRealtimeFMSineWave : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		// MPropertyFriendlyName "Frequency (Hz)"
		// MPropertyDescription "The frequency of this sine tone."
		float m_flCarrierFrequency; // 0xc0		
		// MPropertyFriendlyName "Mod Frequency (Hz)"
		// MPropertyDescription "The frequency of the sine tone modulating this sine tone."
		float m_flModulatorFrequency; // 0xc4		
		// MPropertyFriendlyName "Mod Amount (Hz)"
		// MPropertyDescription "The amount the modulating sine tone modulates this sine tone."
		float m_flModulatorAmount; // 0xc8		
	};
};
