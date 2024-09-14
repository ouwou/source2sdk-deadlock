#pragma once
#include "source2sdk/client/C_FuncBrush.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x848
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "string_t m_EffectName"
    // static metadata: MNetworkVarNames "bool m_bState"
    #pragma pack(push, 1)
    class C_FuncElectrifiedVolume : public client::C_FuncBrush
    {
    public:
        client::ParticleIndex_t m_nAmbientEffect; // 0x830        
        [[maybe_unused]] std::uint8_t pad_0x834[0x4]; // 0x834
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_EffectName; // 0x838        
        // metadata: MNetworkEnable
        bool m_bState; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x841[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FuncElectrifiedVolume because it is not a standard-layout class
    static_assert(sizeof(C_FuncElectrifiedVolume) == 0x848);
};
