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
	// Size: 0x80
	// Has VTable
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CAnimationGraphVisualizerPie : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase
	{
	public:
		VectorAligned m_vWsCenter; // 0x40		
		VectorAligned m_vWsStart; // 0x50		
		VectorAligned m_vWsEnd; // 0x60		
		Color m_Color; // 0x70		
	};
};
