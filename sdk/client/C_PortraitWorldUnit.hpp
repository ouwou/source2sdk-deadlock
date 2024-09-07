#pragma once
#include "client/C_BaseCombatCharacter.hpp"
#include "client/CitadelPortraitEnvironmentType_t.hpp"
#include "client/HeroID_t.hpp"
#include "client/ParticleIndex_t.hpp"
#include "client/StartupBehavior_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xeb0
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	class C_PortraitWorldUnit : public client::C_BaseCombatCharacter
	{
	public:
		bool m_bSuppressIntroEffects; // 0xcb0		
		bool m_bIsAlternateLoadout; // 0xcb1		
		bool m_bSpawnBackgroundModels; // 0xcb2		
		bool m_bDeferredPortrait; // 0xcb3		
		bool m_bShowParticleAssetModifiers; // 0xcb4		
		bool m_bIgnorePortraitInfo; // 0xcb5		
		bool m_bFlyingCourier; // 0xcb6		
	private:
		[[maybe_unused]] uint8_t __pad0cb7[0x1]; // 0xcb7
	public:
		int32_t m_nEffigyStatusEffect; // 0xcb8		
	private:
		[[maybe_unused]] uint8_t __pad0cbc[0x4]; // 0xcbc
	public:
		CUtlSymbolLarge m_effigySequenceName; // 0xcc0		
		float m_flStartingAnimationCycle; // 0xcc8		
		float m_flRareLoadoutAnimChance; // 0xccc		
	private:
		[[maybe_unused]] uint8_t __pad0cd0[0x10]; // 0xcd0
	public:
		client::CitadelPortraitEnvironmentType_t m_environment; // 0xce0		
		client::StartupBehavior_t m_nStartupBehavior; // 0xce4		
	private:
		[[maybe_unused]] uint8_t __pad0ce8[0x170]; // 0xce8
	public:
		CUtlSymbolLarge m_cameraName; // 0xe58		
	private:
		[[maybe_unused]] uint8_t __pad0e60[0x30]; // 0xe60
	public:
		client::ParticleIndex_t m_nPortraitParticle; // 0xe90		
		client::ParticleIndex_t m_nAmbientParticle; // 0xe94		
		int32_t m_nCourierType; // 0xe98		
		client::HeroID_t m_heroID; // 0xe9c		
		CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xea0		
		CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xea8		
		
		// Datamap fields:
		// uint32_t heroid; // 0x7fffffff
		// bool skip_pet_spawn; // 0x7fffffff
		// int32_t model_index; // 0x7fffffff
		// bool StartDisabled; // 0x7fffffff
	};
};
