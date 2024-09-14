#pragma once
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/EntComponentInfo_t.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x20
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MNetworkVarNames "HeroID_t m_nHeroID"
    // static metadata: MNetworkVarNames "HeroID_t m_nHeroLoading"
    #pragma pack(push, 1)
    class CCitadelHeroComponent : public entity2::CEntityComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0xc]; // 0x8
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnHeroChanged"
        client::HeroID_t m_nHeroID; // 0x14        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        client::HeroID_t m_nHeroLoading; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelHeroComponent")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelHeroComponent")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelHeroComponent because it is not a standard-layout class
    static_assert(sizeof(CCitadelHeroComponent) == 0x20);
};
