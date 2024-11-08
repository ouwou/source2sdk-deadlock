#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e8
    // Has VTable
    #pragma pack(push, 1)
    class CInfoSpawnGroupLoadUnload : public server::CLogicalEntity
    {
    public:
        entity2::CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4e8        
        entity2::CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x510        
        entity2::CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x538        
        entity2::CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x560        
        CUtlSymbolLarge m_iszSpawnGroupName; // 0x588        
        CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x590        
        CUtlSymbolLarge m_iszLandmarkName; // 0x598        
        CUtlString m_sFixedSpawnGroupName; // 0x5a0        
        float m_flTimeoutInterval; // 0x5a8        
        bool m_bStreamingStarted; // 0x5ac        
        bool m_bUnloadingStarted; // 0x5ad        
        [[maybe_unused]] std::uint8_t pad_0x5ae[0x3a];
        
        // Datamap fields:
        // void CInfoSpawnGroupLoadUnloadSpawnGroupLoadingThink; // 0x0
        // void CInfoSpawnGroupLoadUnloadSpawnGroupUnloadingThink; // 0x0
        // void InputStartSpawnGroupLoad; // 0x0
        // void InputActivateSpawnGroup; // 0x0
        // void InputStartSpawnGroupUnload; // 0x0
        // CUtlSymbolLarge InputSetSpawnGroup; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoSpawnGroupLoadUnload because it is not a standard-layout class
    static_assert(sizeof(CInfoSpawnGroupLoadUnload) == 0x5e8);
};
