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
	// Size: 0x158
	// Has VTable
	class CCitadel_Modifier_PerchedPredatorDrag : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
	public:
		QAngle m_qRelativeOffset; // 0x138		
		float m_flRelativeDist; // 0x144		
		Vector m_vecOffsetDir; // 0x148		
		CHandle<server::CBaseEntity> m_hFollowEnt; // 0x154		
	};
};
