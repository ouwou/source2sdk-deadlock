#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc90
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecComponentsConsumed"
    #pragma pack(push, 1)
    class CCitadel_Item : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_vecComponentsConsumed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlStringToken> m_vecComponentsConsumed;
        char m_vecComponentsConsumed[0x18]; // 0xc78        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item) == 0xc90);
};
