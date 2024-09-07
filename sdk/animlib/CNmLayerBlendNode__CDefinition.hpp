#pragma once
#include "animlib/CNmLayerBlendNode__LayerDefinition_t.hpp"
#include "animlib/CNmPoseNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmLayerBlendNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		int16_t m_nBaseNodeIdx; // 0x10		
		bool m_bOnlySampleBaseRootMotion; // 0x12		
	private:
		[[maybe_unused]] uint8_t __pad0013[0x5]; // 0x13
	public:
		CUtlLeanVectorFixedGrowable<animlib::CNmLayerBlendNode__LayerDefinition_t,3> m_layerDefinition; // 0x18		
	};
};
