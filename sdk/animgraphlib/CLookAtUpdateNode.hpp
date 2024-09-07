#pragma once
#include "animgraphlib/AnimVectorSource.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include "animgraphlib/LookAtOpFixedSettings_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0x150
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CLookAtUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
	public:
		animgraphlib::LookAtOpFixedSettings_t m_opFixedSettings; // 0x70		
	private:
		[[maybe_unused]] uint8_t __pad0130[0x8]; // 0x130
	public:
		animgraphlib::AnimVectorSource m_target; // 0x138		
		animgraphlib::CAnimParamHandle m_paramIndex; // 0x13c		
		animgraphlib::CAnimParamHandle m_weightParamIndex; // 0x13e		
		bool m_bResetChild; // 0x140		
		bool m_bLockWhenWaning; // 0x141		
	};
};
