#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CPathQueryComponent.hpp"
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
    // Size: 0x5a0
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
    // static metadata: MNetworkVarNames "CUtlString m_pathString"
    #pragma pack(push, 1)
    class CPathSimple : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x8]; // 0x4e0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPathQueryComponent"
        // metadata: MNetworkAlias "CPathQueryComponent"
        // metadata: MNetworkTypeAlias "CPathQueryComponent"
        server::CPathQueryComponent m_CPathQueryComponent; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x548[0x50]; // 0x548
        // metadata: MNetworkEnable
        CUtlString m_pathString; // 0x598        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathSimple because it is not a standard-layout class
    static_assert(sizeof(CPathSimple) == 0x5a0);
};
