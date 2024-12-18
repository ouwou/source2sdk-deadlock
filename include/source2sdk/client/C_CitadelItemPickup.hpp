#pragma once
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb30
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int32 m_eLootType"
    // static metadata: MNetworkVarNames "int32 m_nCurrencyValue"
    // static metadata: MNetworkVarNames "string_t m_iszModelName"
    // static metadata: MNetworkVarNames "float m_flModelScale"
    // static metadata: MNetworkVarNames "EHANDLE m_hTargetPlayer"
    // static metadata: MNetworkVarNames "float m_flFallRate"
    #pragma pack(push, 1)
    class C_CitadelItemPickup : public client::CCitadelAnimatingModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x8]; // 0xb00
        // metadata: MNetworkEnable
        int32_t m_eLootType; // 0xb08        
        // metadata: MNetworkEnable
        int32_t m_nCurrencyValue; // 0xb0c        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszModelName; // 0xb10        
        // metadata: MNetworkEnable
        float m_flModelScale; // 0xb18        
        // metadata: MNetworkEnable
        // m_hTargetPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTargetPlayer;
        char m_hTargetPlayer[0x4]; // 0xb1c        
        // metadata: MNetworkEnable
        float m_flFallRate; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb24[0xc];
        
        // Datamap fields:
        // bool from_crate; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelItemPickup because it is not a standard-layout class
    static_assert(sizeof(C_CitadelItemPickup) == 0xb30);
};
