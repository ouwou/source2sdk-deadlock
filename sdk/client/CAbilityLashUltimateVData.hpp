#pragma once
#include "client/CBaseLockonAbilityVData.hpp"
#include "client/CCitadel_Modifier_LashGrappleEnemy_Debuff.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityLashUltimateVData : public client::CBaseLockonAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle; // 0x1510		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaunchParticle; // 0x15f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltimateCastParticle; // 0x16d0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltimateCastEnemyParticle; // 0x17b0		
		// MPropertyStartGroup "Animation"
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x1890		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadel_Modifier_LashGrappleEnemy_Debuff> m_GrappleEnemyModifier; // 0x1898		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_GrabSound; // 0x18a8		
		CSoundEventName m_MissSound; // 0x18b8		
		CSoundEventName m_ThrowSound; // 0x18c8		
		// MPropertyStartGroup "+Ultimate Properties"
		float m_flAirSpeedMax; // 0x18d8		
		float m_flFallSpeedMax; // 0x18dc		
		float m_flAirDrag; // 0x18e0		
		float m_flMaxPitchRangeScale; // 0x18e4		
		float m_flThrowAnimTossPoint; // 0x18e8		
	};
};
