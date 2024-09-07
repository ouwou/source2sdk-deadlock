#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xdc8
	// Has VTable
	class CCitadel_Ability_Ghost_BloodShards : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x150]; // 0xc60
	public:
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecDamagedTargets; // 0xdb0		
	};
};
