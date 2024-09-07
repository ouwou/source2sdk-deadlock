#pragma once
#include "server/CBaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x820
	// Has VTable
	// 
	// MNetworkIncludeByName "m_flTimeScale"
	// MNetworkOverride "m_flTimeScale"
	// MNetworkOverride "m_flTimeScale"
	// MNetworkVarNames "Vector m_vInitialVelocity"
	// MNetworkVarNames "Vector m_vInitialPosition"
	// MNetworkVarNames "AbilityID_t m_abilityID"
	// MNetworkVarNames "EHANDLE m_hThrower"
	// MNetworkVarNames "string_t m_sParticleName"
	// MNetworkVarNames "Vector m_vecSpawnPosition"
	// MNetworkVarNames "float m_flProjectileSpeed"
	// MNetworkVarNames "float m_flMaxLifetime"
	// MNetworkVarNames "float m_flParticleRadius"
	class CCitadelProjectile : public server::CBaseModelEntity
	{
	public:
		CHandle<server::CBaseEntity> m_hTarget; // 0x768		
		float m_flMaxDistance; // 0x76c		
		float m_flArmingTime; // 0x770		
		float m_flChargeAmount; // 0x774		
		bool m_bCollideWithThrower; // 0x778		
		bool m_bNewCollideWithThrower; // 0x779		
	private:
		[[maybe_unused]] uint8_t __pad077a[0xe]; // 0x77a
	public:
		float m_flTickSoundInterval; // 0x788		
	private:
		[[maybe_unused]] uint8_t __pad078c[0x4]; // 0x78c
	public:
		Vector m_vLastAbsOrigin; // 0x790		
		Vector m_vLastAbsVelocity; // 0x79c		
	private:
		[[maybe_unused]] uint8_t __pad07a8[0x18]; // 0x7a8
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecTargetToIgnore; // 0x7c0		
		bool m_bDetonateStarted; // 0x7d8		
	private:
		[[maybe_unused]] uint8_t __pad07d9[0x3]; // 0x7d9
	public:
		// MNetworkEnable
		Vector m_vInitialVelocity; // 0x7dc		
		// MNetworkEnable
		Vector m_vInitialPosition; // 0x7e8		
		// MNetworkEnable
		CUtlStringToken m_abilityID; // 0x7f4		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hThrower; // 0x7f8		
	private:
		[[maybe_unused]] uint8_t __pad07fc[0x4]; // 0x7fc
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_sParticleName; // 0x800		
		// MNetworkEnable
		Vector m_vecSpawnPosition; // 0x808		
		// MNetworkEnable
		float m_flProjectileSpeed; // 0x814		
		// MNetworkEnable
		float m_flMaxLifetime; // 0x818		
		// MNetworkEnable
		float m_flParticleRadius; // 0x81c		
	};
};
