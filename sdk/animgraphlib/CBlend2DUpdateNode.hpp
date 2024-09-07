#pragma once
#include "animgraphlib/AnimValueSource.hpp"
#include "animgraphlib/Blend2DMode.hpp"
#include "animgraphlib/BlendItem_t.hpp"
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CAnimUpdateNodeBase.hpp"
#include "animgraphlib/CParamSpanUpdater.hpp"
#include "animgraphlib/TagSpan_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xf0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CBlend2DUpdateNode : public animgraphlib::CAnimUpdateNodeBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
	public:
		CUtlVector<animgraphlib::BlendItem_t> m_items; // 0x60		
		CUtlVector<animgraphlib::TagSpan_t> m_tags; // 0x78		
		animgraphlib::CParamSpanUpdater m_paramSpans; // 0x90		
		CUtlVector<int32_t> m_nodeItemIndices; // 0xa8		
		animgraphlib::CAnimInputDamping m_damping; // 0xc0		
		animgraphlib::AnimValueSource m_blendSourceX; // 0xd0		
		animgraphlib::CAnimParamHandle m_paramX; // 0xd4		
	private:
		[[maybe_unused]] uint8_t __pad00d6[0x2]; // 0xd6
	public:
		animgraphlib::AnimValueSource m_blendSourceY; // 0xd8		
		animgraphlib::CAnimParamHandle m_paramY; // 0xdc		
	private:
		[[maybe_unused]] uint8_t __pad00de[0x2]; // 0xde
	public:
		animgraphlib::Blend2DMode m_eBlendMode; // 0xe0		
		float m_playbackSpeed; // 0xe4		
		bool m_bLoop; // 0xe8		
		bool m_bLockBlendOnReset; // 0xe9		
		bool m_bLockWhenWaning; // 0xea		
		bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xeb		
	};
};
