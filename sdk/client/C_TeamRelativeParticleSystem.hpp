#pragma once
#include "client/C_ParticleSystem.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe18
	// Has VTable
	// 
	// MNetworkExcludeByName "m_iEffectIndex"
	// MNetworkIncludeByName "m_iTeamNum"
	// MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
	// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
	class C_TeamRelativeParticleSystem : public client::C_ParticleSystem
	{
	private:
		[[maybe_unused]] uint8_t __pad0de0[0x18]; // 0xde0
	public:
		CUtlSymbolLarge m_iszFriendlyEffectName; // 0xdf8		
		CUtlSymbolLarge m_iszEnemyEffectName; // 0xe00		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iFriendlyEffectIndex; // 0xe08		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEnemyEffectIndex; // 0xe10		
	};
};
