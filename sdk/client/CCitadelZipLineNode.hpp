#pragma once
#include "client/C_BaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x8a0
	// Has VTable
	// 
	// MNetworkVarNames "CHandle<CCitadelZipLineNode> m_vecConnections"
	// MNetworkVarNames "int16 m_eCaptureState"
	// MNetworkVarNames "int16 m_iPrimaryLane"
	// MNetworkVarNames "int16 m_nRopesParity"
	// MNetworkVarNames "bool m_bCornerNode"
	// MNetworkVarNames "bool m_bCapturable"
	// MNetworkVarNames "bool m_bAlwaysUsable"
	// MNetworkVarNames "bool m_bOneWay"
	// MNetworkVarNames "bool m_bDisableZippingToByPlayers"
	// MNetworkVarNames "EHANDLE m_hGuardingBoss"
	// MNetworkVarNames "float m_flRopeRadius"
	// MNetworkVarNames "bool m_bEnabled"
	class CCitadelZipLineNode : public client::C_BaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0830[0x40]; // 0x830
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "connectionsChanged"
		C_NetworkUtlVectorBase<CHandle<client::CCitadelZipLineNode>> m_vecConnections; // 0x870		
		// MNetworkEnable
		int16_t m_eCaptureState; // 0x888		
		// MNetworkEnable
		int16_t m_iPrimaryLane; // 0x88a		
		// MNetworkEnable
		int16_t m_nRopesParity; // 0x88c		
		// MNetworkEnable
		bool m_bCornerNode; // 0x88e		
		// MNetworkEnable
		bool m_bCapturable; // 0x88f		
		// MNetworkEnable
		bool m_bAlwaysUsable; // 0x890		
		// MNetworkEnable
		bool m_bOneWay; // 0x891		
		// MNetworkEnable
		bool m_bDisableZippingToByPlayers; // 0x892		
	private:
		[[maybe_unused]] uint8_t __pad0893[0x1]; // 0x893
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hGuardingBoss; // 0x894		
		// MNetworkEnable
		float m_flRopeRadius; // 0x898		
		// MNetworkEnable
		bool m_bEnabled; // 0x89c		
	};
};
