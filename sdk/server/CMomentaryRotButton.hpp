#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CRotButton.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa38
	// Has VTable
	class CMomentaryRotButton : public server::CRotButton
	{
	public:
		CEntityOutputTemplate<float> m_Position; // 0x938		
		entity2::CEntityIOOutput m_OnUnpressed; // 0x960		
		entity2::CEntityIOOutput m_OnFullyOpen; // 0x988		
		entity2::CEntityIOOutput m_OnFullyClosed; // 0x9b0		
		entity2::CEntityIOOutput m_OnReachedPosition; // 0x9d8		
		int32_t m_lastUsed; // 0xa00		
		QAngle m_start; // 0xa04		
		QAngle m_end; // 0xa10		
		float m_IdealYaw; // 0xa1c		
		CUtlSymbolLarge m_sNoise; // 0xa20		
		bool m_bUpdateTarget; // 0xa28		
	private:
		[[maybe_unused]] uint8_t __pad0a29[0x3]; // 0xa29
	public:
		int32_t m_direction; // 0xa2c		
		float m_returnSpeed; // 0xa30		
		float m_flStartPosition; // 0xa34		
		
		// Datamap fields:
		// bool m_bSolidBsp; // 0x840
		// void CMomentaryRotButtonUseMoveDone; // 0x0
		// void CMomentaryRotButtonReturnMoveDone; // 0x0
		// void CMomentaryRotButtonSetPositionMoveDone; // 0x0
		// void CMomentaryRotButtonUpdateThink; // 0x0
		// float InputSetPosition; // 0x0
		// float InputSetPositionImmediately; // 0x0
		// void InputDisableUpdateTarget; // 0x0
		// void InputEnableUpdateTarget; // 0x0
	};
};
