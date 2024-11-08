#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x828
    // Has VTable
    #pragma pack(push, 1)
    class CLogicNPCCounter : public server::CBaseEntity
    {
    public:
        entity2::CEntityIOOutput m_OnMinCountAll; // 0x4e8        
        entity2::CEntityIOOutput m_OnMaxCountAll; // 0x510        
        // m_OnFactorAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactorAll;
        char m_OnFactorAll[0x28]; // 0x538        
        // m_OnMinPlayerDistAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDistAll;
        char m_OnMinPlayerDistAll[0x28]; // 0x560        
        entity2::CEntityIOOutput m_OnMinCount_1; // 0x588        
        entity2::CEntityIOOutput m_OnMaxCount_1; // 0x5b0        
        // m_OnFactor_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactor_1;
        char m_OnFactor_1[0x28]; // 0x5d8        
        // m_OnMinPlayerDist_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDist_1;
        char m_OnMinPlayerDist_1[0x28]; // 0x600        
        entity2::CEntityIOOutput m_OnMinCount_2; // 0x628        
        entity2::CEntityIOOutput m_OnMaxCount_2; // 0x650        
        // m_OnFactor_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactor_2;
        char m_OnFactor_2[0x28]; // 0x678        
        // m_OnMinPlayerDist_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDist_2;
        char m_OnMinPlayerDist_2[0x28]; // 0x6a0        
        entity2::CEntityIOOutput m_OnMinCount_3; // 0x6c8        
        entity2::CEntityIOOutput m_OnMaxCount_3; // 0x6f0        
        // m_OnFactor_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactor_3;
        char m_OnFactor_3[0x28]; // 0x718        
        // m_OnMinPlayerDist_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDist_3;
        char m_OnMinPlayerDist_3[0x28]; // 0x740        
        CEntityHandle m_hSource; // 0x768        
        [[maybe_unused]] std::uint8_t pad_0x76c[0x4]; // 0x76c
        CUtlSymbolLarge m_iszSourceEntityName; // 0x770        
        float m_flDistanceMax; // 0x778        
        bool m_bDisabled; // 0x77c        
        [[maybe_unused]] std::uint8_t pad_0x77d[0x3]; // 0x77d
        int32_t m_nMinCountAll; // 0x780        
        int32_t m_nMaxCountAll; // 0x784        
        int32_t m_nMinFactorAll; // 0x788        
        int32_t m_nMaxFactorAll; // 0x78c        
        [[maybe_unused]] std::uint8_t pad_0x790[0x8]; // 0x790
        CUtlSymbolLarge m_iszNPCClassname_1; // 0x798        
        int32_t m_nNPCState_1; // 0x7a0        
        bool m_bInvertState_1; // 0x7a4        
        [[maybe_unused]] std::uint8_t pad_0x7a5[0x3]; // 0x7a5
        int32_t m_nMinCount_1; // 0x7a8        
        int32_t m_nMaxCount_1; // 0x7ac        
        int32_t m_nMinFactor_1; // 0x7b0        
        int32_t m_nMaxFactor_1; // 0x7b4        
        [[maybe_unused]] std::uint8_t pad_0x7b8[0x4]; // 0x7b8
        float m_flDefaultDist_1; // 0x7bc        
        CUtlSymbolLarge m_iszNPCClassname_2; // 0x7c0        
        int32_t m_nNPCState_2; // 0x7c8        
        bool m_bInvertState_2; // 0x7cc        
        [[maybe_unused]] std::uint8_t pad_0x7cd[0x3]; // 0x7cd
        int32_t m_nMinCount_2; // 0x7d0        
        int32_t m_nMaxCount_2; // 0x7d4        
        int32_t m_nMinFactor_2; // 0x7d8        
        int32_t m_nMaxFactor_2; // 0x7dc        
        [[maybe_unused]] std::uint8_t pad_0x7e0[0x4]; // 0x7e0
        float m_flDefaultDist_2; // 0x7e4        
        CUtlSymbolLarge m_iszNPCClassname_3; // 0x7e8        
        int32_t m_nNPCState_3; // 0x7f0        
        bool m_bInvertState_3; // 0x7f4        
        [[maybe_unused]] std::uint8_t pad_0x7f5[0x3]; // 0x7f5
        int32_t m_nMinCount_3; // 0x7f8        
        int32_t m_nMaxCount_3; // 0x7fc        
        int32_t m_nMinFactor_3; // 0x800        
        int32_t m_nMaxFactor_3; // 0x804        
        [[maybe_unused]] std::uint8_t pad_0x808[0x4]; // 0x808
        float m_flDefaultDist_3; // 0x80c        
        [[maybe_unused]] std::uint8_t pad_0x810[0x18];
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSourceEntity; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void CLogicNPCCounterSetNPCCounterThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicNPCCounter because it is not a standard-layout class
    static_assert(sizeof(CLogicNPCCounter) == 0x828);
};
