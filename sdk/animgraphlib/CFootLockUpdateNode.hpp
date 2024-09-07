#pragma once
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include "animgraphlib/FootFixedSettings.hpp"
#include "animgraphlib/FootLockPoseOpFixedSettings.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x138
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CFootLockUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	public:
		animgraphlib::FootLockPoseOpFixedSettings m_opFixedSettings; // 0x68		
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x8]; // 0xc8
	public:
		CUtlVector<animgraphlib::FootFixedSettings> m_footSettings; // 0xd0		
		animgraphlib::CAnimInputDamping m_hipShiftDamping; // 0xe8		
		animgraphlib::CAnimInputDamping m_rootHeightDamping; // 0xf8		
		float m_flStrideCurveScale; // 0x108		
		float m_flStrideCurveLimitScale; // 0x10c		
		float m_flStepHeightIncreaseScale; // 0x110		
		float m_flStepHeightDecreaseScale; // 0x114		
		float m_flHipShiftScale; // 0x118		
		float m_flBlendTime; // 0x11c		
		float m_flMaxRootHeightOffset; // 0x120		
		float m_flMinRootHeightOffset; // 0x124		
		float m_flTiltPlanePitchSpringStrength; // 0x128		
		float m_flTiltPlaneRollSpringStrength; // 0x12c		
		bool m_bApplyFootRotationLimits; // 0x130		
		bool m_bApplyHipShift; // 0x131		
		bool m_bModulateStepHeight; // 0x132		
		bool m_bResetChild; // 0x133		
		bool m_bEnableVerticalCurvedPaths; // 0x134		
		bool m_bEnableRootHeightDamping; // 0x135		
	};
};
