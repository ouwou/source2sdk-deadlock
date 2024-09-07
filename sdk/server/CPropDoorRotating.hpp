#pragma once
#include "server/CBasePropDoor.hpp"
#include "server/PropDoorRotatingOpenDirection_e.hpp"
#include "server/PropDoorRotatingSpawnPos_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CEntityBlocker;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xf50
	// Has VTable
	class CPropDoorRotating : public server::CBasePropDoor
	{
	public:
		Vector m_vecAxis; // 0xeb8		
		float m_flDistance; // 0xec4		
		server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xec8		
		server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xecc		
		server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xed0		
		float m_flAjarAngle; // 0xed4		
		QAngle m_angRotationAjarDeprecated; // 0xed8		
		QAngle m_angRotationClosed; // 0xee4		
		QAngle m_angRotationOpenForward; // 0xef0		
		QAngle m_angRotationOpenBack; // 0xefc		
		QAngle m_angGoal; // 0xf08		
		Vector m_vecForwardBoundsMin; // 0xf14		
		Vector m_vecForwardBoundsMax; // 0xf20		
		Vector m_vecBackBoundsMin; // 0xf2c		
		Vector m_vecBackBoundsMax; // 0xf38		
		bool m_bAjarDoorShouldntAlwaysOpen; // 0xf44		
	private:
		[[maybe_unused]] uint8_t __pad0f45[0x3]; // 0xf45
	public:
		CHandle<server::CEntityBlocker> m_hEntityBlocker; // 0xf48		
		
		// Datamap fields:
		// float InputSetRotationDistance; // 0x0
		// float InputSetSpeed; // 0x0
	};
};
