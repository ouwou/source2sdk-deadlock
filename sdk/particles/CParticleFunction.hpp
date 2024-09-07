#pragma once
#include "particles/ParticleEndcapMode_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1c0
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CParticleFunction
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MPropertyFriendlyName "operator strength"
		// MPropertySortPriority "-100"
		particleslib::CParticleCollectionFloatInput m_flOpStrength; // 0x8		
		// MPropertyFriendlyName "operator end cap state"
		// MPropertySortPriority "-100"
		particles::ParticleEndcapMode_t m_nOpEndCapState; // 0x168		
		// MPropertyStartGroup "Operator Fade"
		// MPropertyFriendlyName "operator start fadein"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		float m_flOpStartFadeInTime; // 0x16c		
		// MPropertyFriendlyName "operator end fadein"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		float m_flOpEndFadeInTime; // 0x170		
		// MPropertyFriendlyName "operator start fadeout"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		float m_flOpStartFadeOutTime; // 0x174		
		// MPropertyFriendlyName "operator end fadeout"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		float m_flOpEndFadeOutTime; // 0x178		
		// MPropertyFriendlyName "operator fade oscillate"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		float m_flOpFadeOscillatePeriod; // 0x17c		
		// MPropertyFriendlyName "normalize fade times to endcap"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		bool m_bNormalizeToStopTime; // 0x180		
	private:
		[[maybe_unused]] uint8_t __pad0181[0x3]; // 0x181
	public:
		// MPropertyStartGroup "Operator Fade Time Offset"
		// MPropertyFriendlyName "operator fade time offset min"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		float m_flOpTimeOffsetMin; // 0x184		
		// MPropertyFriendlyName "operator fade time offset max"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		float m_flOpTimeOffsetMax; // 0x188		
		// MPropertyFriendlyName "operator fade time offset seed"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		int32_t m_nOpTimeOffsetSeed; // 0x18c		
		// MPropertyStartGroup "Operator Fade Timescale Modifiers"
		// MPropertyFriendlyName "operator fade time scale seed"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		int32_t m_nOpTimeScaleSeed; // 0x190		
		// MPropertyFriendlyName "operator fade time scale min"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		float m_flOpTimeScaleMin; // 0x194		
		// MPropertyFriendlyName "operator fade time scale max"
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		float m_flOpTimeScaleMax; // 0x198		
	private:
		[[maybe_unused]] uint8_t __pad019c[0x2]; // 0x19c
	public:
		// MPropertyStartGroup
		// MPropertySuppressField
		bool m_bDisableOperator; // 0x19e		
	private:
		[[maybe_unused]] uint8_t __pad019f[0x1]; // 0x19f
	public:
		// MPropertyFriendlyName "operator help and notes"
		// MParticleHelpField
		// MParticleAdvancedField
		// MPropertySortPriority "-100"
		CUtlString m_Notes; // 0x1a0		
	};
};
