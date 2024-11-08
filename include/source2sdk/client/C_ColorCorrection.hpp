#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x7b0
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkVarNames "float32 m_MinFalloff"
    // static metadata: MNetworkVarNames "float32 m_MaxFalloff"
    // static metadata: MNetworkVarNames "float32 m_flFadeInDuration"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutDuration"
    // static metadata: MNetworkVarNames "float32 m_flMaxWeight"
    // static metadata: MNetworkVarNames "float32 m_flCurWeight"
    // static metadata: MNetworkVarNames "char m_netlookupFilename"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bMaster"
    // static metadata: MNetworkVarNames "bool m_bClientSide"
    // static metadata: MNetworkVarNames "bool m_bExclusive"
    #pragma pack(push, 1)
    class C_ColorCorrection : public client::C_BaseEntity
    {
    public:
        Vector m_vecOrigin; // 0x568        
        // metadata: MNetworkEnable
        float m_MinFalloff; // 0x574        
        // metadata: MNetworkEnable
        float m_MaxFalloff; // 0x578        
        // metadata: MNetworkEnable
        float m_flFadeInDuration; // 0x57c        
        // metadata: MNetworkEnable
        float m_flFadeOutDuration; // 0x580        
        // metadata: MNetworkEnable
        float m_flMaxWeight; // 0x584        
        // metadata: MNetworkEnable
        float m_flCurWeight; // 0x588        
        // metadata: MNetworkEnable
        char m_netlookupFilename[512]; // 0x58c        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x78c        
        // metadata: MNetworkEnable
        bool m_bMaster; // 0x78d        
        // metadata: MNetworkEnable
        bool m_bClientSide; // 0x78e        
        // metadata: MNetworkEnable
        bool m_bExclusive; // 0x78f        
        bool m_bEnabledOnClient[1]; // 0x790        
        [[maybe_unused]] std::uint8_t pad_0x791[0x3]; // 0x791
        float m_flCurWeightOnClient[1]; // 0x794        
        bool m_bFadingIn[1]; // 0x798        
        [[maybe_unused]] std::uint8_t pad_0x799[0x3]; // 0x799
        float m_flFadeStartWeight[1]; // 0x79c        
        float m_flFadeStartTime[1]; // 0x7a0        
        float m_flFadeDuration[1]; // 0x7a4        
        [[maybe_unused]] std::uint8_t pad_0x7a8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ColorCorrection because it is not a standard-layout class
    static_assert(sizeof(C_ColorCorrection) == 0x7b0);
};
