#pragma once
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CWayPointHelperUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
	public:
		float m_flStartCycle; // 0x6c		
		float m_flEndCycle; // 0x70		
		bool m_bOnlyGoals; // 0x74		
		bool m_bPreventOvershoot; // 0x75		
		bool m_bPreventUndershoot; // 0x76		
	};
};
