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
	// Size: 0xd8
	// Has VTable
	class CCitadel_Modifier_UltCombo_Self : public server::CCitadelModifier
	{
	public:
		QAngle m_angles; // 0xc8		
		CHandle<server::CBaseEntity> m_hTarget; // 0xd4		
	};
};
