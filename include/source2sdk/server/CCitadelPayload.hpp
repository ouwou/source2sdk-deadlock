#pragma once
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/server/CCitadelModifierAura.hpp"
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
    // Size: 0xc30
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flProgress"
    // static metadata: MNetworkVarNames "int m_nNumPushers"
    #pragma pack(push, 1)
    class CCitadelPayload : public server::CCitadelAnimatingModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xbc8[0x18]; // 0xbc8
        // m_hPusherAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifierAura> m_hPusherAura;
        char m_hPusherAura[0x18]; // 0xbe0        
        // m_hBlockerAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifierAura> m_hBlockerAura;
        char m_hBlockerAura[0x18]; // 0xbf8        
        [[maybe_unused]] std::uint8_t pad_0xc10[0x18]; // 0xc10
        // metadata: MNetworkEnable
        float m_flProgress; // 0xc28        
        // metadata: MNetworkEnable
        int32_t m_nNumPushers; // 0xc2c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPayload because it is not a standard-layout class
    static_assert(sizeof(CCitadelPayload) == 0xc30);
};
