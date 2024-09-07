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
	// Size: 0x60
	// Has VTable
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CAnimationGraphVisualizerSphere : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase
	{
	public:
		VectorAligned m_vWsPosition; // 0x40		
		float m_flRadius; // 0x50		
		Color m_Color; // 0x54		
	};
};
