#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CLogicalEntity.hpp"
#include "server/CMotorController.hpp"
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
	// Size: 0x528
	// Has VTable
	class CPhysMotor : public server::CLogicalEntity
	{
	public:
		CUtlSymbolLarge m_nameAttach; // 0x4d8		
		CHandle<server::CBaseEntity> m_hAttachedObject; // 0x4e0		
		float m_spinUp; // 0x4e4		
		float m_additionalAcceleration; // 0x4e8		
		float m_angularAcceleration; // 0x4ec		
		entity2::GameTime_t m_lastTime; // 0x4f0		
	private:
		[[maybe_unused]] uint8_t __pad04f4[0x14]; // 0x4f4
	public:
		server::CMotorController m_motor; // 0x508		
		
		// Datamap fields:
		// float InputSetTargetSpeed; // 0x0
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
	};
};
