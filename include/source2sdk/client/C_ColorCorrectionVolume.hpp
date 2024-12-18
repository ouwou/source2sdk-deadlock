#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xbc0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "float m_MaxWeight"
    // static metadata: MNetworkVarNames "float m_FadeDuration"
    // static metadata: MNetworkVarNames "float m_Weight"
    // static metadata: MNetworkVarNames "char m_lookupFilename"
    #pragma pack(push, 1)
    class C_ColorCorrectionVolume : public client::C_BaseTrigger
    {
    public:
        float m_LastEnterWeight; // 0x998        
        entity2::GameTime_t m_LastEnterTime; // 0x99c        
        float m_LastExitWeight; // 0x9a0        
        entity2::GameTime_t m_LastExitTime; // 0x9a4        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x9a8        
        [[maybe_unused]] std::uint8_t pad_0x9a9[0x3]; // 0x9a9
        // metadata: MNetworkEnable
        float m_MaxWeight; // 0x9ac        
        // metadata: MNetworkEnable
        float m_FadeDuration; // 0x9b0        
        // metadata: MNetworkEnable
        float m_Weight; // 0x9b4        
        // metadata: MNetworkEnable
        char m_lookupFilename[512]; // 0x9b8        
        [[maybe_unused]] std::uint8_t pad_0xbb8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
    static_assert(sizeof(C_ColorCorrectionVolume) == 0xbc0);
};
