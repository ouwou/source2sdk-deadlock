#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Enumerator count: 6
	// Alignment: 4
	// Size: 0x4
	enum class EHUDElementButtonHint_t : std::uint32_t
	{
		EButtonHint_Attack = 0x0,
		EButtonHint_AbilityKey = 0x1,
		EButtonHint_DashKey = 0x2,
		EButtonHint_CrouchKey = 0x3,
		EButtonHint_Parry = 0x4,
		EButtonHint_Cancel = 0x5,
	};
};
