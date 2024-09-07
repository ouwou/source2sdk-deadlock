#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 4
	// Size: 0x10
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance
	{
	public:
		// MPropertyFriendlyName "Quietest Volume"
		float m_flMinVolume; // 0x0		
		// MPropertyFriendlyName "# Instances Playing Until We Get Louder Than Quietest Volume"
		int32_t m_nInstancesAtMinVolume; // 0x4		
		// MPropertyFriendlyName "Loudest Volume"
		float m_flMaxVolume; // 0x8		
		// MPropertyFriendlyName "# Instances Playing Required To Reach Loudest Volume"
		int32_t m_nInstancesAtMaxVolume; // 0xc		
	};
};
