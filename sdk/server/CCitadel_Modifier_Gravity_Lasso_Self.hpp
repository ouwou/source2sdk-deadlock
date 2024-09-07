#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x2a8
	// Has VTable
	class CCitadel_Modifier_Gravity_Lasso_Self : public server::CCitadelModifier
	{
	public:
		bool m_bHasUsedBouncePad; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00c9[0x7]; // 0xc9
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vCastTargets; // 0xd0		
	};
};
