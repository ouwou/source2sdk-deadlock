#pragma once
#include "source2sdk/client/ELockonState.hpp"
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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flLatchedValue"
    // static metadata: MNetworkVarNames "GameTime_t m_flLatchedTime"
    // static metadata: MNetworkVarNames "ELockonState m_eLockonState"
    // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
    #pragma pack(push, 1)
    struct LockonTarget_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        float m_flGainRate; // 0x30        
        float m_flDrainRate; // 0x34        
        float m_flMaxValue; // 0x38        
        int32_t m_nPrevFullStacks; // 0x3c        
        // metadata: MNetworkEnable
        float m_flLatchedValue; // 0x40        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLatchedTime; // 0x44        
        // metadata: MNetworkEnable
        client::ELockonState m_eLockonState; // 0x48        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x4c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(LockonTarget_t, m_flGainRate) == 0x30);
    static_assert(offsetof(LockonTarget_t, m_flDrainRate) == 0x34);
    static_assert(offsetof(LockonTarget_t, m_flMaxValue) == 0x38);
    static_assert(offsetof(LockonTarget_t, m_nPrevFullStacks) == 0x3c);
    static_assert(offsetof(LockonTarget_t, m_flLatchedValue) == 0x40);
    static_assert(offsetof(LockonTarget_t, m_flLatchedTime) == 0x44);
    static_assert(offsetof(LockonTarget_t, m_eLockonState) == 0x48);
    static_assert(offsetof(LockonTarget_t, m_hTarget) == 0x4c);
    
    static_assert(sizeof(LockonTarget_t) == 0x50);
};
