#pragma once
#include "client/CPlayer_ObserverServices.hpp"
#include "client/ObserverMode_t.hpp"
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
	// Size: 0xa8
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CBaseEntity> m_hOverrideObserverTarget"
	// MNetworkVarNames "ObserverMode_t m_iOverrideObserverMode"
	// MNetworkVarNames "int32 m_iSecondsAfterDeathToAllowObserving"
	class CCitadelPlayer_ObserverServices : public client::CPlayer_ObserverServices
	{
	public:
		int32_t m_nLastLocalPlayerObservedTeam; // 0x58		
		int32_t m_nLastObservedTeam; // 0x5c		
		int32_t m_nCurrentObservedTeam; // 0x60		
		CHandle<client::C_BaseEntity> m_hLastObserverTarget; // 0x64		
		CHandle<client::C_BaseEntity> m_hPreviousTeamTarget; // 0x68		
		// MNetworkEnable
		// MNetworkChangeCallback "LocalPlayerExclusive"
		CHandle<client::C_BaseEntity> m_hOverrideObserverTarget; // 0x6c		
		// MNetworkEnable
		// MNetworkChangeCallback "LocalPlayerExclusive"
		client::ObserverMode_t m_iOverrideObserverMode; // 0x70		
		// MNetworkEnable
		int32_t m_iSecondsAfterDeathToAllowObserving; // 0x74		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnTargetCameraAnglesChanged"
		QAngle m_angTargetCamera; // 0x78		
	private:
		[[maybe_unused]] uint8_t __pad0084[0xc]; // 0x84
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		// MNetworkChangeCallback "OnTargetCameraPositionChanged"
		Vector m_vTargetCameraPos; // 0x90		
	};
};
