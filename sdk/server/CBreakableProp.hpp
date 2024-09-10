#pragma once
#include "client/BreakableContentsType_t.hpp"
#include "client/PerformanceMode_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseProp.hpp"
#include "server/CPropDataComponent.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CBasePlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb50
	// Has VTable
	// 
	// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
	// MNetworkVarNames "bool m_noGhostCollision"
	class CBreakableProp : public server::CBaseProp
	{
	private:
		[[maybe_unused]] uint8_t __pad09e0[0x8]; // 0x9e0
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CPropDataComponent"
		// MNetworkAlias "CPropDataComponent"
		// MNetworkTypeAlias "CPropDataComponent"
		server::CPropDataComponent m_CPropDataComponent; // 0x9e8		
		entity2::CEntityIOOutput m_OnBreak; // 0xa28		
		CEntityOutputTemplate<float> m_OnHealthChanged; // 0xa50		
		entity2::CEntityIOOutput m_OnTakeDamage; // 0xa78		
		float m_impactEnergyScale; // 0xaa0		
		int32_t m_iMinHealthDmg; // 0xaa4		
		QAngle m_preferredCarryAngles; // 0xaa8		
		float m_flPressureDelay; // 0xab4		
		float m_flDefBurstScale; // 0xab8		
		Vector m_vDefBurstOffset; // 0xabc		
		CHandle<server::CBaseEntity> m_hBreaker; // 0xac8		
		client::PerformanceMode_t m_PerformanceMode; // 0xacc		
		entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xad0		
		client::BreakableContentsType_t m_BreakableContentsType; // 0xad4		
		CUtlString m_strBreakableContentsPropGroupOverride; // 0xad8		
		CUtlString m_strBreakableContentsParticleOverride; // 0xae0		
		bool m_bHasBreakPiecesOrCommands; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0ae9[0x3]; // 0xae9
	public:
		float m_explodeDamage; // 0xaec		
		float m_explodeRadius; // 0xaf0		
	private:
		[[maybe_unused]] uint8_t __pad0af4[0x4]; // 0xaf4
	public:
		float m_explosionDelay; // 0xaf8		
	private:
		[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
	public:
		CUtlSymbolLarge m_explosionBuildupSound; // 0xb00		
		CUtlSymbolLarge m_explosionCustomEffect; // 0xb08		
		CUtlSymbolLarge m_explosionCustomSound; // 0xb10		
		CUtlSymbolLarge m_explosionModifier; // 0xb18		
		CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker; // 0xb20		
		entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xb24		
		bool m_bOriginalBlockLOS; // 0xb28		
	private:
		[[maybe_unused]] uint8_t __pad0b29[0x3]; // 0xb29
	public:
		float m_flDefaultFadeScale; // 0xb2c		
		CHandle<server::CBaseEntity> m_hLastAttacker; // 0xb30		
		CHandle<server::CBaseEntity> m_hFlareEnt; // 0xb34		
		bool m_bUsePuntSound; // 0xb38		
	private:
		[[maybe_unused]] uint8_t __pad0b39[0x7]; // 0xb39
	public:
		CUtlSymbolLarge m_iszPuntSound; // 0xb40		
		// MNetworkEnable
		bool m_noGhostCollision; // 0xb48		
		
		// Datamap fields:
		// void InputBreak; // 0x0
		// int32_t InputSetHealth; // 0x0
		// int32_t InputAddHealth; // 0x0
		// int32_t InputRemoveHealth; // 0x0
		// bool InputSetNavIgnore; // 0x0
		// void InputEnablePuntSound; // 0x0
		// void InputDisablePuntSound; // 0x0
		// void CBreakablePropBreakThink; // 0x0
		// void CBreakablePropRampToDefaultFadeScale; // 0x0
		// uint32_t m_nExplosionType; // 0xaf4
	};
};
