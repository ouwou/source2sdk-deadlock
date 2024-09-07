#pragma once
#include "client/PointTemplateClientOnlyEntityBehavior_t.hpp"
#include "client/PointTemplateOwnerSpawnGroupType_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "server/CLogicalEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x568
	// Has VTable
	class CPointTemplate : public server::CLogicalEntity
	{
	public:
		CUtlSymbolLarge m_iszWorldName; // 0x4d8		
		CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4e0		
		CUtlSymbolLarge m_iszEntityFilterName; // 0x4e8		
		float m_flTimeoutInterval; // 0x4f0		
		bool m_bAsynchronouslySpawnEntities; // 0x4f4		
	private:
		[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
	public:
		entity2::CEntityIOOutput m_pOutputOnSpawned; // 0x4f8		
		client::PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x520		
		client::PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x524		
		CUtlVector<uint32_t> m_createdSpawnGroupHandles; // 0x528		
		CUtlVector<CEntityHandle> m_SpawnedEntityHandles; // 0x540		
		HSCRIPT m_ScriptSpawnCallback; // 0x558		
		HSCRIPT m_ScriptCallbackScope; // 0x560		
		
		// Datamap fields:
		// void InputForceSpawn; // 0x0
		// void InputDeleteCreatedSpawnGroups; // 0x0
	};
};
