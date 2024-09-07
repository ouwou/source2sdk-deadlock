#pragma once
#include "client/CCitadel_Modifier_BaseBulletPreRollProc.hpp"
#include "client/ShotID_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x200
	// Has VTable
	class CCitadel_Modifier_ExplosiveBullets : public client::CCitadel_Modifier_BaseBulletPreRollProc
	{
	private:
		[[maybe_unused]] uint8_t __pad0188[0x70]; // 0x188
	public:
		client::ShotID_t m_BuffedShotId; // 0x1f8		
	};
};
