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
	// Size: 0x14d8
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
		int32_t m_iLane; // 0x1490		
	private:
		[[maybe_unused]] uint8_t __pad1494[0x4]; // 0x1494
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnT3Targeting1Changed"
		QAngle m_angTargeting1; // 0x1498		
	private:
		[[maybe_unused]] uint8_t __pad14a4[0xc]; // 0x14a4
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnT3Targeting2Changed"
		QAngle m_angTargeting2; // 0x14b0		
	private:
		[[maybe_unused]] uint8_t __pad14bc[0xc]; // 0x14bc
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnT3ElectricBeamCastsChanged"
		int32_t m_nElectricBeamCasts; // 0x14c8		
		// MNetworkEnable
		client::ETier3State_t m_eAliveState; // 0x14cc		
		// MNetworkEnable
		client::ETier3Phase_t m_ePhase; // 0x14d0		
	};
};
