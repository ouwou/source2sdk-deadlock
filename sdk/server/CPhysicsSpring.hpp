#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x520
	// Has VTable
	class CPhysicsSpring : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		float m_flFrequency; // 0x4e0		
		float m_flDampingRatio; // 0x4e4		
		float m_flRestLength; // 0x4e8		
	private:
		[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
	public:
		CUtlSymbolLarge m_nameAttachStart; // 0x4f0		
		CUtlSymbolLarge m_nameAttachEnd; // 0x4f8		
		Vector m_start; // 0x500		
		Vector m_end; // 0x50c		
		uint32_t m_teleportTick; // 0x518		
		
		// Datamap fields:
		// void m_pSpringJoint; // 0x4d8
		// float InputSetFrequency; // 0x0
		// float InputSetDampingRatio; // 0x0
		// float InputSetRestLength; // 0x0
	};
};
