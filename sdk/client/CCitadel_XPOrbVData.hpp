#pragma once
#include "client/CEntitySubclassVDataBase.hpp"
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
	// Size: 0x7d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_XPOrbVData : public client::CEntitySubclassVDataBase
	{
	public:
		bool m_bIsObjective; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad0029[0x7]; // 0x29
	public:
		// MPropertyStartGroup "Sounds"
		// MPropertyDescription "Played to the player who claimed the orb."
		CSoundEventName m_strOrbClaimed; // 0x30		
		// MPropertyDescription "Played to the teammates of the player who claimed the orb."
		CSoundEventName m_strOrbClaimedTeammate; // 0x40		
		// MPropertyDescription "Played to the player when they denied an enemy orb."
		CSoundEventName m_strOrbDenied; // 0x50		
		// MPropertyDescription "Played to assigned earners when an enemy denied their orb."
		CSoundEventName m_strOrbDeniedPlayer; // 0x60		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sOrbModel; // 0x70		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyGlowParticle; // 0x150		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyGlowParticle; // 0x230		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sGoldReceivedParticle; // 0x310		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyOrbDeniedParticle; // 0x3f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyOrbDeniedParticle; // 0x4d0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyOrbEarnedParticle; // 0x5b0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyOrbEarnedParticle; // 0x690		
		// MPropertyStartGroup "Behavior"
		float m_flOrbSpawnDelayMin; // 0x770		
		float m_flOrbSpawnDelayMax; // 0x774		
		float m_flOrbSpawnOffsetZ; // 0x778		
		float m_flOrbSpawnOffsetRandomXYZ; // 0x77c		
		float m_flGravityScale; // 0x780		
		float m_flLateralSpeedMin; // 0x784		
		float m_flLateralSpeedMax; // 0x788		
		float m_flLateralMoveDuration; // 0x78c		
		float m_flUpSpeedMin; // 0x790		
		float m_flUpSpeedMax; // 0x794		
		float m_flBurstSpeedMultiplier; // 0x798		
		float m_flBurstSpeedDuration; // 0x79c		
		float m_flOscillateFrequency; // 0x7a0		
		float m_flLifeTime; // 0x7a4		
		float m_flCollisionRadius; // 0x7a8		
		bool m_bUseKillerPlaneOffsets; // 0x7ac		
	private:
		[[maybe_unused]] uint8_t __pad07ad[0x3]; // 0x7ad
	public:
		float m_flKillerPlaneOffset; // 0x7b0		
		float m_flKillerPlaneHorizontalDecayRate; // 0x7b4		
		float m_flKillerPlaneHorizontalSpeedX; // 0x7b8		
		float m_flKillerPlaneHorizontalSpeedY; // 0x7bc		
		float m_flKillerPlaneVerticalSpeed; // 0x7c0		
		float m_flKillerPlaneSpeedNoise; // 0x7c4		
		float m_flKillerPlaneLaunchOffset; // 0x7c8		
		float m_flKillerPlaneLaunchDelay; // 0x7cc		
	};
};
