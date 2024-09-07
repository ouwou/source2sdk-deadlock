#pragma once
#include "client/PerformanceMode_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseModelEntity.hpp"
#include "server/CPropDataComponent.hpp"
#include "server/EOverrideBlockLOS_t.hpp"
#include "server/Explosions.hpp"
#include "server/Materials.hpp"
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
	// Size: 0x840
	// Has VTable
	// 
	// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
	class CBreakable : public server::CBaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0768[0x8]; // 0x768
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CPropDataComponent"
		// MNetworkAlias "CPropDataComponent"
		// MNetworkTypeAlias "CPropDataComponent"
		server::CPropDataComponent m_CPropDataComponent; // 0x770		
		server::Materials m_Material; // 0x7b0		
		CHandle<server::CBaseEntity> m_hBreaker; // 0x7b4		
		server::Explosions m_Explosion; // 0x7b8		
	private:
		[[maybe_unused]] uint8_t __pad07bc[0x4]; // 0x7bc
	public:
		CUtlSymbolLarge m_iszSpawnObject; // 0x7c0		
		float m_flPressureDelay; // 0x7c8		
		int32_t m_iMinHealthDmg; // 0x7cc		
		CUtlSymbolLarge m_iszPropData; // 0x7d0		
		float m_impactEnergyScale; // 0x7d8		
		server::EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x7dc		
		entity2::CEntityIOOutput m_OnBreak; // 0x7e0		
		CEntityOutputTemplate<float> m_OnHealthChanged; // 0x808		
		client::PerformanceMode_t m_PerformanceMode; // 0x830		
		CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker; // 0x834		
		entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x838		
		
		// Datamap fields:
		// void InputBreak; // 0x0
		// int32_t InputSetHealth; // 0x0
		// int32_t InputAddHealth; // 0x0
		// int32_t InputRemoveHealth; // 0x0
		// float InputSetMass; // 0x0
		// void CBreakableDie; // 0x0
		// int32_t material; // 0x7fffffff
		// int32_t spawnobject; // 0x7fffffff
		// int32_t propdata; // 0x7fffffff
	};
};
