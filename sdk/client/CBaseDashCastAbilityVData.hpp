#pragma once
#include "client/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1578
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CBaseDashCastAbilityVData : public client::CitadelAbilityVData
	{
	public:
		CSubclassName<4> m_AbilityToTrigger; // 0x14f0		
		// MPropertyDescription "How big of a trigger to use when tracing for targets"
		float m_flDashCastTriggerRadius; // 0x1500		
		// MPropertyDescription "How fast the dash should go.  When using the curve, the dash will travel this speen when y=1"
		float m_flDashSpeed; // 0x1504		
		// MPropertyDescription "When true, speed will be set to 0 when the dash cast ends"
		bool m_bSnapToZeroSpeedOnEnd; // 0x1508		
		// MPropertyDescription "When true, use the curve below to scale the speed of the dash across the distance."
		bool m_bUseCurveToDefineSpeed; // 0x1509		
	private:
		[[maybe_unused]] uint8_t __pad150a[0x6]; // 0x150a
	public:
		// MPropertySuppressExpr "m_bUseCurveToDefineSpeed == false"
		CPiecewiseCurve m_MovementSpeedCurve; // 0x1510		
		// MPropertySuppressField
		float m_flMovementSpeedCurveAvgSpeed; // 0x1550		
	private:
		[[maybe_unused]] uint8_t __pad1554[0x4]; // 0x1554
	public:
		// MPropertyStartGroup "Sounds"
		// MPropertyDescription "Sound to play if we hit a target."
		CSoundEventName m_strTargetHitSound; // 0x1558		
		// MPropertyDescription "Sound to play if miss entirely.  Only the caster hears it."
		CSoundEventName m_strMissSound; // 0x1568		
	};
};
