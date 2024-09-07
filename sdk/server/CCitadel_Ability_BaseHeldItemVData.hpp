#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x15d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_BaseHeldItemVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_ItemModel; // 0x14f0		
	};
};
