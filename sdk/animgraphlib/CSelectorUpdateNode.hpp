#pragma once
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CAnimUpdateNodeBase.hpp"
#include "animgraphlib/CAnimUpdateNodeRef.hpp"
#include "animgraphlib/CBlendCurve.hpp"
#include "animgraphlib/SelectorTagBehavior_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xb0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSelectorUpdateNode : public animgraphlib::CAnimUpdateNodeBase
	{
	public:
		CUtlVector<animgraphlib::CAnimUpdateNodeRef> m_children; // 0x58		
		CUtlVector<int8_t> m_tags; // 0x70		
	private:
		[[maybe_unused]] uint8_t __pad0088[0x4]; // 0x88
	public:
		animgraphlib::CBlendCurve m_blendCurve; // 0x8c		
		CAnimValue<float> m_flBlendTime; // 0x94		
		animgraphlib::CAnimParamHandle m_hParameter; // 0x9c		
	private:
		[[maybe_unused]] uint8_t __pad009e[0x2]; // 0x9e
	public:
		int32_t m_nTagIndex; // 0xa0		
		animgraphlib::SelectorTagBehavior_t m_eTagBehavior; // 0xa4		
		bool m_bResetOnChange; // 0xa8		
		bool m_bLockWhenWaning; // 0xa9		
		bool m_bSyncCyclesOnChange; // 0xaa		
	};
};
