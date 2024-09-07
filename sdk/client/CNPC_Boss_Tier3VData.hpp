#pragma once
#include "client/CAI_CitadelNPCVData.hpp"
#include "client/CBaseModifier.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1830
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_Boss_Tier3VData : public client::CAI_CitadelNPCVData
	{
	public:
		int32_t m_nPhase2Health; // 0xf30		
		float m_flEyeZOffset; // 0xf34		
		float m_flDefaultMoveSpeed; // 0xf38		
		float m_flNoShieldMoveSpeed; // 0xf3c		
		float m_flDyingMoveSpeed; // 0xf40		
		float m_flMovingToFinalPositionSpeed; // 0xf44		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathSmallExplosionParticle; // 0xf48		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathLargeExplosionParticle; // 0x1028		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeakpointBrokenExplosionParticle; // 0x1108		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeUpExplosionParticle; // 0x11e8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName; // 0x12c8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_DyingSmallExplosion; // 0x13a8		
		CSoundEventName m_AvatarKilledSound; // 0x13b8		
		CSoundEventName m_AvatarBecomePatronSound; // 0x13c8		
		CSoundEventName m_PatronLandedSound; // 0x13d8		
		CSoundEventName m_PatronKilledSound; // 0x13e8		
		CSoundEventName m_LaserSound; // 0x13f8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_LaserBeamModifier; // 0x1408		
		CEmbeddedSubclass<client::CBaseModifier> m_DyingModifier; // 0x1418		
		CEmbeddedSubclass<client::CBaseModifier> m_VulnerableModifier; // 0x1428		
		CEmbeddedSubclass<client::CBaseModifier> m_Phase1Modifier; // 0x1438		
		CEmbeddedSubclass<client::CBaseModifier> m_Phase2Modifier; // 0x1448		
		CEmbeddedSubclass<client::CBaseModifier> m_BackdoorProtection; // 0x1458		
		CEmbeddedSubclass<client::CBaseModifier> m_ObjectiveRegen; // 0x1468		
		// MPropertyStartGroup "Laser"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserChargingParticle; // 0x1478		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserBeamEffect; // 0x1558		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserPreviewEffect; // 0x1638		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserDamageEffect; // 0x1718		
		float m_flLaserTargetingZOffset; // 0x17f8		
		float m_flLaserTrackingSpeed; // 0x17fc		
		float m_flLaserTrackingMaxSpeed; // 0x1800		
		float m_flLaserCastingTrackSpeed; // 0x1804		
		float m_flLaserCastingTrackMaxSpeed; // 0x1808		
		float m_flLaserDPSToPlayers; // 0x180c		
		float m_flLaserDPSToNPCs; // 0x1810		
		float m_flNoShieldLaserTrackingSpeed; // 0x1814		
		float m_flNoShieldLaserTrackingMaxSpeed; // 0x1818		
		float m_flNoShieldLaserCastingTrackSpeed; // 0x181c		
		float m_flNoShieldLaserCastingTrackMaxSpeed; // 0x1820		
		float m_flNoShieldLaserDPSToPlayers; // 0x1824		
		float m_flNoShieldLaserDPSToNPCs; // 0x1828		
	};
};
