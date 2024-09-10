#pragma once
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x98
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hOuter"
    // static metadata: MNetworkVarNames "HitGroup_t m_nCritHitGroup"
    // static metadata: MNetworkVarNames "int m_nBodyGroup"
    // static metadata: MNetworkVarNames "bool m_bPermanentlyBroken"
    // static metadata: MNetworkVarNames "int m_nBrokenBodygroupIndex"
    #pragma pack(push, 1)
    struct WeakPoint_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x7c]; // 0x0
        bool m_bRegistered; // 0x7c        
        [[maybe_unused]] std::uint8_t pad_0x7d[0x3]; // 0x7d
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnOuterChanged"
        // m_hOuter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOuter;
        char m_hOuter[0x4]; // 0x80        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashDataChanged"
        client::HitGroup_t m_nCritHitGroup; // 0x84        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashDataChanged"
        int32_t m_nBodyGroup; // 0x88        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPermanentlyBroken"
        bool m_bPermanentlyBroken; // 0x8c        
        [[maybe_unused]] std::uint8_t pad_0x8d[0x3]; // 0x8d
        // metadata: MNetworkEnable
        int32_t m_nBrokenBodygroupIndex; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x94[0x4];
        
        // Datamap fields:
        // void m_OnBreakDelegate; // 0x60
        // void m_params; // 0x38
        // void m_nBreakEffectsAttachment; // 0x30
        // void m_nBreakTick; // 0x70
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WeakPoint_t, m_bRegistered) == 0x7c);
    static_assert(offsetof(WeakPoint_t, m_hOuter) == 0x80);
    static_assert(offsetof(WeakPoint_t, m_nCritHitGroup) == 0x84);
    static_assert(offsetof(WeakPoint_t, m_nBodyGroup) == 0x88);
    static_assert(offsetof(WeakPoint_t, m_bPermanentlyBroken) == 0x8c);
    static_assert(offsetof(WeakPoint_t, m_nBrokenBodygroupIndex) == 0x90);
    
    static_assert(sizeof(WeakPoint_t) == 0x98);
};
