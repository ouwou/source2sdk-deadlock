#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xc98
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hActiveProjectile"
    #pragma pack(push, 1)
    class CAbility_Synth_PlasmaFlux : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x10]; // 0xaf8
        bool m_bTeleported; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb09[0x7]; // 0xb09
        // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecUniqueHitList;
        char m_vecUniqueHitList[0x18]; // 0xb10        
        Vector m_vLastValidTeleportPosition; // 0xb28        
        entity2::GameTime_t m_flProjectileLaunchTime; // 0xb34        
        entity2::GameTime_t m_flProjectileExpireTime; // 0xb38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActiveProjectile;
        char m_hActiveProjectile[0x4]; // 0xb3c        
        [[maybe_unused]] std::uint8_t pad_0xb40[0x158];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_PlasmaFlux because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_PlasmaFlux) == 0xc98);
};
