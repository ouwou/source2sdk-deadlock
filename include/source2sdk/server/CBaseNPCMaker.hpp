#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CBaseNPCMaker__ThreeStateDist_t.hpp"
#include "source2sdk/server/CBaseNPCMaker__VisibilityCriterion_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d0
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CBaseNPCMaker : public server::CBaseEntity
    {
    public:
        int32_t m_nMaxNumNPCs; // 0x4d8        
        float m_flSpawnFrequency; // 0x4dc        
        float m_flRetryFrequency; // 0x4e0        
        int32_t m_nHullCheckMode; // 0x4e4        
        // m_OnSpawnNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnSpawnNPC;
        char m_OnSpawnNPC[0x28]; // 0x4e8        
        entity2::CEntityIOOutput m_OnAllSpawned; // 0x510        
        entity2::CEntityIOOutput m_OnAllSpawnedDead; // 0x538        
        entity2::CEntityIOOutput m_OnAllLiveChildrenDead; // 0x560        
        int32_t m_nLiveChildren; // 0x588        
        int32_t m_nMaxLiveChildren; // 0x58c        
        int32_t m_nMinSpawnDistance; // 0x590        
        int32_t m_nSpawnThreshold; // 0x594        
        int32_t m_nBatchCount; // 0x598        
        float m_flRadius; // 0x59c        
        bool m_bDisabled; // 0x5a0        
        bool m_bSpawning; // 0x5a1        
        bool m_bZeroPitchAndRoll; // 0x5a2        
        [[maybe_unused]] std::uint8_t pad_0x5a3[0x1]; // 0x5a3
        // m_hIgnoreEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hIgnoreEntity;
        char m_hIgnoreEntity[0x4]; // 0x5a4        
        CUtlSymbolLarge m_iszIgnoreEnt; // 0x5a8        
        CUtlSymbolLarge m_iszDestinationGroup; // 0x5b0        
        // m_hSpawnEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSpawnEntity;
        char m_hSpawnEntity[0x4]; // 0x5b8        
        int32_t m_nCurrentBatchCount; // 0x5bc        
        server::CBaseNPCMaker__VisibilityCriterion_t m_CriterionVisibility; // 0x5c0        
        server::CBaseNPCMaker__ThreeStateDist_t m_CriterionDistance; // 0x5c4        
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x8];
        
        // Datamap fields:
        // void InputSpawn; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // int32_t InputSetMaxChildren; // 0x0
        // int32_t InputAddMaxChildren; // 0x0
        // int32_t InputSetMaxLiveChildren; // 0x0
        // float InputSetSpawnFrequency; // 0x0
        // void InputSpawnInRadius; // 0x0
        // void InputSpawnInLine; // 0x0
        // int32_t InputSpawnMultiple; // 0x0
        // CUtlSymbolLarge InputChangeDestinationGroup; // 0x0
        // int32_t InputSetMinimumSpawnDistance; // 0x0
        // CUtlSymbolLarge InputSetSpawnEntity; // 0x0
        // void CBaseNPCMakerMakerThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseNPCMaker because it is not a standard-layout class
    static_assert(sizeof(CBaseNPCMaker) == 0x5d0);
};
