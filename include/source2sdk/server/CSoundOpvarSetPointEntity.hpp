#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CSoundOpvarSetPointBase.hpp"
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
    // Size: 0x668
    // Has VTable
    #pragma pack(push, 1)
    class CSoundOpvarSetPointEntity : public server::CSoundOpvarSetPointBase
    {
    public:
        entity2::CEntityIOOutput m_OnEnter; // 0x578        
        entity2::CEntityIOOutput m_OnExit; // 0x5a0        
        bool m_bAutoDisable; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5c9[0x23]; // 0x5c9
        float m_flDistanceMin; // 0x5ec        
        float m_flDistanceMax; // 0x5f0        
        float m_flDistanceMapMin; // 0x5f4        
        float m_flDistanceMapMax; // 0x5f8        
        float m_flOcclusionRadius; // 0x5fc        
        float m_flOcclusionMin; // 0x600        
        float m_flOcclusionMax; // 0x604        
        float m_flValSetOnDisable; // 0x608        
        bool m_bSetValueOnDisable; // 0x60c        
        bool m_bReloading; // 0x60d        
        [[maybe_unused]] std::uint8_t pad_0x60e[0x2]; // 0x60e
        int32_t m_nSimulationMode; // 0x610        
        int32_t m_nVisibilitySamples; // 0x614        
        Vector m_vDynamicProxyPoint; // 0x618        
        float m_flDynamicMaximumOcclusion; // 0x624        
        CEntityHandle m_hDynamicEntity; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x62c[0x4]; // 0x62c
        CUtlSymbolLarge m_iszDynamicEntityName; // 0x630        
        float m_flPathingDistanceNormFactor; // 0x638        
        Vector m_vPathingSourcePos; // 0x63c        
        Vector m_vPathingListenerPos; // 0x648        
        Vector m_vPathingDirection; // 0x654        
        int32_t m_nPathingSourceIndex; // 0x660        
        [[maybe_unused]] std::uint8_t pad_0x664[0x4];
        
        // Datamap fields:
        // void InputSetDisabledValue; // 0x0
        // void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetPointEntity) == 0x668);
};
