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
	// Size: 0x198
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Wind Generator Container"
	// MPropertyDescription "This is a synth meant to generate whoosh noises."
	class CVoiceContainerShapedNoise : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		bool m_bUseCurveForFrequency; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
	public:
		// MPropertySuppressExpr "m_bUseCurveForFrequency == 1"
		float m_flFrequency; // 0xc4		
		// MPropertySuppressExpr "m_bUseCurveForFrequency == 0"
		// MPropertyFriendlyName "Frequency Sweep"
		CPiecewiseCurve m_frequencySweep; // 0xc8		
		bool m_bUseCurveForResonance; // 0x108		
	private:
		[[maybe_unused]] uint8_t __pad0109[0x3]; // 0x109
	public:
		// MPropertySuppressExpr "m_bUseCurveForResonance == 1"
		float m_flResonance; // 0x10c		
		// MPropertySuppressExpr "m_bUseCurveForResonance == 0"
		// MPropertyFriendlyName "Resonance Sweep"
		CPiecewiseCurve m_resonanceSweep; // 0x110		
		bool m_bUseCurveForAmplitude; // 0x150		
	private:
		[[maybe_unused]] uint8_t __pad0151[0x3]; // 0x151
	public:
		// MPropertySuppressExpr "m_bUseCurveForAmplitude == 1"
		float m_flGainInDecibels; // 0x154		
		// MPropertySuppressExpr "m_bUseCurveForAmplitude == 0"
		// MPropertyFriendlyName "Gain Sweep (in Decibels)"
		CPiecewiseCurve m_gainSweep; // 0x158		
	};
};
