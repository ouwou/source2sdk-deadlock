#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcd8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hHookVictim"
    // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
    // static metadata: MNetworkVarNames "Vector m_vecHookTargetStartPos"
    #pragma pack(push, 1)
    class CCitadel_Ability_Hook : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "HookVictimChanged"
        // m_hHookVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hHookVictim;
        char m_hHookVictim[0x4]; // 0xaf8        
        // metadata: MNetworkEnable
        // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hProjectile;
        char m_hProjectile[0x4]; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vecHookTargetStartPos; // 0xb00        
        bool m_bProjectileHit; // 0xb0c        
        [[maybe_unused]] std::uint8_t pad_0xb0d[0x3]; // 0xb0d
        float m_flLastUppercutRestoreTime; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb14[0x1c4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Hook because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Hook) == 0xcd8);
};
