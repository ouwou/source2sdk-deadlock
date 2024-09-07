#pragma once
#include "client/CBodyComponent.hpp"
#include "client/CGameSceneNode.hpp"
#include "entity2/EntComponentInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1b0
	// Has VTable
	// 
	// MNetworkVarNames "CGameSceneNode m_sceneNode"
	class CBodyComponentPoint : public client::CBodyComponent
	{
	public:
		// MNetworkEnable
		client::CGameSceneNode m_sceneNode; // 0x50		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->GetStaticFields()[1]->m_pInstance);};
	};
};
