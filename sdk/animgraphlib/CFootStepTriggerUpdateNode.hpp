#pragma once
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include "animgraphlib/FootStepTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x88
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CFootStepTriggerUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	public:
		CUtlVector<animgraphlib::FootStepTrigger> m_triggers; // 0x68		
	private:
		[[maybe_unused]] uint8_t __pad0080[0x4]; // 0x80
	public:
		float m_flTolerance; // 0x84		
	};
};
