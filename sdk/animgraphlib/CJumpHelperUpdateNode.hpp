#pragma once
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CSequenceUpdateNode.hpp"
#include "animgraphlib/JumpCorrectionMethod.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CJumpHelperUpdateNode : public animgraphlib::CSequenceUpdateNode
	{
	public:
		animgraphlib::CAnimParamHandle m_hTargetParam; // 0xa8		
	private:
		[[maybe_unused]] uint8_t __pad00aa[0x2]; // 0xaa
	public:
		Vector m_flOriginalJumpMovement; // 0xac		
		float m_flOriginalJumpDuration; // 0xb8		
		float m_flJumpStartCycle; // 0xbc		
		float m_flJumpEndCycle; // 0xc0		
		animgraphlib::JumpCorrectionMethod m_eCorrectionMethod; // 0xc4		
		bool m_bTranslationAxis[3]; // 0xc8		
		bool m_bScaleSpeed; // 0xcb		
	};
};
