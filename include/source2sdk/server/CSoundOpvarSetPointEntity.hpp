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
    // Size: 0x670
    // Has VTable
    #pragma pack(push, 1)
    class CSoundOpvarSetPointEntity : public server::CSoundOpvarSetPointBase
    {
    public:
        entity2::CEntityIOOutput m_OnEnter; // 0x580        
        entity2::CEntityIOOutput m_OnExit; // 0x5a8        
        bool m_bAutoDisable; // 0x5d0        
        [[maybe_unused]] std::uint8_t pad_0x5d1[0x23]; // 0x5d1
        float m_flDistanceMin; // 0x5f4        
        float m_flDistanceMax; // 0x5f8        
        float m_flDistanceMapMin; // 0x5fc        
        float m_flDistanceMapMax; // 0x600        
        float m_flOcclusionRadius; // 0x604        
        float m_flOcclusionMin; // 0x608        
        float m_flOcclusionMax; // 0x60c        
        float m_flValSetOnDisable; // 0x610        
        bool m_bSetValueOnDisable; // 0x614        
        bool m_bReloading; // 0x615        
        [[maybe_unused]] std::uint8_t pad_0x616[0x2]; // 0x616
        int32_t m_nSimulationMode; // 0x618        
        int32_t m_nVisibilitySamples; // 0x61c        
        Vector m_vDynamicProxyPoint; // 0x620        
        float m_flDynamicMaximumOcclusion; // 0x62c        
        CEntityHandle m_hDynamicEntity; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4]; // 0x634
        CUtlSymbolLarge m_iszDynamicEntityName; // 0x638        
        float m_flPathingDistanceNormFactor; // 0x640        
        Vector m_vPathingSourcePos; // 0x644        
        Vector m_vPathingListenerPos; // 0x650        
        Vector m_vPathingDirection; // 0x65c        
        int32_t m_nPathingSourceIndex; // 0x668        
        [[maybe_unused]] std::uint8_t pad_0x66c[0x4];
        
        // Datamap fields:
        // void InputSetDisabledValue; // 0x0
        // void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetPointEntity) == 0x670);
};
