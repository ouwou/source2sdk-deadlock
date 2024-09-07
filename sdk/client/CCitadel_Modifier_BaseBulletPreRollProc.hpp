#pragma once
#include "client/BulletID_t.hpp"
#include "client/CCitadel_Modifier_BaseEventProc.hpp"
#include "client/ShotID_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x188
	// Has VTable
	// Is Abstract
	class CCitadel_Modifier_BaseBulletPreRollProc : public client::CCitadel_Modifier_BaseEventProc
	{
	public:
		client::ShotID_t m_nSuppressProcShotID; // 0x168		
	private:
		[[maybe_unused]] uint8_t __pad016c[0x4]; // 0x16c
	public:
		CUtlVector<client::BulletID_t> m_vecProcdBulletIDs; // 0x170		
	};
};
