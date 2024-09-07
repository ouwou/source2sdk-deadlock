#pragma once
#include "client/C_BaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x888
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
	class C_TriggerPhysics : public client::C_BaseTrigger
	{
	public:
		// MNetworkEnable
		float m_gravityScale; // 0x838		
		// MNetworkEnable
		float m_linearLimit; // 0x83c		
		// MNetworkEnable
		float m_linearDamping; // 0x840		
		// MNetworkEnable
		float m_angularLimit; // 0x844		
		// MNetworkEnable
		float m_angularDamping; // 0x848		
		// MNetworkEnable
		float m_linearForce; // 0x84c		
		// MNetworkEnable
		float m_flFrequency; // 0x850		
		// MNetworkEnable
		float m_flDampingRatio; // 0x854		
		// MNetworkEnable
		Vector m_vecLinearForcePointAt; // 0x858		
		// MNetworkEnable
		bool m_bCollapseToForcePoint; // 0x864		
	private:
		[[maybe_unused]] uint8_t __pad0865[0x3]; // 0x865
	public:
		// MNetworkEnable
		Vector m_vecLinearForcePointAtWorld; // 0x868		
		// MNetworkEnable
		Vector m_vecLinearForceDirection; // 0x874		
		// MNetworkEnable
		bool m_bConvertToDebrisWhenPossible; // 0x880		
	};
};
