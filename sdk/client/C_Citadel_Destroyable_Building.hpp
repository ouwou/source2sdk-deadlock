#pragma once
#include "client/CCitadelAbilityComponent.hpp"
#include "client/CCitadelAnimatingModelEntity.hpp"
#include "client/WeakPoint_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc90
	// Has VTable
	// 
	// MNetworkIncludeByName "m_bTakesDamage"
	// MNetworkIncludeByName "m_nTakeDamageFlags"
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
	// MNetworkVarNames "bool m_bDestroyed"
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "bool m_bFinal"
	class C_Citadel_Destroyable_Building : public client::CCitadelAnimatingModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xa98		
		// MNetworkEnable
		C_UtlVectorEmbeddedNetworkVar<client::WeakPoint_t> m_vecWeakPoints; // 0xc38		
		// MNetworkEnable
		// MNetworkChangeCallback "DestroyedChanged"
		bool m_bDestroyed; // 0xc88		
		// MNetworkEnable
		bool m_bActive; // 0xc89		
		// MNetworkEnable
		bool m_bFinal; // 0xc8a		
	};
};
