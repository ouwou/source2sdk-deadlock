#pragma once
#include "soundsystem_voicecontainers/CSoundContainerReferenceArray.hpp"
#include "soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include "soundsystem_voicecontainers/PlayBackMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0x138
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Selector"
	// MPropertyDescription "Plays a selected vsnd on playback."
	class CVoiceContainerSelector : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		// MPropertyFriendlyName "Playback Mode"
		soundsystem_voicecontainers::PlayBackMode_t m_mode; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c4[0x4]; // 0xc4
	public:
		// MPropertyFriendlyName "Sounds To play"
		soundsystem_voicecontainers::CSoundContainerReferenceArray m_soundsToPlay; // 0xc8		
		// MPropertyFriendlyName "Relative Weights"
		CUtlVector<float> m_fProbabilityWeights; // 0x100		
	};
};
