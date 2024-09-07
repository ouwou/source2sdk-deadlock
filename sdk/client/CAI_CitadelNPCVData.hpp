#pragma once
#include "client/CAI_BaseNPCVData.hpp"
#include "client/CCitadelWeaponInfo.hpp"
#include "client/EAbilitySlots_t.hpp"
#include "resourcesystem/InfoForResourceTypeCNmGraphVariation.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	class CAI_CitadelNPCVData : public client::CAI_BaseNPCVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCNmGraphVariation>> m_sAG2VariationName; // 0x220		
		CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities; // 0x300		
		float m_flSightRangePlayers; // 0x328		
		float m_flSightRangeNPCs; // 0x32c		
		CGlobalSymbol m_MeleeAnimName; // 0x330		
		float m_flMeleeAttemptRange; // 0x338		
		float m_flMeleeHitRange; // 0x33c		
		CUtlVector<float> m_MeleeAttackPoints; // 0x340		
		float m_flMaxHealthBarDrawDistance; // 0x358		
		// MPropertyStartGroup "Movement"
		float m_flWalkSpeed; // 0x35c		
		float m_flRunSpeed; // 0x360		
		float m_flTurnRate; // 0x364		
		float m_flAcceleration; // 0x368		
		float m_flStepHeight; // 0x36c		
		int8_t m_navHull; // 0x370		
		bool m_bFaceTargetEvenWhenMoving; // 0x371		
	private:
		[[maybe_unused]] uint8_t __pad0372[0x6]; // 0x372
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_BeamStartSound; // 0x378		
		CSoundEventName m_BeamStopSound; // 0x388		
		CSoundEventName m_BeamPointStartLoopSound; // 0x398		
		CSoundEventName m_BeamPointEndLoopSound; // 0x3a8		
		CSoundEventName m_BeamPointClosestLoopSound; // 0x3b8		
		CSoundEventName m_strAmbientLoopSound; // 0x3c8		
		CSoundEventName m_DeathSound; // 0x3d8		
		CSoundEventName m_strLastHitSound; // 0x3e8		
		bool m_bPlayLastHitSound; // 0x3f8		
	private:
		[[maybe_unused]] uint8_t __pad03f9[0x7]; // 0x3f9
	public:
		CSoundEventName m_MeleeHitSound; // 0x400		
		CSoundEventName m_MeleeHitPlayerSound; // 0x410		
		// MPropertyStartGroup "Visuals"
		// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
		CUtlString m_sDefaultMaterialGroupName; // 0x420		
		// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
		CUtlString m_sEnemyMaterialGroupName; // 0x428		
		// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
		CUtlString m_sTeam1MaterialGroupName; // 0x430		
		// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
		CUtlString m_sTeam2MaterialGroupName; // 0x438		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle; // 0x440		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle; // 0x520		
		float m_flModelScale; // 0x600		
	private:
		[[maybe_unused]] uint8_t __pad0604[0x4]; // 0x604
	public:
		// MPropertyDescription "Particle to play instead of doing a ragdoll"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle; // 0x608		
		// MPropertyStartGroup "Health Bar"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealthBarParticle; // 0x6e8		
		CUtlString m_sHealthBarAttachment; // 0x7c8		
		Color m_HealthBarColorFriend; // 0x7d0		
		Color m_HealthBarColorEnemy; // 0x7d4		
		Color m_HealthBarColorTeam1; // 0x7d8		
		Color m_HealthBarColorTeam2; // 0x7dc		
		Color m_HealthBarColorTeamNeutral; // 0x7e0		
		// MPropertyStartGroup "Misc"
		float m_flHealthBarOffset; // 0x7e4		
		// MPropertyStartGroup "Beam Weapon"
		float m_flBeamWeaponWidth; // 0x7e8		
		float m_flBeamTurnRate; // 0x7ec		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamWeaponParticle; // 0x7f0		
		// MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
		float m_flPhysicsImpulseMultiplier; // 0x8d0		
	private:
		[[maybe_unused]] uint8_t __pad08d4[0x4]; // 0x8d4
	public:
		client::CCitadelWeaponInfo m_WeaponInfo; // 0x8d8		
	};
};
