#pragma once
#include "server/CBaseModelEntity.hpp"
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
	// Size: 0x810
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
	class CCitadelZipLineNode : public server::CBaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0768[0x10]; // 0x768
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "connectionsChanged"
		CNetworkUtlVectorBase<CHandle<server::CCitadelZipLineNode>> m_vecConnections; // 0x778		
	private:
		[[maybe_unused]] uint8_t __pad0790[0x34]; // 0x790
	public:
		Vector m_vTangentIn; // 0x7c4		
		Vector m_vTangentOut; // 0x7d0		
	private:
		[[maybe_unused]] uint8_t __pad07dc[0x4]; // 0x7dc
	public:
		CUtlSymbolLarge m_strGuardBossName; // 0x7e0		
		CUtlSymbolLarge m_strGuardBossName2; // 0x7e8		
		CUtlSymbolLarge m_strGuardBossName3; // 0x7f0		
		// MNetworkEnable
		int16_t m_eCaptureState; // 0x7f8		
		// MNetworkEnable
		int16_t m_iPrimaryLane; // 0x7fa		
		// MNetworkEnable
		int16_t m_nRopesParity; // 0x7fc		
		// MNetworkEnable
		bool m_bCornerNode; // 0x7fe		
		// MNetworkEnable
		bool m_bCapturable; // 0x7ff		
		// MNetworkEnable
		bool m_bAlwaysUsable; // 0x800		
		// MNetworkEnable
		bool m_bOneWay; // 0x801		
		// MNetworkEnable
		bool m_bDisableZippingToByPlayers; // 0x802		
	private:
		[[maybe_unused]] uint8_t __pad0803[0x1]; // 0x803
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hGuardingBoss; // 0x804		
		// MNetworkEnable
		float m_flRopeRadius; // 0x808		
		// MNetworkEnable
		bool m_bEnabled; // 0x80c		
	};
};
