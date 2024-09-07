#pragma once
#include "animationsystem/HSequence.hpp"
#include "animgraphlib/AimMatrixOpFixedSettings_t.hpp"
#include "animgraphlib/AnimVectorSource.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0x170
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAimMatrixUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
	public:
		animgraphlib::AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70		
	private:
		[[maybe_unused]] uint8_t __pad0150[0x8]; // 0x150
	public:
		animgraphlib::AnimVectorSource m_target; // 0x158		
		animgraphlib::CAnimParamHandle m_paramIndex; // 0x15c		
	private:
		[[maybe_unused]] uint8_t __pad015e[0x2]; // 0x15e
	public:
		animationsystem::HSequence m_hSequence; // 0x160		
		bool m_bResetChild; // 0x164		
		bool m_bLockWhenWaning; // 0x165		
	};
};
