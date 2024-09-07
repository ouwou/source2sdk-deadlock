#pragma once
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/FootFixedData_t.hpp"
#include "animgraphlib/IKSolverType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x60
	// 
	// MGetKV3ClassDefaults
	class FootLockPoseOpFixedSettings
	{
	public:
		CUtlVector<animgraphlib::FootFixedData_t> m_footInfo; // 0x0		
		animgraphlib::CAnimInputDamping m_hipDampingSettings; // 0x18		
		int32_t m_nHipBoneIndex; // 0x28		
		animgraphlib::IKSolverType m_ikSolverType; // 0x2c		
		bool m_bApplyTilt; // 0x30		
		bool m_bApplyHipDrop; // 0x31		
		bool m_bAlwaysUseFallbackHinge; // 0x32		
		bool m_bApplyFootRotationLimits; // 0x33		
		bool m_bApplyLegTwistLimits; // 0x34		
	private:
		[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
	public:
		float m_flMaxFootHeight; // 0x38		
		float m_flExtensionScale; // 0x3c		
		float m_flMaxLegTwist; // 0x40		
		bool m_bEnableLockBreaking; // 0x44		
	private:
		[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
	public:
		float m_flLockBreakTolerance; // 0x48		
		float m_flLockBlendTime; // 0x4c		
		bool m_bEnableStretching; // 0x50		
	private:
		[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
	public:
		float m_flMaxStretchAmount; // 0x54		
		float m_flStretchExtensionScale; // 0x58		
	};
};
