#pragma once
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x998
	// Has VTable
	// 
	// MNetworkVarNames "float m_gravityScale"
	// MNetworkVarNames "float m_linearLimit"
	// MNetworkVarNames "float m_linearDamping"
	// MNetworkVarNames "float m_angularLimit"
	// MNetworkVarNames "float m_angularDamping"
	// MNetworkVarNames "float m_linearForce"
	// MNetworkVarNames "float m_flFrequency"
	// MNetworkVarNames "float m_flDampingRatio"
	// MNetworkVarNames "Vector m_vecLinearForcePointAt"
	// MNetworkVarNames "bool m_bCollapseToForcePoint"
	// MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
	// MNetworkVarNames "Vector m_vecLinearForceDirection"
	// MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
	class CTriggerPhysics : public server::CBaseTrigger
	{
	private:
		[[maybe_unused]] uint8_t __pad0938[0x10]; // 0x938
	public:
		// MNetworkEnable
		float m_gravityScale; // 0x948		
		// MNetworkEnable
		float m_linearLimit; // 0x94c		
		// MNetworkEnable
		float m_linearDamping; // 0x950		
		// MNetworkEnable
		float m_angularLimit; // 0x954		
		// MNetworkEnable
		float m_angularDamping; // 0x958		
		// MNetworkEnable
		float m_linearForce; // 0x95c		
		// MNetworkEnable
		float m_flFrequency; // 0x960		
		// MNetworkEnable
		float m_flDampingRatio; // 0x964		
		// MNetworkEnable
		Vector m_vecLinearForcePointAt; // 0x968		
		// MNetworkEnable
		bool m_bCollapseToForcePoint; // 0x974		
	private:
		[[maybe_unused]] uint8_t __pad0975[0x3]; // 0x975
	public:
		// MNetworkEnable
		Vector m_vecLinearForcePointAtWorld; // 0x978		
		// MNetworkEnable
		Vector m_vecLinearForceDirection; // 0x984		
		// MNetworkEnable
		bool m_bConvertToDebrisWhenPossible; // 0x990		
		
		// Datamap fields:
		// void m_pController; // 0x940
		// CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
	};
};
