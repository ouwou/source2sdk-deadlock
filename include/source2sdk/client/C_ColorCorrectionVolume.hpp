#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
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
    // Size: 0xa70
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
        float m_LastEnterWeight; // 0x848        
        float m_LastEnterTime; // 0x84c        
        float m_LastExitWeight; // 0x850        
        float m_LastExitTime; // 0x854        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x858        
        [[maybe_unused]] std::uint8_t pad_0x859[0x3]; // 0x859
        // metadata: MNetworkEnable
        float m_MaxWeight; // 0x85c        
        // metadata: MNetworkEnable
        float m_FadeDuration; // 0x860        
        // metadata: MNetworkEnable
        float m_Weight; // 0x864        
        // metadata: MNetworkEnable
        char m_lookupFilename[512]; // 0x868        
        [[maybe_unused]] std::uint8_t pad_0xa68[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
    static_assert(sizeof(C_ColorCorrectionVolume) == 0xa70);
};
