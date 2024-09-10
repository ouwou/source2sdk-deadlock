#pragma once
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x58
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x3c]; // 0x0
        bool m_bRegistered; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x3d[0x3]; // 0x3d
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnOuterChanged"
        // m_hOuter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOuter;
        char m_hOuter[0x4]; // 0x40        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashDataChanged"
        client::HitGroup_t m_nCritHitGroup; // 0x44        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashDataChanged"
        int32_t m_nBodyGroup; // 0x48        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPermanentlyBroken"
        bool m_bPermanentlyBroken; // 0x4c        
        [[maybe_unused]] std::uint8_t pad_0x4d[0x3]; // 0x4d
        // metadata: MNetworkEnable
        int32_t m_nBrokenBodygroupIndex; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WeakPoint_t, m_bRegistered) == 0x3c);
    static_assert(offsetof(WeakPoint_t, m_hOuter) == 0x40);
    static_assert(offsetof(WeakPoint_t, m_nCritHitGroup) == 0x44);
    static_assert(offsetof(WeakPoint_t, m_nBodyGroup) == 0x48);
    static_assert(offsetof(WeakPoint_t, m_bPermanentlyBroken) == 0x4c);
    static_assert(offsetof(WeakPoint_t, m_nBrokenBodygroupIndex) == 0x50);
    
    static_assert(sizeof(WeakPoint_t) == 0x58);
};
