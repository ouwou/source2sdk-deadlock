#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
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
	// Size: 0xe30
	// Has VTable
	class CCitadel_Ability_Tokamak_HotShot : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x178]; // 0xc60
	public:
		float m_flDPS; // 0xdd8		
		entity2::GameTime_t m_flNextDamageTick; // 0xddc		
		Vector m_vStart; // 0xde0		
		Vector m_vEnd; // 0xdec		
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecEntitiesHit; // 0xdf8		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnFlameAnglesChanged"
		QAngle m_angBeamAngles; // 0xe10		
	private:
		[[maybe_unused]] uint8_t __pad0e1c[0xc]; // 0xe1c
	public:
		bool m_bNeedsBeamReset; // 0xe28		
	};
};
