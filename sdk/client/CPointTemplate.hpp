#pragma once
#include "client/CLogicalEntity.hpp"
#include "client/PointTemplateClientOnlyEntityBehavior_t.hpp"
#include "client/PointTemplateOwnerSpawnGroupType_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5e8
	// Has VTable
	class CPointTemplate : public client::CLogicalEntity
	{
	public:
		CUtlSymbolLarge m_iszWorldName; // 0x558		
		CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x560		
		CUtlSymbolLarge m_iszEntityFilterName; // 0x568		
		float m_flTimeoutInterval; // 0x570		
		bool m_bAsynchronouslySpawnEntities; // 0x574		
	private:
		[[maybe_unused]] uint8_t __pad0575[0x3]; // 0x575
	public:
		entity2::CEntityIOOutput m_pOutputOnSpawned; // 0x578		
		client::PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x5a0		
		client::PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x5a4		
		CUtlVector<uint32_t> m_createdSpawnGroupHandles; // 0x5a8		
		CUtlVector<CEntityHandle> m_SpawnedEntityHandles; // 0x5c0		
		HSCRIPT m_ScriptSpawnCallback; // 0x5d8		
		HSCRIPT m_ScriptCallbackScope; // 0x5e0		
		
		// Datamap fields:
		// void InputForceSpawn; // 0x0
		// void InputDeleteCreatedSpawnGroups; // 0x0
	};
};
