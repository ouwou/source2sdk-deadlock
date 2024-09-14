#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5a0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "string_t m_worldName"
    // static metadata: MNetworkVarNames "string_t m_layerName"
    // static metadata: MNetworkVarNames "bool m_bWorldLayerVisible"
    // static metadata: MNetworkVarNames "bool m_bEntitiesSpawned"
    #pragma pack(push, 1)
    class CInfoWorldLayer : public client::C_BaseEntity
    {
    public:
        entity2::CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x558        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_worldName; // 0x580        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_layerName; // 0x588        
        // metadata: MNetworkEnable
        bool m_bWorldLayerVisible; // 0x590        
        // metadata: MNetworkEnable
        bool m_bEntitiesSpawned; // 0x591        
        bool m_bCreateAsChildSpawnGroup; // 0x592        
        [[maybe_unused]] std::uint8_t pad_0x593[0x1]; // 0x593
        uint32_t m_hLayerSpawnGroup; // 0x594        
        bool m_bWorldLayerActuallyVisible; // 0x598        
        [[maybe_unused]] std::uint8_t pad_0x599[0x7];
        
        // Datamap fields:
        // void ShowWorldLayer; // 0x0
        // void HideWorldLayer; // 0x0
        // void SpawnEntities; // 0x0
        // void DestroyEntities; // 0x0
        // void ShowWorldLayerAndSpawnEntities; // 0x0
        // void HideWorldLayerAndDestroyEntities; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoWorldLayer because it is not a standard-layout class
    static_assert(sizeof(CInfoWorldLayer) == 0x5a0);
};
