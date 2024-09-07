#pragma once
#include "entity2/EntComponentInfo_t.hpp"
#include "server/CBodyComponent.hpp"
#include "server/CGameSceneNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1b0
	// Has VTable
	// 
	// MNetworkVarNames "CGameSceneNode m_sceneNode"
	class CBodyComponentPoint : public server::CBodyComponent
	{
	public:
		// MNetworkEnable
		server::CGameSceneNode m_sceneNode; // 0x50		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentPoint")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentPoint")->GetStaticFields()[1]->m_pInstance);};
	};
};
