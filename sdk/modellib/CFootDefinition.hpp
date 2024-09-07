#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x40
	// 
	// MGetKV3ClassDefaults
	class CFootDefinition
	{
	public:
		CUtlString m_name; // 0x0		
		CUtlString m_ankleBoneName; // 0x8		
		CUtlString m_toeBoneName; // 0x10		
		Vector m_vBallOffset; // 0x18		
		Vector m_vHeelOffset; // 0x24		
		float m_flFootLength; // 0x30		
		float m_flBindPoseDirectionMS; // 0x34		
		float m_flTraceHeight; // 0x38		
		float m_flTraceRadius; // 0x3c		
	};
};
