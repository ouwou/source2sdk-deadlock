#pragma once
#include "soundsystem/CSosGroupActionSchema.hpp"
#include "soundsystem/SosActionSortType_t.hpp"
#include "soundsystem/SosActionStopType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSosGroupActionLimitSchema : public soundsystem::CSosGroupActionSchema
	{
	public:
		// MPropertyFriendlyName "Max Count"
		int32_t m_nMaxCount; // 0x18		
		// MPropertyFriendlyName "Stop Type"
		soundsystem::SosActionStopType_t m_nStopType; // 0x1c		
		// MPropertyFriendlyName "Sort Type"
		soundsystem::SosActionSortType_t m_nSortType; // 0x20		
	};
};
