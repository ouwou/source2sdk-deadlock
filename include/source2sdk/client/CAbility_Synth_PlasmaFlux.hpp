#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdf8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hActiveProjectile"
    #pragma pack(push, 1)
    class CAbility_Synth_PlasmaFlux : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0x10]; // 0xc80
        bool m_bTeleported; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc91[0x3]; // 0xc91
        entity2::GameTime_t m_flProjectileLaunchTime; // 0xc94        
        entity2::GameTime_t m_flProjectileExpireTime; // 0xc98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hActiveProjectile;
        char m_hActiveProjectile[0x4]; // 0xc9c        
        [[maybe_unused]] std::uint8_t pad_0xca0[0x158];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_PlasmaFlux because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_PlasmaFlux) == 0xdf8);
};
