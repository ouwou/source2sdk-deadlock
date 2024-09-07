#pragma once
#include "soundsystem_voicecontainers/CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance.hpp"
#include "soundsystem_voicecontainers/EMidiNote.hpp"
#include "soundsystem_voicecontainers/EWaveform.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0x68
	// 
	// MGetKV3ClassDefaults
	class CVoiceContainerStaticAdditiveSynth__CHarmonic
	{
	public:
		// MPropertyFriendlyName "Waveform"
		soundsystem_voicecontainers::EWaveform m_nWaveform; // 0x0		
		// MPropertyFriendlyName "Note"
		soundsystem_voicecontainers::EMidiNote m_nFundamental; // 0x1		
	private:
		[[maybe_unused]] uint8_t __pad0002[0x2]; // 0x2
	public:
		// MPropertyFriendlyName "Octave"
		int32_t m_nOctave; // 0x4		
		// MPropertyFriendlyName "Cents To Detune ( -100:100 )"
		float m_flCents; // 0x8		
		// MPropertyFriendlyName "Phase ( 0 - 1 )"
		float m_flPhase; // 0xc		
		// MPropertyFriendlyName "Envelope (Relative to Tone Envelope)"
		CPiecewiseCurve m_curve; // 0x10		
		soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance m_volumeScaling; // 0x50		
	};
};
