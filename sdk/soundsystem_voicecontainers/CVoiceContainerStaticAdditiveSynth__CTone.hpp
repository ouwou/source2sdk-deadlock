#pragma once
#include "soundsystem_voicecontainers/CVoiceContainerStaticAdditiveSynth__CHarmonic.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0x60
	// 
	// MGetKV3ClassDefaults
	class CVoiceContainerStaticAdditiveSynth__CTone
	{
	public:
		// MPropertyFriendlyName "Harmonics"
		CUtlVector<soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth__CHarmonic> m_harmonics; // 0x0		
		// MPropertyFriendlyName "Envelope"
		CPiecewiseCurve m_curve; // 0x18		
		// MPropertyFriendlyName "Play All Instances In Sync"
		bool m_bSyncInstances; // 0x58		
	};
};
