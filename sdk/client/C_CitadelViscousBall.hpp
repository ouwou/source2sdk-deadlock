#pragma once
#include "client/CCitadelModelEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelBaseAbility;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x840
	// Has VTable
	class C_CitadelViscousBall : public client::CCitadelModelEntity
	{
	public:
		CHandle<client::C_CitadelBaseAbility> m_hAbility; // 0x838		
	};
};
