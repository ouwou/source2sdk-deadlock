#pragma once
#include "server/CConstantForceController.hpp"
#include "server/CPointEntity.hpp"
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
	// Size: 0x538
	// Has VTable
	// Is Abstract
	class CPhysForce : public server::CPointEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		CUtlSymbolLarge m_nameAttach; // 0x4e0		
		float m_force; // 0x4e8		
		float m_forceTime; // 0x4ec		
		CHandle<server::CBaseEntity> m_attachedObject; // 0x4f0		
		bool m_wasRestored; // 0x4f4		
	private:
		[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
	public:
		server::CConstantForceController m_integrator; // 0x4f8		
		
		// Datamap fields:
		// void m_pController; // 0x4d8
		// void InputActivate; // 0x0
		// void InputDeactivate; // 0x0
		// float InputForceScale; // 0x0
		// void CPhysForceForceOff; // 0x0
	};
};
