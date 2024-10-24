#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nFastFireBulletsLeft"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
    #pragma pack(push, 1)
    class CAbility_Synth_Blitz : public client::C_CitadelBaseAbility
    {
    public:
        // m_vecSpecialShots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ShotID_t> m_vecSpecialShots;
        char m_vecSpecialShots[0x18]; // 0xc90        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nFastFireBulletsLeft; // 0xca8        
        [[maybe_unused]] std::uint8_t pad_0xcac[0x4]; // 0xcac
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CCitadelAutoScaledTime m_flBlitzEndTime; // 0xcb0        
        bool m_bCanApplyTechAmp; // 0xcc8        
        bool m_bCanLifesteal; // 0xcc9        
        [[maybe_unused]] std::uint8_t pad_0xcca[0x18e];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Blitz because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_Blitz) == 0xe58);
};
