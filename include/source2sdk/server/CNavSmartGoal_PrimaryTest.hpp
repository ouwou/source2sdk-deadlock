#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/INavSmartGoal.hpp"
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
    // Size: 0x28
    // Has VTable
    #pragma pack(push, 1)
    class CNavSmartGoal_PrimaryTest : public server::INavSmartGoal
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x10        
        entity2::GameTime_t m_flTimeEnd; // 0x14        
        Vector m_vLastGoal; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNavSmartGoal_PrimaryTest because it is not a standard-layout class
    static_assert(sizeof(CNavSmartGoal_PrimaryTest) == 0x28);
};
