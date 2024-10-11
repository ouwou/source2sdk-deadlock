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
    // Size: 0x898
    // Has VTable
    #pragma pack(push, 1)
    class C_Precipitation : public client::C_BaseTrigger
    {
    public:
        float m_flDensity; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x84c[0xc]; // 0x84c
        float m_flParticleInnerDist; // 0x858        
        [[maybe_unused]] std::uint8_t pad_0x85c[0x4]; // 0x85c
        char* m_pParticleDef; // 0x860        
        [[maybe_unused]] std::uint8_t pad_0x868[0x20]; // 0x868
        client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x888        
        bool m_bActiveParticlePrecipEmitter[1]; // 0x890        
        bool m_bParticlePrecipInitialized; // 0x891        
        bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x892        
        [[maybe_unused]] std::uint8_t pad_0x893[0x1]; // 0x893
        int32_t m_nAvailableSheetSequencesMaxIndex; // 0x894        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
    static_assert(sizeof(C_Precipitation) == 0x898);
};
