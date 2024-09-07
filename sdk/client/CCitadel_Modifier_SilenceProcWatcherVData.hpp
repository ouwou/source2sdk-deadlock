#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_BaseEventProcVData.hpp"
#include "client/CCitadel_Modifier_Base_Buildup.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x750
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_SilenceProcWatcherVData : public client::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadel_Modifier_Base_Buildup> m_BuildUpModifier; // 0x628		
		CEmbeddedSubclass<client::CCitadelModifier> m_SilenceProcModifier; // 0x638		
		CEmbeddedSubclass<client::CCitadelModifier> m_SilenceActiveModifier; // 0x648		
		CEmbeddedSubclass<client::CCitadelModifier> m_ImmunityModifier; // 0x658		
		CUtlString m_sInstantProcIfCasterHasModifier; // 0x668		
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle; // 0x670		
	};
};
