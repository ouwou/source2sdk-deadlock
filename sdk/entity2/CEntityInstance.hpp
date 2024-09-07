#pragma once
#include <cstdint>
namespace source2sdk::entity2
{
	struct CEntityIdentity;
};
namespace source2sdk::entity2
{
	struct CScriptComponent;
};

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MNetworkVarNames "CEntityIdentity * m_pEntity"
	// MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
	class CEntityInstance
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkDisable
		CUtlSymbolLarge m_iszPrivateVScripts; // 0x8		
		// MNetworkEnable
		// MNetworkPriority "56"
		entity2::CEntityIdentity* m_pEntity; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0018[0x10]; // 0x18
	public:
		// MNetworkEnable
		// MNetworkDisable
		entity2::CScriptComponent* m_CScriptComponent; // 0x28		
		bool m_bVisibleinPVS; // 0x30		
	};
};
