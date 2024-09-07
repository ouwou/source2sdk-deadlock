#pragma once
#include "animgraphlib/AnimValueSource.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
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
	class CTurnHelperUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
	public:
		animgraphlib::AnimValueSource m_facingTarget; // 0x6c		
		float m_turnStartTimeOffset; // 0x70		
		float m_turnDuration; // 0x74		
		bool m_bMatchChildDuration; // 0x78		
	private:
		[[maybe_unused]] uint8_t __pad0079[0x3]; // 0x79
	public:
		float m_manualTurnOffset; // 0x7c		
		bool m_bUseManualTurnOffset; // 0x80		
	};
};
