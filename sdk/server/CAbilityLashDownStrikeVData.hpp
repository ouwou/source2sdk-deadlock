#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x19d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityLashDownStrikeVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle; // 0x14f0		
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x15d0		
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strAirCastAnimGraphParam; // 0x15d8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle; // 0x15e0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineParticle; // 0x16c0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineObstructedParticle; // 0x17a0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactParticle; // 0x1880		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_StompExplosionSound; // 0x1960		
		CSoundEventName m_StompEnemyImpactSound; // 0x1970		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_DownStrikeModifier; // 0x1980		
		CEmbeddedSubclass<server::CBaseModifier> m_ImpactModifier; // 0x1990		
		// MPropertyStartGroup "+Down Strike Params"
		float m_flHeightUILingerTime; // 0x19a0		
		float m_flDamageFrustumHalfWidth; // 0x19a4		
		float m_flDamageFrustumAngle; // 0x19a8		
		float m_flDamageWaveSpeed; // 0x19ac		
		float m_flDamageTraceProbeDamageRadius; // 0x19b0		
		float m_flDamageTraceProbeWorldRadius; // 0x19b4		
		float m_flDamageTraceProbeStepUpHeight; // 0x19b8		
		float m_flDamageTraceProbeStepDownHeight; // 0x19bc		
		float m_flDamageTraceProbeDropDownRate; // 0x19c0		
		float m_flInitialDamageRadiusInMeters; // 0x19c4		
		int32_t m_nGroundCrackGap; // 0x19c8		
		float m_flGroupLengthTolerance; // 0x19cc		
		float m_flDamageEffectScaleMin; // 0x19d0		
		float m_flDamageEffectScaleMax; // 0x19d4		
	};
};
