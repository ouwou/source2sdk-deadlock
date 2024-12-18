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
    class CMoverPathNode;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
    #pragma pack(push, 1)
    class CPathMover : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x8]; // 0x4e0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPathQueryComponent"
        // metadata: MNetworkAlias "CPathQueryComponent"
        // metadata: MNetworkTypeAlias "CPathQueryComponent"
        server::CPathQueryComponent m_CPathQueryComponent; // 0x4e8        
        // m_vecPathNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CMoverPathNode>> m_vecPathNodes;
        char m_vecPathNodes[0x18]; // 0x548        
        bool m_bClosedLoop; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x561[0x57];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathMover because it is not a standard-layout class
    static_assert(sizeof(CPathMover) == 0x5b8);
};
