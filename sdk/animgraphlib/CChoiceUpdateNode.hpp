#pragma once
#include "animgraphlib/CAnimUpdateNodeBase.hpp"
#include "animgraphlib/CAnimUpdateNodeRef.hpp"
#include "animgraphlib/ChoiceBlendMethod.hpp"
#include "animgraphlib/ChoiceChangeMethod.hpp"
#include "animgraphlib/ChoiceMethod.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xb8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CChoiceUpdateNode : public animgraphlib::CAnimUpdateNodeBase
	{
	public:
		CUtlVector<animgraphlib::CAnimUpdateNodeRef> m_children; // 0x58		
		CUtlVector<float> m_weights; // 0x70		
		CUtlVector<float> m_blendTimes; // 0x88		
		animgraphlib::ChoiceMethod m_choiceMethod; // 0xa0		
		animgraphlib::ChoiceChangeMethod m_choiceChangeMethod; // 0xa4		
		animgraphlib::ChoiceBlendMethod m_blendMethod; // 0xa8		
		float m_blendTime; // 0xac		
		bool m_bCrossFade; // 0xb0		
		bool m_bResetChosen; // 0xb1		
		bool m_bDontResetSameSelection; // 0xb2		
	};
};
