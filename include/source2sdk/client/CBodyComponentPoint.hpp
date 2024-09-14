#pragma once
#include "source2sdk/client/CBodyComponent.hpp"
#include "source2sdk/client/CGameSceneNode.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1b0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CGameSceneNode m_sceneNode"
    #pragma pack(push, 1)
    class CBodyComponentPoint : public client::CBodyComponent
    {
    public:
        // metadata: MNetworkEnable
        client::CGameSceneNode m_sceneNode; // 0x50        
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBodyComponentPoint because it is not a standard-layout class
    static_assert(sizeof(CBodyComponentPoint) == 0x1b0);
};
