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
    // Size: 0x818
    // Has VTable
    #pragma pack(push, 1)
    class CLogicNPCCounter : public server::CBaseEntity
    {
    public:
        entity2::CEntityIOOutput m_OnMinCountAll; // 0x4d8        
        entity2::CEntityIOOutput m_OnMaxCountAll; // 0x500        
        // m_OnFactorAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactorAll;
        char m_OnFactorAll[0x28]; // 0x528        
        // m_OnMinPlayerDistAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDistAll;
        char m_OnMinPlayerDistAll[0x28]; // 0x550        
        entity2::CEntityIOOutput m_OnMinCount_1; // 0x578        
        entity2::CEntityIOOutput m_OnMaxCount_1; // 0x5a0        
        // m_OnFactor_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactor_1;
        char m_OnFactor_1[0x28]; // 0x5c8        
        // m_OnMinPlayerDist_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDist_1;
        char m_OnMinPlayerDist_1[0x28]; // 0x5f0        
        entity2::CEntityIOOutput m_OnMinCount_2; // 0x618        
        entity2::CEntityIOOutput m_OnMaxCount_2; // 0x640        
        // m_OnFactor_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactor_2;
        char m_OnFactor_2[0x28]; // 0x668        
        // m_OnMinPlayerDist_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDist_2;
        char m_OnMinPlayerDist_2[0x28]; // 0x690        
        entity2::CEntityIOOutput m_OnMinCount_3; // 0x6b8        
        entity2::CEntityIOOutput m_OnMaxCount_3; // 0x6e0        
        // m_OnFactor_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactor_3;
        char m_OnFactor_3[0x28]; // 0x708        
        // m_OnMinPlayerDist_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDist_3;
        char m_OnMinPlayerDist_3[0x28]; // 0x730        
        CEntityHandle m_hSource; // 0x758        
        [[maybe_unused]] std::uint8_t pad_0x75c[0x4]; // 0x75c
        CUtlSymbolLarge m_iszSourceEntityName; // 0x760        
        float m_flDistanceMax; // 0x768        
        bool m_bDisabled; // 0x76c        
        [[maybe_unused]] std::uint8_t pad_0x76d[0x3]; // 0x76d
        int32_t m_nMinCountAll; // 0x770        
        int32_t m_nMaxCountAll; // 0x774        
        int32_t m_nMinFactorAll; // 0x778        
        int32_t m_nMaxFactorAll; // 0x77c        
        [[maybe_unused]] std::uint8_t pad_0x780[0x8]; // 0x780
        CUtlSymbolLarge m_iszNPCClassname_1; // 0x788        
        int32_t m_nNPCState_1; // 0x790        
        bool m_bInvertState_1; // 0x794        
        [[maybe_unused]] std::uint8_t pad_0x795[0x3]; // 0x795
        int32_t m_nMinCount_1; // 0x798        
        int32_t m_nMaxCount_1; // 0x79c        
        int32_t m_nMinFactor_1; // 0x7a0        
        int32_t m_nMaxFactor_1; // 0x7a4        
        [[maybe_unused]] std::uint8_t pad_0x7a8[0x4]; // 0x7a8
        float m_flDefaultDist_1; // 0x7ac        
        CUtlSymbolLarge m_iszNPCClassname_2; // 0x7b0        
        int32_t m_nNPCState_2; // 0x7b8        
        bool m_bInvertState_2; // 0x7bc        
        [[maybe_unused]] std::uint8_t pad_0x7bd[0x3]; // 0x7bd
        int32_t m_nMinCount_2; // 0x7c0        
        int32_t m_nMaxCount_2; // 0x7c4        
        int32_t m_nMinFactor_2; // 0x7c8        
        int32_t m_nMaxFactor_2; // 0x7cc        
        [[maybe_unused]] std::uint8_t pad_0x7d0[0x4]; // 0x7d0
        float m_flDefaultDist_2; // 0x7d4        
        CUtlSymbolLarge m_iszNPCClassname_3; // 0x7d8        
        int32_t m_nNPCState_3; // 0x7e0        
        bool m_bInvertState_3; // 0x7e4        
        [[maybe_unused]] std::uint8_t pad_0x7e5[0x3]; // 0x7e5
        int32_t m_nMinCount_3; // 0x7e8        
        int32_t m_nMaxCount_3; // 0x7ec        
        int32_t m_nMinFactor_3; // 0x7f0        
        int32_t m_nMaxFactor_3; // 0x7f4        
        [[maybe_unused]] std::uint8_t pad_0x7f8[0x4]; // 0x7f8
        float m_flDefaultDist_3; // 0x7fc        
        [[maybe_unused]] std::uint8_t pad_0x800[0x18];
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSourceEntity; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void CLogicNPCCounterSetNPCCounterThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicNPCCounter because it is not a standard-layout class
    static_assert(sizeof(CLogicNPCCounter) == 0x818);
};
