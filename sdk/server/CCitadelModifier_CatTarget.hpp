#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadel_CatAnimating;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x108
	// Has VTable
	class CCitadelModifier_CatTarget : public server::CCitadelModifier
	{
	public:
		CHandle<server::CCitadel_CatAnimating> m_hCat; // 0xc8		
	};
};
