#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1840
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityJumpVData : public server::CitadelAbilityVData
	{
	public:
		float m_flShootingLockoutAfterJump; // 0x14f0		
	private:
		[[maybe_unused]] uint8_t __pad14f4[0x4]; // 0x14f4
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashJumpParticle; // 0x14f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AirJumpParticle; // 0x15d8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallJumpParticle; // 0x16b8		
		// MPropertyStartGroup "Air Jump"
		CSoundEventName m_AirJumpExecutedSound; // 0x1798		
		float m_flMantleRefundWindow; // 0x17a8		
		float m_flZiplineRefundWindow; // 0x17ac		
		float m_flLateJumpGraceWindow; // 0x17b0		
		// MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
		float m_flMaxSpeedDelta; // 0x17b4		
		// MPropertyStartGroup "Roll Jump"
		CSoundEventName m_strDashJumpActivate; // 0x17b8		
		float m_flDashJumpStartTime; // 0x17c8		
		float m_flDashJumpEndTime; // 0x17cc		
		// MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
		float m_flDashJumpDistanceInMeters; // 0x17d0		
	private:
		[[maybe_unused]] uint8_t __pad17d4[0x4]; // 0x17d4
	public:
		float m_flDashJumpVerticalSpeed; // 0x17d8		
		float m_flDashJumpMissMaxSpeed; // 0x17dc		
		float m_flDashJumpMantleDisableTime; // 0x17e0		
	private:
		[[maybe_unused]] uint8_t __pad17e4[0x4]; // 0x17e4
	public:
		// MPropertyStartGroup "Wall Jump"
		CSoundEventName m_WallJumpExecutedSound; // 0x17e8		
		// MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
		float m_flCollidedWallMaxDist; // 0x17f8		
		// MPropertyStartGroup "Speed to apply away from the wall"
		float m_flWallJumpNormalSpeed; // 0x17fc		
		CPiecewiseCurve m_WallJumpAirDragCurve; // 0x1800		
	};
};
