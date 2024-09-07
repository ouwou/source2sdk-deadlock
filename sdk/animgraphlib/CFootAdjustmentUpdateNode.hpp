#pragma once
#include "animationsystem/HSequence.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CPoseHandle.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CFootAdjustmentUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
	public:
		CUtlVector<animationsystem::HSequence> m_clips; // 0x70		
		animgraphlib::CPoseHandle m_hBasePoseCacheHandle; // 0x88		
		animgraphlib::CAnimParamHandle m_facingTarget; // 0x8c		
	private:
		[[maybe_unused]] uint8_t __pad008e[0x2]; // 0x8e
	public:
		float m_flTurnTimeMin; // 0x90		
		float m_flTurnTimeMax; // 0x94		
		float m_flStepHeightMax; // 0x98		
		float m_flStepHeightMaxAngle; // 0x9c		
		bool m_bResetChild; // 0xa0		
		bool m_bAnimationDriven; // 0xa1		
	};
};
