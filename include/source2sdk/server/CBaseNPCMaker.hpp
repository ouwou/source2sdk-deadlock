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
    class CAI_BaseNPC;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e8
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CBaseNPCMaker : public server::CBaseEntity
    {
    public:
        int32_t m_nMaxNumNPCs; // 0x4e8        
        float m_flSpawnFrequency; // 0x4ec        
        float m_flRetryFrequency; // 0x4f0        
        int32_t m_nHullCheckMode; // 0x4f4        
        // m_OnSpawnNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnSpawnNPC;
        char m_OnSpawnNPC[0x28]; // 0x4f8        
        entity2::CEntityIOOutput m_OnAllSpawned; // 0x520        
        entity2::CEntityIOOutput m_OnAllSpawnedDead; // 0x548        
        entity2::CEntityIOOutput m_OnAllLiveChildrenDead; // 0x570        
        int32_t m_nLiveChildren; // 0x598        
        int32_t m_nMaxLiveChildren; // 0x59c        
        int32_t m_nMinSpawnDistance; // 0x5a0        
        int32_t m_nSpawnThreshold; // 0x5a4        
        int32_t m_nBatchCount; // 0x5a8        
        float m_flRadius; // 0x5ac        
        bool m_bDisabled; // 0x5b0        
        bool m_bSpawning; // 0x5b1        
        bool m_bZeroPitchAndRoll; // 0x5b2        
        [[maybe_unused]] std::uint8_t pad_0x5b3[0x1]; // 0x5b3
        // m_hIgnoreEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hIgnoreEntity;
        char m_hIgnoreEntity[0x4]; // 0x5b4        
        CUtlSymbolLarge m_iszIgnoreEnt; // 0x5b8        
        CUtlSymbolLarge m_iszDestinationGroup; // 0x5c0        
        // m_hSpawnEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSpawnEntity;
        char m_hSpawnEntity[0x4]; // 0x5c8        
        // m_hSpawnedNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hSpawnedNPC;
        char m_hSpawnedNPC[0x4]; // 0x5cc        
        int32_t m_nCurrentBatchCount; // 0x5d0        
        server::CBaseNPCMaker__VisibilityCriterion_t m_CriterionVisibility; // 0x5d4        
        server::CBaseNPCMaker__ThreeStateDist_t m_CriterionDistance; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0xc];
        
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
        // void InputEnableInfinite; // 0x0
        // bool InputDisableInfinite; // 0x0
        // void CBaseNPCMakerMakerThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseNPCMaker because it is not a standard-layout class
    static_assert(sizeof(CBaseNPCMaker) == 0x5e8);
};
