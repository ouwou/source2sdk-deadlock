#pragma once
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/client/ECitadelDamageType.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xe0
    // Has VTable
    #pragma pack(push, 1)
    class CTakeDamageInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        Vector m_vecDamageForce; // 0x8        
        Vector m_vecDamagePosition; // 0x14        
        Vector m_vecReportedPosition; // 0x20        
        Vector m_vecDamageDirection; // 0x2c        
        // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hInflictor;
        char m_hInflictor[0x4]; // 0x38        
        // m_hAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAttacker;
        char m_hAttacker[0x4]; // 0x3c        
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAbility;
        char m_hAbility[0x4]; // 0x40        
        float m_flDamage; // 0x44        
        float m_flTotalledDamage; // 0x48        
        client::DamageTypes_t m_bitsDamageType; // 0x4c        
        int32_t m_iDamageCustom; // 0x50        
        client::AmmoIndex_t m_iAmmoType; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x55[0xb]; // 0x55
        float m_flOriginalDamage; // 0x60        
        bool m_bShouldBleed; // 0x64        
        bool m_bShouldSpark; // 0x65        
        [[maybe_unused]] std::uint8_t pad_0x66[0xa]; // 0x66
        client::TakeDamageFlags_t m_nDamageFlags; // 0x70        
        client::ECitadelDamageType m_eCitadelDamageType; // 0x78        
        float m_flAfterBuffDamage; // 0x7c        
        float m_flPreResistDamage; // 0x80        
        bool m_bEvaded; // 0x84        
        [[maybe_unused]] std::uint8_t pad_0x85[0x3]; // 0x85
        float m_flDamageAbsorbed; // 0x88        
        client::HitGroup_t m_iHitGroupId; // 0x8c        
        Vector m_vecDamageNormal; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x9c[0x8]; // 0x9c
        // m_hOriginator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOriginator;
        char m_hOriginator[0x4]; // 0xa4        
        int32_t m_iBatchCount; // 0xa8        
        float m_flEffectiveness; // 0xac        
        float m_timeDamage; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xb4[0x4]; // 0xb4
        HSCRIPT m_hScriptInstance; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xc0[0x14]; // 0xc0
        bool m_bInTakeDamageFlow; // 0xd4        
        [[maybe_unused]] std::uint8_t pad_0xd5[0xb];
        
        // Static fields:
        static client::CTakeDamageInfo &Get_EmptyInfo() {return *reinterpret_cast<client::CTakeDamageInfo*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageInfo")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CTakeDamageInfo, m_vecDamageForce) == 0x8);
    static_assert(offsetof(CTakeDamageInfo, m_vecDamagePosition) == 0x14);
    static_assert(offsetof(CTakeDamageInfo, m_vecReportedPosition) == 0x20);
    static_assert(offsetof(CTakeDamageInfo, m_vecDamageDirection) == 0x2c);
    static_assert(offsetof(CTakeDamageInfo, m_hInflictor) == 0x38);
    static_assert(offsetof(CTakeDamageInfo, m_hAttacker) == 0x3c);
    static_assert(offsetof(CTakeDamageInfo, m_hAbility) == 0x40);
    static_assert(offsetof(CTakeDamageInfo, m_flDamage) == 0x44);
    static_assert(offsetof(CTakeDamageInfo, m_flTotalledDamage) == 0x48);
    static_assert(offsetof(CTakeDamageInfo, m_bitsDamageType) == 0x4c);
    static_assert(offsetof(CTakeDamageInfo, m_iDamageCustom) == 0x50);
    static_assert(offsetof(CTakeDamageInfo, m_iAmmoType) == 0x54);
    static_assert(offsetof(CTakeDamageInfo, m_flOriginalDamage) == 0x60);
    static_assert(offsetof(CTakeDamageInfo, m_bShouldBleed) == 0x64);
    static_assert(offsetof(CTakeDamageInfo, m_bShouldSpark) == 0x65);
    static_assert(offsetof(CTakeDamageInfo, m_nDamageFlags) == 0x70);
    static_assert(offsetof(CTakeDamageInfo, m_eCitadelDamageType) == 0x78);
    static_assert(offsetof(CTakeDamageInfo, m_flAfterBuffDamage) == 0x7c);
    static_assert(offsetof(CTakeDamageInfo, m_flPreResistDamage) == 0x80);
    static_assert(offsetof(CTakeDamageInfo, m_bEvaded) == 0x84);
    static_assert(offsetof(CTakeDamageInfo, m_flDamageAbsorbed) == 0x88);
    static_assert(offsetof(CTakeDamageInfo, m_iHitGroupId) == 0x8c);
    static_assert(offsetof(CTakeDamageInfo, m_vecDamageNormal) == 0x90);
    static_assert(offsetof(CTakeDamageInfo, m_hOriginator) == 0xa4);
    static_assert(offsetof(CTakeDamageInfo, m_iBatchCount) == 0xa8);
    static_assert(offsetof(CTakeDamageInfo, m_flEffectiveness) == 0xac);
    static_assert(offsetof(CTakeDamageInfo, m_timeDamage) == 0xb0);
    static_assert(offsetof(CTakeDamageInfo, m_hScriptInstance) == 0xb8);
    static_assert(offsetof(CTakeDamageInfo, m_bInTakeDamageFlow) == 0xd4);
    
    static_assert(sizeof(CTakeDamageInfo) == 0xe0);
};
