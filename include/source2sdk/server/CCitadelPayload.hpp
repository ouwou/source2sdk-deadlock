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
    // Size: 0xb90
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flProgress"
    // static metadata: MNetworkVarNames "int m_nNumPushers"
    #pragma pack(push, 1)
    class CCitadelPayload : public server::CCitadelAnimatingModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb28[0x18]; // 0xb28
        // m_hPusherAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifierAura> m_hPusherAura;
        char m_hPusherAura[0x18]; // 0xb40        
        // m_hBlockerAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifierAura> m_hBlockerAura;
        char m_hBlockerAura[0x18]; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb70[0x18]; // 0xb70
        // metadata: MNetworkEnable
        float m_flProgress; // 0xb88        
        // metadata: MNetworkEnable
        int32_t m_nNumPushers; // 0xb8c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPayload because it is not a standard-layout class
    static_assert(sizeof(CCitadelPayload) == 0xb90);
};
