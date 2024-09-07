#pragma once
#include "server/CCitadelModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelBaseAbility;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8f0
	// Has VTable
	class CCitadelViscousBall : public server::CCitadelModelEntity
	{
	public:
		CHandle<server::CCitadelBaseAbility> m_hAbility; // 0x8e8		
	};
};
