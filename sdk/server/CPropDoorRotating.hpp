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
	// Size: 0xf78
	// Has VTable
	class CPropDoorRotating : public server::CBasePropDoor
	{
	public:
		Vector m_vecAxis; // 0xee0		
		float m_flDistance; // 0xeec		
		server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xef0		
		server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xef4		
		server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xef8		
		float m_flAjarAngle; // 0xefc		
		QAngle m_angRotationAjarDeprecated; // 0xf00		
		QAngle m_angRotationClosed; // 0xf0c		
		QAngle m_angRotationOpenForward; // 0xf18		
		QAngle m_angRotationOpenBack; // 0xf24		
		QAngle m_angGoal; // 0xf30		
		Vector m_vecForwardBoundsMin; // 0xf3c		
		Vector m_vecForwardBoundsMax; // 0xf48		
		Vector m_vecBackBoundsMin; // 0xf54		
		Vector m_vecBackBoundsMax; // 0xf60		
		bool m_bAjarDoorShouldntAlwaysOpen; // 0xf6c		
	private:
		[[maybe_unused]] uint8_t __pad0f6d[0x3]; // 0xf6d
	public:
		CHandle<server::CEntityBlocker> m_hEntityBlocker; // 0xf70		
		
		// Datamap fields:
		// float InputSetRotationDistance; // 0x0
		// float InputSetSpeed; // 0x0
	};
};
