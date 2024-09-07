#pragma once
#include "soundsystem_voicecontainers/CVoiceContainerDecayingSineWave.hpp"
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
	// MPropertyFriendlyName "TESTBED: Amped Decaying Sine Wave Container"
	// MPropertyDescription "Bytecode instruction"
	class CVoiceContainerAmpedDecayingSineWave : public soundsystem_voicecontainers::CVoiceContainerDecayingSineWave
	{
	public:
		// MPropertyFriendlyName "Attenuation Amount (dB)"
		// MPropertyDescription "The amount of attenuation ."
		float m_flGainAmount; // 0xc8		
	};
};
