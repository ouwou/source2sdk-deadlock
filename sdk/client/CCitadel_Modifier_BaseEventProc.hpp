#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/ShotID_t.hpp"
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
	// Size: 0x168
	// Has VTable
	// Is Abstract
	class CCitadel_Modifier_BaseEventProc : public client::CCitadelModifier
	{
	public:
		CUtlVector<client::C_BaseEntity*> m_vecProcdUnitsThisShot; // 0xc0		
		CUtlVector<client::C_BaseEntity*> m_vecTrackedUnitsThisFrame; // 0xd8		
		client::ShotID_t m_nLastShotId; // 0xf0		
	};
};
