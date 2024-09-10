#pragma once
#include "server/CBaseAnimGraph.hpp"
#include "server/CCitadelRegenComponent.hpp"
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
	// Size: 0xb38
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkIncludeByName "m_iHealth"
	// MNetworkIncludeByName "m_iTeam"
	// MNetworkExcludeByName "m_flSimulationTime"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkExcludeByName "m_flAnimTime"
	// MNetworkExcludeByUserGroup "m_flCycle"
	// MNetworkExcludeByName "m_flEncodedController"
	// MNetworkExcludeByName "m_flPoseParameter"
	// MNetworkVarNames "EHANDLE m_hEnemy"
	// MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
	class CNPC_SimpleAnimatingAI : public server::CBaseAnimGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad09a0[0x14]; // 0x9a0
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hEnemy; // 0x9b4		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelRegenComponent"
		// MNetworkAlias "CCitadelRegenComponent"
		// MNetworkTypeAlias "CCitadelRegenComponent"
		server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x9b8		
		
		// Datamap fields:
		// CHandle< CBaseEntity > m_hAbilityOwner; // 0x9a8
	};
};
