#pragma once
#include "animlib/CNmBoolValueNode__CDefinition.hpp"
#include "animlib/CNmSyncEventIndexConditionNode__TriggerMode_t.hpp"
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
	class CNmSyncEventIndexConditionNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
	{
	public:
		int16_t m_nSourceStateNodeIdx; // 0x10		
		animlib::CNmSyncEventIndexConditionNode__TriggerMode_t m_triggerMode; // 0x12		
	private:
		[[maybe_unused]] uint8_t __pad0013[0x1]; // 0x13
	public:
		int32_t m_syncEventIdx; // 0x14		
	};
};
