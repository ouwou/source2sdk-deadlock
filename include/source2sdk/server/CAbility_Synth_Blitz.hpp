#pragma once
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nFastFireBulletsLeft"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
    #pragma pack(push, 1)
    class CAbility_Synth_Blitz : public server::CCitadelBaseAbility
    {
    public:
        // m_vecSpecialShots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ShotID_t> m_vecSpecialShots;
        char m_vecSpecialShots[0x18]; // 0xae8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nFastFireBulletsLeft; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x4]; // 0xb04
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        server::CCitadelAutoScaledTime m_flBlitzEndTime; // 0xb08        
        bool m_bCanApplyTechAmp; // 0xb20        
        bool m_bCanLifesteal; // 0xb21        
        [[maybe_unused]] std::uint8_t pad_0xb22[0x18e];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Blitz because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_Blitz) == 0xcb0);
};
