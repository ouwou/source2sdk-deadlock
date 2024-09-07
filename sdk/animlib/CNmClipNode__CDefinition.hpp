#pragma once
#include "animlib/CNmPoseNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x18
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmClipNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		int16_t m_nPlayInReverseValueNodeIdx; // 0x10		
		int16_t m_nResetTimeValueNodeIdx; // 0x12		
		bool m_bSampleRootMotion; // 0x14		
		bool m_bAllowLooping; // 0x15		
		int16_t m_nDataSlotIdx; // 0x16		
	};
};
