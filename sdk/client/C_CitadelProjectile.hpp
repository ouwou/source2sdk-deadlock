#pragma once
#include "client/C_BaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x8b8
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
	class C_CitadelProjectile : public client::C_BaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0830[0xc]; // 0x830
	public:
		CHandle<client::C_BaseEntity> m_hTarget; // 0x83c		
		float m_flMaxDistance; // 0x840		
		float m_flArmingTime; // 0x844		
		float m_flChargeAmount; // 0x848		
		bool m_bCollideWithThrower; // 0x84c		
		bool m_bNewCollideWithThrower; // 0x84d		
	private:
		[[maybe_unused]] uint8_t __pad084e[0xa]; // 0x84e
	public:
		float m_flTickSoundInterval; // 0x858		
	private:
		[[maybe_unused]] uint8_t __pad085c[0x4]; // 0x85c
	public:
		// MNetworkEnable
		Vector m_vInitialVelocity; // 0x860		
		// MNetworkEnable
		Vector m_vInitialPosition; // 0x86c		
		// MNetworkEnable
		CUtlStringToken m_abilityID; // 0x878		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hThrower; // 0x87c		
		// MNetworkEnable
		CUtlSymbolLarge m_sParticleName; // 0x880		
		// MNetworkEnable
		Vector m_vecSpawnPosition; // 0x888		
		// MNetworkEnable
		float m_flProjectileSpeed; // 0x894		
		// MNetworkEnable
		float m_flMaxLifetime; // 0x898		
	private:
		[[maybe_unused]] uint8_t __pad089c[0x4]; // 0x89c
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "ParticleRadiusChanged"
		float m_flParticleRadius; // 0x8a0		
	private:
		[[maybe_unused]] uint8_t __pad08a4[0xc]; // 0x8a4
	public:
		float m_flPreviousTimeScale; // 0x8b0		
	};
};
