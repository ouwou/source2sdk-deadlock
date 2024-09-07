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
	// Size: 0xcb0
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_vecPulseTargets"
	class CCitadel_Ability_PsychicPulse : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x38]; // 0xc60
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecPulseTargets; // 0xc98		
	};
};
