#pragma once
#include "animgraphlib/CAnimationGraphVisualizerPrimitiveBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0x70
	// Has VTable
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CAnimationGraphVisualizerLine : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase
	{
	public:
		VectorAligned m_vWsPositionStart; // 0x40		
		VectorAligned m_vWsPositionEnd; // 0x50		
		Color m_Color; // 0x60		
	};
};
