#pragma once
#include "source2sdk/server/CCitadel_Item.hpp"
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
    // Size: 0xd00
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Upgrade_StabilizingTripod : public server::CCitadel_Item
    {
    public:
        // m_vecDeployedSentries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecDeployedSentries;
        char m_vecDeployedSentries[0x18]; // 0xb10        
        Vector m_vDeployPosition; // 0xb28        
        QAngle m_vDeployAngles; // 0xb34        
        [[maybe_unused]] std::uint8_t pad_0xb40[0x1c0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Upgrade_StabilizingTripod because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Upgrade_StabilizingTripod) == 0xd00);
};
