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
	// 
	// MGetKV3ClassDefaults
	class CAnimationGraphVisualizerText : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase
	{
	public:
		VectorAligned m_vWsPosition; // 0x40		
		Color m_Color; // 0x50		
	private:
		[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
	public:
		CUtlString m_Text; // 0x58		
	};
};
