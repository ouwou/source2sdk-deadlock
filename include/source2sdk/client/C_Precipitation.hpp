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
    // Size: 0x9e8
    // Has VTable
    #pragma pack(push, 1)
    class C_Precipitation : public client::C_BaseTrigger
    {
    public:
        float m_flDensity; // 0x998        
        [[maybe_unused]] std::uint8_t pad_0x99c[0xc]; // 0x99c
        float m_flParticleInnerDist; // 0x9a8        
        [[maybe_unused]] std::uint8_t pad_0x9ac[0x4]; // 0x9ac
        char* m_pParticleDef; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9b8[0x20]; // 0x9b8
        client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x9d8        
        bool m_bActiveParticlePrecipEmitter[1]; // 0x9e0        
        bool m_bParticlePrecipInitialized; // 0x9e1        
        bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x9e2        
        [[maybe_unused]] std::uint8_t pad_0x9e3[0x1]; // 0x9e3
        int32_t m_nAvailableSheetSequencesMaxIndex; // 0x9e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
    static_assert(sizeof(C_Precipitation) == 0x9e8);
};
