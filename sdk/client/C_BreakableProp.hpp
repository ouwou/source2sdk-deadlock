#pragma once
#include "client/BreakableContentsType_t.hpp"
#include "client/CBaseProp.hpp"
#include "client/CPropDataComponent.hpp"
#include "client/PerformanceMode_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};
namespace source2sdk::client
{
	struct C_BasePlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xcc8
	// Has VTable
	// 
	// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
	// MNetworkVarNames "bool m_noGhostCollision"
	class C_BreakableProp : public client::CBaseProp
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CPropDataComponent"
		// MNetworkAlias "CPropDataComponent"
		// MNetworkTypeAlias "CPropDataComponent"
		client::CPropDataComponent m_CPropDataComponent; // 0xb80		
		entity2::CEntityIOOutput m_OnBreak; // 0xbc0		
		CEntityOutputTemplate<float> m_OnHealthChanged; // 0xbe8		
		entity2::CEntityIOOutput m_OnTakeDamage; // 0xc10		
		float m_impactEnergyScale; // 0xc38		
		int32_t m_iMinHealthDmg; // 0xc3c		
		float m_flPressureDelay; // 0xc40		
		float m_flDefBurstScale; // 0xc44		
		Vector m_vDefBurstOffset; // 0xc48		
		CHandle<client::C_BaseEntity> m_hBreaker; // 0xc54		
		client::PerformanceMode_t m_PerformanceMode; // 0xc58		
		entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xc5c		
		client::BreakableContentsType_t m_BreakableContentsType; // 0xc60		
	private:
		[[maybe_unused]] uint8_t __pad0c64[0x4]; // 0xc64
	public:
		CUtlString m_strBreakableContentsPropGroupOverride; // 0xc68		
		CUtlString m_strBreakableContentsParticleOverride; // 0xc70		
		bool m_bHasBreakPiecesOrCommands; // 0xc78		
	private:
		[[maybe_unused]] uint8_t __pad0c79[0x3]; // 0xc79
	public:
		float m_explodeDamage; // 0xc7c		
		float m_explodeRadius; // 0xc80		
	private:
		[[maybe_unused]] uint8_t __pad0c84[0x4]; // 0xc84
	public:
		float m_explosionDelay; // 0xc88		
	private:
		[[maybe_unused]] uint8_t __pad0c8c[0x4]; // 0xc8c
	public:
		CUtlSymbolLarge m_explosionBuildupSound; // 0xc90		
		CUtlSymbolLarge m_explosionCustomEffect; // 0xc98		
		CUtlSymbolLarge m_explosionCustomSound; // 0xca0		
		CUtlSymbolLarge m_explosionModifier; // 0xca8		
		CHandle<client::C_BasePlayerPawn> m_hPhysicsAttacker; // 0xcb0		
		entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xcb4		
		float m_flDefaultFadeScale; // 0xcb8		
		CHandle<client::C_BaseEntity> m_hLastAttacker; // 0xcbc		
		CHandle<client::C_BaseEntity> m_hFlareEnt; // 0xcc0		
		// MNetworkEnable
		bool m_noGhostCollision; // 0xcc4		
		
		// Datamap fields:
		// void InputBreak; // 0x0
		// int32_t InputSetHealth; // 0x0
		// int32_t InputAddHealth; // 0x0
		// int32_t InputRemoveHealth; // 0x0
		// void C_BreakablePropBreakThink; // 0x0
		// void C_BreakablePropRampToDefaultFadeScale; // 0x0
		// uint32_t m_nExplosionType; // 0xc84
	};
};
