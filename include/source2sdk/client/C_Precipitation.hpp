#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/TimedEvent.hpp"
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
    // Size: 0x888
    // Has VTable
    #pragma pack(push, 1)
    class C_Precipitation : public client::C_BaseTrigger
    {
    public:
        float m_flDensity; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x83c[0xc]; // 0x83c
        float m_flParticleInnerDist; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x84c[0x4]; // 0x84c
        char* m_pParticleDef; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x858[0x20]; // 0x858
        client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x878        
        bool m_bActiveParticlePrecipEmitter[1]; // 0x880        
        bool m_bParticlePrecipInitialized; // 0x881        
        bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x882        
        [[maybe_unused]] std::uint8_t pad_0x883[0x1]; // 0x883
        int32_t m_nAvailableSheetSequencesMaxIndex; // 0x884        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
    static_assert(sizeof(C_Precipitation) == 0x888);
};
