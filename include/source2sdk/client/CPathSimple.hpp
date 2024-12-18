#pragma once
#include "source2sdk/client/CPathQueryComponent.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x620
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
    // static metadata: MNetworkVarNames "CUtlString m_pathString"
    #pragma pack(push, 1)
    class CPathSimple : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x560[0x8]; // 0x560
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPathQueryComponent"
        // metadata: MNetworkAlias "CPathQueryComponent"
        // metadata: MNetworkTypeAlias "CPathQueryComponent"
        client::CPathQueryComponent m_CPathQueryComponent; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x50]; // 0x5c8
        // metadata: MNetworkEnable
        CUtlString m_pathString; // 0x618        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathSimple because it is not a standard-layout class
    static_assert(sizeof(CPathSimple) == 0x620);
};
