#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBreakable.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBasePlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x950
	// Has VTable
	class CPhysBox : public server::CBreakable
	{
	public:
		int32_t m_damageType; // 0x840		
		float m_massScale; // 0x844		
		int32_t m_damageToEnableMotion; // 0x848		
		float m_flForceToEnableMotion; // 0x84c		
		QAngle m_angPreferredCarryAngles; // 0x850		
		bool m_bNotSolidToWorld; // 0x85c		
		bool m_bEnableUseOutput; // 0x85d		
	private:
		[[maybe_unused]] uint8_t __pad085e[0x2]; // 0x85e
	public:
		int32_t m_iExploitableByPlayer; // 0x860		
		float m_flTouchOutputPerEntityDelay; // 0x864		
		entity2::CEntityIOOutput m_OnDamaged; // 0x868		
		entity2::CEntityIOOutput m_OnAwakened; // 0x890		
		entity2::CEntityIOOutput m_OnMotionEnabled; // 0x8b8		
		entity2::CEntityIOOutput m_OnPlayerUse; // 0x8e0		
		entity2::CEntityIOOutput m_OnStartTouch; // 0x908		
		CHandle<server::CBasePlayerPawn> m_hCarryingPlayer; // 0x930		
		
		// Datamap fields:
		// void InputWake; // 0x0
		// void InputSleep; // 0x0
		// void InputEnableMotion; // 0x0
		// void InputDisableMotion; // 0x0
		// void InputForceDrop; // 0x0
		// void InputDisableFloating; // 0x0
	};
};
