#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x6e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Burrow_VData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowPlayerParticle; // 0x5f8		
		float m_flDesatAmount; // 0x6d8		
		Color m_DesatTint; // 0x6dc		
		Color m_SatTint; // 0x6e0		
		Color m_Outline; // 0x6e4		
	};
};
