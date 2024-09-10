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
	// Size: 0xf60
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	class C_PortraitWorldUnit : public client::C_BaseCombatCharacter
	{
	public:
		bool m_bSuppressIntroEffects; // 0xd60		
		bool m_bIsAlternateLoadout; // 0xd61		
		bool m_bSpawnBackgroundModels; // 0xd62		
		bool m_bDeferredPortrait; // 0xd63		
		bool m_bShowParticleAssetModifiers; // 0xd64		
		bool m_bIgnorePortraitInfo; // 0xd65		
		bool m_bFlyingCourier; // 0xd66		
	private:
		[[maybe_unused]] uint8_t __pad0d67[0x1]; // 0xd67
	public:
		int32_t m_nEffigyStatusEffect; // 0xd68		
	private:
		[[maybe_unused]] uint8_t __pad0d6c[0x4]; // 0xd6c
	public:
		CUtlSymbolLarge m_effigySequenceName; // 0xd70		
		float m_flStartingAnimationCycle; // 0xd78		
		float m_flRareLoadoutAnimChance; // 0xd7c		
	private:
		[[maybe_unused]] uint8_t __pad0d80[0x10]; // 0xd80
	public:
		client::CitadelPortraitEnvironmentType_t m_environment; // 0xd90		
		client::StartupBehavior_t m_nStartupBehavior; // 0xd94		
	private:
		[[maybe_unused]] uint8_t __pad0d98[0x170]; // 0xd98
	public:
		CUtlSymbolLarge m_cameraName; // 0xf08		
	private:
		[[maybe_unused]] uint8_t __pad0f10[0x30]; // 0xf10
	public:
		client::ParticleIndex_t m_nPortraitParticle; // 0xf40		
		client::ParticleIndex_t m_nAmbientParticle; // 0xf44		
		int32_t m_nCourierType; // 0xf48		
		client::HeroID_t m_heroID; // 0xf4c		
		CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xf50		
		CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xf58		
		
		// Datamap fields:
		// uint32_t heroid; // 0x7fffffff
		// bool skip_pet_spawn; // 0x7fffffff
		// int32_t model_index; // 0x7fffffff
		// bool StartDisabled; // 0x7fffffff
	};
};
