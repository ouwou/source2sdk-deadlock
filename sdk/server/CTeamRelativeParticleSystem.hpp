#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CParticleSystem.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd00
	// Has VTable
	// 
	// MNetworkExcludeByName "m_iEffectIndex"
	// MNetworkIncludeByName "m_iTeamNum"
	// MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
	// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
	class CTeamRelativeParticleSystem : public server::CParticleSystem
	{
	public:
		CUtlSymbolLarge m_iszFriendlyEffectName; // 0xce0		
		CUtlSymbolLarge m_iszEnemyEffectName; // 0xce8		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iFriendlyEffectIndex; // 0xcf0		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEnemyEffectIndex; // 0xcf8		
	};
};
