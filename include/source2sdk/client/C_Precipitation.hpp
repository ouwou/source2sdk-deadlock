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
    // Size: 0x8b8
    // Has VTable
    #pragma pack(push, 1)
    class C_Precipitation : public client::C_BaseTrigger
    {
    public:
        float m_flDensity; // 0x868        
        [[maybe_unused]] std::uint8_t pad_0x86c[0xc]; // 0x86c
        float m_flParticleInnerDist; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x87c[0x4]; // 0x87c
        char* m_pParticleDef; // 0x880        
        [[maybe_unused]] std::uint8_t pad_0x888[0x20]; // 0x888
        client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x8a8        
        bool m_bActiveParticlePrecipEmitter[1]; // 0x8b0        
        bool m_bParticlePrecipInitialized; // 0x8b1        
        bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x8b2        
        [[maybe_unused]] std::uint8_t pad_0x8b3[0x1]; // 0x8b3
        int32_t m_nAvailableSheetSequencesMaxIndex; // 0x8b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
    static_assert(sizeof(C_Precipitation) == 0x8b8);
};
