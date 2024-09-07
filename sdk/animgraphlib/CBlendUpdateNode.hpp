#pragma once
#include "animgraphlib/AnimValueSource.hpp"
#include "animgraphlib/BlendKeyType.hpp"
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CAnimUpdateNodeBase.hpp"
#include "animgraphlib/CAnimUpdateNodeRef.hpp"
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
	class CBlendUpdateNode : public animgraphlib::CAnimUpdateNodeBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
	public:
		CUtlVector<animgraphlib::CAnimUpdateNodeRef> m_children; // 0x60		
		CUtlVector<uint8_t> m_sortedOrder; // 0x78		
		CUtlVector<float> m_targetValues; // 0x90		
	private:
		[[maybe_unused]] uint8_t __pad00a8[0x4]; // 0xa8
	public:
		animgraphlib::AnimValueSource m_blendValueSource; // 0xac		
		animgraphlib::CAnimParamHandle m_paramIndex; // 0xb0		
	private:
		[[maybe_unused]] uint8_t __pad00b2[0x6]; // 0xb2
	public:
		animgraphlib::CAnimInputDamping m_damping; // 0xb8		
		animgraphlib::BlendKeyType m_blendKeyType; // 0xc8		
		bool m_bLockBlendOnReset; // 0xcc		
		bool m_bSyncCycles; // 0xcd		
		bool m_bLoop; // 0xce		
		bool m_bLockWhenWaning; // 0xcf		
	};
};
