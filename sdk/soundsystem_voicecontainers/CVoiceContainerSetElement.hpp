#pragma once
#include "soundsystem_voicecontainers/CSoundContainerReference.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	class CVoiceContainerSetElement
	{
	public:
		soundsystem_voicecontainers::CSoundContainerReference m_sound; // 0x0		
		// MPropertyFriendlyName "Volume (in Decibels)"
		float m_flVolumeDB; // 0x18		
	};
};
