#pragma once
#include "source2sdk/client/ECurrencySource.hpp"
#include "source2sdk/client/EDenyDistributionType.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CItemXP__AssignedEarner_t
    {
    public:
        client::ECurrencySource m_eSource; // 0x0        
        int32_t m_iBounty; // 0x4        
        client::EDenyDistributionType m_eDenyType; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CItemXP__AssignedEarner_t, m_eSource) == 0x0);
    static_assert(offsetof(CItemXP__AssignedEarner_t, m_iBounty) == 0x4);
    static_assert(offsetof(CItemXP__AssignedEarner_t, m_eDenyType) == 0x8);
    
    static_assert(sizeof(CItemXP__AssignedEarner_t) == 0x10);
};
