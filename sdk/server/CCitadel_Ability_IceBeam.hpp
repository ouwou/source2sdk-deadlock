#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0x1178
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vBeamAimPos"
	// MNetworkVarNames "QAngle m_angBeamAngles"
	class CCitadel_Ability_IceBeam : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x618]; // 0xad8
	public:
		entity2::GameTime_t m_flNextDamageTick; // 0x10f0		
		Vector m_vStart; // 0x10f4		
		Vector m_vEnd; // 0x1100		
	private:
		[[maybe_unused]] uint8_t __pad110c[0x3c]; // 0x110c
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit; // 0x1148		
		// MNetworkEnable
		Vector m_vBeamAimPos; // 0x1160		
		// MNetworkEnable
		QAngle m_angBeamAngles; // 0x116c		
	};
};
