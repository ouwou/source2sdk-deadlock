#pragma once
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb18
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecComponentsConsumed"
    #pragma pack(push, 1)
    class CCitadel_Item : public server::CCitadelBaseAbility
    {
    public:
        bool m_bEquipped; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xaf9[0x7]; // 0xaf9
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_vecComponentsConsumed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecComponentsConsumed;
        char m_vecComponentsConsumed[0x18]; // 0xb00        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item) == 0xb18);
};
