#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1bf8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityViscousBowlingVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TransformStartFx; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFX; // 0x15d0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactFx; // 0x16b0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallTrailFx; // 0x1790		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundImpactParticle; // 0x1870		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle; // 0x1950		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DirectionParticle; // 0x1a30		
		float m_flVerticalCameraOffsetLerpTime; // 0x1b10		
		float m_flVerticalCameraOffsetBias; // 0x1b14		
		float m_flVerticalCameraOffset; // 0x1b18		
		float m_flDistanceCameraOffsetLerpTime; // 0x1b1c		
		float m_flDistanceCameraOffsetBias; // 0x1b20		
		float m_flDistanceCameraOffset; // 0x1b24		
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strPopGraphParamter; // 0x1b28		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_BallJumpSound; // 0x1b30		
		CSoundEventName m_EnterBallSound; // 0x1b40		
		CSoundEventName m_BallLoopSound; // 0x1b50		
		CSoundEventName m_ExitBallSound; // 0x1b60		
		CSoundEventName m_WallImpactSound; // 0x1b70		
		CSoundEventName m_PlayerImpactSound; // 0x1b80		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ImpactModifier; // 0x1b90		
		CEmbeddedSubclass<server::CCitadelModifier> m_DamagePreventionModifier; // 0x1ba0		
		CEmbeddedSubclass<server::CCitadelModifier> m_RollingModifier; // 0x1bb0		
		// MPropertyStartGroup "+Ball Parameters"
		float m_flTransformToBallTime; // 0x1bc0		
		float m_flTransformFromBallTime; // 0x1bc4		
		float m_flAirTurnRatio; // 0x1bc8		
		float m_flWallTurnRatioMax; // 0x1bcc		
		float m_flWallTurnRatioMin; // 0x1bd0		
		float m_flTurnRatio; // 0x1bd4		
		float m_flDefaultBallSpeed; // 0x1bd8		
		float m_flFastBallSpeed; // 0x1bdc		
		float m_flSpeedAccel; // 0x1be0		
		float m_flSpeedDeccel; // 0x1be4		
		float m_flElasticity; // 0x1be8		
		float m_flWallCheckGroundOffset; // 0x1bec		
		float m_flWallPauseTime; // 0x1bf0		
		float m_flWallAngleMin; // 0x1bf4		
	};
};
