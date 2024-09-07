#pragma once
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
	// Size: 0x518
	// Has VTable
	class CKeepUpright : public server::CPointEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		Vector m_worldGoalAxis; // 0x4e0		
		Vector m_localTestAxis; // 0x4ec		
	private:
		[[maybe_unused]] uint8_t __pad04f8[0x8]; // 0x4f8
	public:
		CUtlSymbolLarge m_nameAttach; // 0x500		
		CHandle<server::CBaseEntity> m_attachedObject; // 0x508		
		float m_angularLimit; // 0x50c		
		bool m_bActive; // 0x510		
		bool m_bDampAllRotation; // 0x511		
		
		// Datamap fields:
		// void m_pController; // 0x4f8
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// float InputSetAngularLimit; // 0x0
	};
};
