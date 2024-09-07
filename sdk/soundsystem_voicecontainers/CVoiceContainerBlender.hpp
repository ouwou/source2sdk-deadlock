#pragma once
#include "soundsystem_voicecontainers/CSoundContainerReference.hpp"
#include "soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0xf8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Blender"
	// MPropertyDescription "Blends two containers."
	class CVoiceContainerBlender : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		soundsystem_voicecontainers::CSoundContainerReference m_firstSound; // 0xc0		
		soundsystem_voicecontainers::CSoundContainerReference m_secondSound; // 0xd8		
		float m_flBlendFactor; // 0xf0		
	};
};
