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
	// Size: 0x1318
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vBeamAimPos"
	class CCitadel_Ability_IceBeam : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x618]; // 0xc60
	public:
		entity2::GameTime_t m_flNextDamageTick; // 0x1278		
		Vector m_vStart; // 0x127c		
		Vector m_vEnd; // 0x1288		
	private:
		[[maybe_unused]] uint8_t __pad1294[0x3c]; // 0x1294
	public:
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecEntitiesHit; // 0x12d0		
		// MNetworkEnable
		Vector m_vBeamAimPos; // 0x12e8		
	private:
		[[maybe_unused]] uint8_t __pad12f4[0x4]; // 0x12f4
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnBeamAnglesChanged"
		QAngle m_angBeamAngles; // 0x12f8		
	private:
		[[maybe_unused]] uint8_t __pad1304[0xc]; // 0x1304
	public:
		bool m_bNeedsBeamReset; // 0x1310		
	};
};
