#pragma once
#include "server/CLogicalEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x580
	// Has VTable
	class CLogicCompare : public server::CLogicalEntity
	{
	public:
		float m_flInValue; // 0x4d8		
		float m_flCompareValue; // 0x4dc		
		CEntityOutputTemplate<float> m_OnLessThan; // 0x4e0		
		CEntityOutputTemplate<float> m_OnEqualTo; // 0x508		
		CEntityOutputTemplate<float> m_OnNotEqualTo; // 0x530		
		CEntityOutputTemplate<float> m_OnGreaterThan; // 0x558		
		
		// Datamap fields:
		// float InputSetValue; // 0x0
		// float InputSetValueCompare; // 0x0
		// float InputSetCompareValue; // 0x0
		// void InputCompare; // 0x0
	};
};
