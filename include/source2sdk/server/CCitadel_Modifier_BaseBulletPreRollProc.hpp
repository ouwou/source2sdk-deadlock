#pragma once
#include "source2sdk/client/BulletID_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x190
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CCitadel_Modifier_BaseBulletPreRollProc : public server::CCitadel_Modifier_BaseEventProc
    {
    public:
        client::ShotID_t m_nSuppressProcShotID; // 0x170        
        [[maybe_unused]] std::uint8_t pad_0x174[0x4]; // 0x174
        // m_vecProcdBulletIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::BulletID_t> m_vecProcdBulletIDs;
        char m_vecProcdBulletIDs[0x18]; // 0x178        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BaseBulletPreRollProc because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_BaseBulletPreRollProc) == 0x190);
};
