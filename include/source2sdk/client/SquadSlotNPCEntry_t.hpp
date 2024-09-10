#pragma once
#include "source2sdk/client/SquadSlotId_t.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct SquadSlotNPCEntry_t
    {
    public:
        client::SquadSlotId_t nId; // 0x0        
        // hEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hEnemy;
        char hEnemy[0x4]; // 0x4        
        bool bHoldForManualRelease; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SquadSlotNPCEntry_t, nId) == 0x0);
    static_assert(offsetof(SquadSlotNPCEntry_t, hEnemy) == 0x4);
    static_assert(offsetof(SquadSlotNPCEntry_t, bHoldForManualRelease) == 0x8);
    
    static_assert(sizeof(SquadSlotNPCEntry_t) == 0xc);
};
