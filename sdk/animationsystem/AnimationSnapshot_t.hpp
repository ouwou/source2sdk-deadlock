#pragma once
#include "animationsystem/AnimationSnapshotBase_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 16
	// Size: 0x120
	// 
	// MGetKV3ClassDefaults
	struct AnimationSnapshot_t : public animationsystem::AnimationSnapshotBase_t
	{
	public:
		int32_t m_nEntIndex; // 0x110		
	private:
		[[maybe_unused]] uint8_t __pad0114[0x4]; // 0x114
	public:
		CUtlString m_modelName; // 0x118		
	};
};
