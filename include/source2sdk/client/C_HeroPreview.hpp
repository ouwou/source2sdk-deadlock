#pragma once
#include "source2sdk/client/CCitadelHeroComponent.hpp"
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
    // Size: 0x578
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
    #pragma pack(push, 1)
    class C_HeroPreview : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x558        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_HeroPreview because it is not a standard-layout class
    static_assert(sizeof(C_HeroPreview) == 0x578);
};
