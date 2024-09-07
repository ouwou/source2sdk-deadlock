#pragma once
#include "animlib/CNmPoseNode__CDefinition.hpp"
#include "animlib/CNmStateNode__TimedEvent_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0xb0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmStateNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		int16_t m_nChildNodeIdx; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0012[0x6]; // 0x12
	public:
		CUtlLeanVectorFixedGrowable<CGlobalSymbol,3> m_entryEvents; // 0x18		
		CUtlLeanVectorFixedGrowable<CGlobalSymbol,3> m_executeEvents; // 0x38		
		CUtlLeanVectorFixedGrowable<CGlobalSymbol,3> m_exitEvents; // 0x58		
		CUtlLeanVectorFixedGrowable<animlib::CNmStateNode__TimedEvent_t,1> m_timedRemainingEvents; // 0x78		
		CUtlLeanVectorFixedGrowable<animlib::CNmStateNode__TimedEvent_t,1> m_timedElapsedEvents; // 0x90		
		int16_t m_nLayerWeightNodeIdx; // 0xa8		
		int16_t m_nLayerRootMotionWeightNodeIdx; // 0xaa		
		int16_t m_nLayerBoneMaskNodeIdx; // 0xac		
		bool m_bIsOffState; // 0xae		
	};
};
