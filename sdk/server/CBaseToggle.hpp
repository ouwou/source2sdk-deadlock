#pragma once
#include "server/CBaseModelEntity.hpp"
#include "server/TOGGLE_STATE.hpp"
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
	// Size: 0x7e8
	// Has VTable
	class CBaseToggle : public server::CBaseModelEntity
	{
	public:
		server::TOGGLE_STATE m_toggle_state; // 0x768		
		float m_flMoveDistance; // 0x76c		
		float m_flWait; // 0x770		
		float m_flLip; // 0x774		
		bool m_bAlwaysFireBlockedOutputs; // 0x778		
	private:
		[[maybe_unused]] uint8_t __pad0779[0x3]; // 0x779
	public:
		Vector m_vecPosition1; // 0x77c		
		Vector m_vecPosition2; // 0x788		
		QAngle m_vecMoveAng; // 0x794		
		QAngle m_vecAngle1; // 0x7a0		
		QAngle m_vecAngle2; // 0x7ac		
		float m_flHeight; // 0x7b8		
		CHandle<server::CBaseEntity> m_hActivator; // 0x7bc		
		Vector m_vecFinalDest; // 0x7c0		
		QAngle m_vecFinalAngle; // 0x7cc		
		int32_t m_movementType; // 0x7d8		
	private:
		[[maybe_unused]] uint8_t __pad07dc[0x4]; // 0x7dc
	public:
		CUtlSymbolLarge m_sMaster; // 0x7e0		
	};
};
