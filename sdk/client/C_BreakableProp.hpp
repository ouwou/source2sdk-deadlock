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
	// Size: 0xc18
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
		client::CPropDataComponent m_CPropDataComponent; // 0xad0		
		entity2::CEntityIOOutput m_OnBreak; // 0xb10		
		CEntityOutputTemplate<float> m_OnHealthChanged; // 0xb38		
		entity2::CEntityIOOutput m_OnTakeDamage; // 0xb60		
		float m_impactEnergyScale; // 0xb88		
		int32_t m_iMinHealthDmg; // 0xb8c		
		float m_flPressureDelay; // 0xb90		
		float m_flDefBurstScale; // 0xb94		
		Vector m_vDefBurstOffset; // 0xb98		
		CHandle<client::C_BaseEntity> m_hBreaker; // 0xba4		
		client::PerformanceMode_t m_PerformanceMode; // 0xba8		
		entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xbac		
		client::BreakableContentsType_t m_BreakableContentsType; // 0xbb0		
	private:
		[[maybe_unused]] uint8_t __pad0bb4[0x4]; // 0xbb4
	public:
		CUtlString m_strBreakableContentsPropGroupOverride; // 0xbb8		
		CUtlString m_strBreakableContentsParticleOverride; // 0xbc0		
		bool m_bHasBreakPiecesOrCommands; // 0xbc8		
	private:
		[[maybe_unused]] uint8_t __pad0bc9[0x3]; // 0xbc9
	public:
		float m_explodeDamage; // 0xbcc		
		float m_explodeRadius; // 0xbd0		
	private:
		[[maybe_unused]] uint8_t __pad0bd4[0x4]; // 0xbd4
	public:
		float m_explosionDelay; // 0xbd8		
	private:
		[[maybe_unused]] uint8_t __pad0bdc[0x4]; // 0xbdc
	public:
		CUtlSymbolLarge m_explosionBuildupSound; // 0xbe0		
		CUtlSymbolLarge m_explosionCustomEffect; // 0xbe8		
		CUtlSymbolLarge m_explosionCustomSound; // 0xbf0		
		CUtlSymbolLarge m_explosionModifier; // 0xbf8		
		CHandle<client::C_BasePlayerPawn> m_hPhysicsAttacker; // 0xc00		
		entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xc04		
		float m_flDefaultFadeScale; // 0xc08		
		CHandle<client::C_BaseEntity> m_hLastAttacker; // 0xc0c		
		CHandle<client::C_BaseEntity> m_hFlareEnt; // 0xc10		
		// MNetworkEnable
		bool m_noGhostCollision; // 0xc14		
		
		// Datamap fields:
		// void InputBreak; // 0x0
		// int32_t InputSetHealth; // 0x0
		// int32_t InputAddHealth; // 0x0
		// int32_t InputRemoveHealth; // 0x0
		// void C_BreakablePropBreakThink; // 0x0
		// void C_BreakablePropRampToDefaultFadeScale; // 0x0
		// uint32_t m_nExplosionType; // 0xbd4
	};
};
