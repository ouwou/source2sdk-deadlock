#pragma once
#include "client/C_AI_CitadelNPC.hpp"
#include "client/ETier3Phase_t.hpp"
#include "client/ETier3State_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1428
	// Has VTable
	// 
	// MNetworkVarNames "int m_iLane"
	// MNetworkVarNames "int m_nElectricBeamCasts"
	// MNetworkVarNames "ETier3State_t m_eAliveState"
	// MNetworkVarNames "ETier3Phase_t m_ePhase"
	class C_NPC_Boss_Tier3 : public client::C_AI_CitadelNPC
	{
	public:
		// MNetworkEnable
		int32_t m_iLane; // 0x13e0		
	private:
		[[maybe_unused]] uint8_t __pad13e4[0x4]; // 0x13e4
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnT3Targeting1Changed"
		QAngle m_angTargeting1; // 0x13e8		
	private:
		[[maybe_unused]] uint8_t __pad13f4[0xc]; // 0x13f4
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnT3Targeting2Changed"
		QAngle m_angTargeting2; // 0x1400		
	private:
		[[maybe_unused]] uint8_t __pad140c[0xc]; // 0x140c
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnT3ElectricBeamCastsChanged"
		int32_t m_nElectricBeamCasts; // 0x1418		
		// MNetworkEnable
		client::ETier3State_t m_eAliveState; // 0x141c		
		// MNetworkEnable
		client::ETier3Phase_t m_ePhase; // 0x1420		
	};
};
