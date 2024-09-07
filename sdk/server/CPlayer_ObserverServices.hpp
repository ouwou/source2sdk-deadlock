#pragma once
#include "client/CPlayerPawnComponent.hpp"
#include "client/ObserverMode_t.hpp"
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
	// Size: 0x50
	// Has VTable
	// 
	// MNetworkVarNames "uint8 m_iObserverMode"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hObserverTarget"
	class CPlayer_ObserverServices : public client::CPlayerPawnComponent
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnObserverModeChanged"
		uint8_t m_iObserverMode; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnObserverTargetChanged"
		CHandle<server::CBaseEntity> m_hObserverTarget; // 0x44		
		client::ObserverMode_t m_iObserverLastMode; // 0x48		
		bool m_bForcedObserverMode; // 0x4c		
	};
};
