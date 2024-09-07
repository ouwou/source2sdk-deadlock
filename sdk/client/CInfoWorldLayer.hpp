#pragma once
#include "client/C_BaseEntity.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5a0
	// Has VTable
	// 
	// MNetworkVarNames "string_t m_worldName"
	// MNetworkVarNames "string_t m_layerName"
	// MNetworkVarNames "bool m_bWorldLayerVisible"
	// MNetworkVarNames "bool m_bEntitiesSpawned"
	class CInfoWorldLayer : public client::C_BaseEntity
	{
	public:
		entity2::CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x558		
		// MNetworkEnable
		CUtlSymbolLarge m_worldName; // 0x580		
		// MNetworkEnable
		CUtlSymbolLarge m_layerName; // 0x588		
		// MNetworkEnable
		bool m_bWorldLayerVisible; // 0x590		
		// MNetworkEnable
		bool m_bEntitiesSpawned; // 0x591		
		bool m_bCreateAsChildSpawnGroup; // 0x592		
	private:
		[[maybe_unused]] uint8_t __pad0593[0x1]; // 0x593
	public:
		uint32_t m_hLayerSpawnGroup; // 0x594		
		bool m_bWorldLayerActuallyVisible; // 0x598		
		
		// Datamap fields:
		// void ShowWorldLayer; // 0x0
		// void HideWorldLayer; // 0x0
		// void SpawnEntities; // 0x0
		// void DestroyEntities; // 0x0
		// void ShowWorldLayerAndSpawnEntities; // 0x0
		// void HideWorldLayerAndDestroyEntities; // 0x0
	};
};
