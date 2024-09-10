#pragma once
#include "animlib/CNmEvent.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmLegacyEvent : public animlib::CNmEvent
	{
	public:
		CUtlString m_animEventClassName; // 0x18		
		KeyValues3 m_KV; // 0x20		
	};
};
