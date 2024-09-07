#pragma once
#include "client/CCitadelModifier.hpp"
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
	// Size: 0x150
	// Has VTable
	class CCitadel_Modifier_PerchedPredatorDrag : public client::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
	public:
		QAngle m_qRelativeOffset; // 0x130		
		float m_flRelativeDist; // 0x13c		
		Vector m_vecOffsetDir; // 0x140		
		CHandle<client::C_BaseEntity> m_hFollowEnt; // 0x14c		
	};
};
