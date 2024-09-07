#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x518
	// Has VTable
	// 
	// MNetworkVarNames "string_t m_worldName"
	// MNetworkVarNames "string_t m_layerName"
	// MNetworkVarNames "bool m_bWorldLayerVisible"
	// MNetworkVarNames "bool m_bEntitiesSpawned"
	class CInfoWorldLayer : public server::CBaseEntity
	{
	public:
		entity2::CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4d8		
		// MNetworkEnable
		CUtlSymbolLarge m_worldName; // 0x500		
		// MNetworkEnable
		CUtlSymbolLarge m_layerName; // 0x508		
		// MNetworkEnable
		bool m_bWorldLayerVisible; // 0x510		
		// MNetworkEnable
		bool m_bEntitiesSpawned; // 0x511		
		bool m_bCreateAsChildSpawnGroup; // 0x512		
	private:
		[[maybe_unused]] uint8_t __pad0513[0x1]; // 0x513
	public:
		uint32_t m_hLayerSpawnGroup; // 0x514		
		
		// Datamap fields:
		// void ShowWorldLayer; // 0x0
		// void HideWorldLayer; // 0x0
		// void SpawnEntities; // 0x0
		// void DestroyEntities; // 0x0
		// void ShowWorldLayerAndSpawnEntities; // 0x0
		// void HideWorldLayerAndDestroyEntities; // 0x0
	};
};
