#pragma once
#include "client/CBaseAnimGraph.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BasePlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb78
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< C_BasePlayerPawn > m_hTouchedPlayeres"
	class C_ItemWeaponParts : public client::CBaseAnimGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad0b40[0x20]; // 0xb40
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CHandle<client::C_BasePlayerPawn>> m_hTouchedPlayeres; // 0xb60		
	};
};
