#pragma once
#include "entity2/CEntityComponent.hpp"
#include "entity2/CNetworkVarChainer.hpp"
#include "entity2/EntComponentInfo_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CGameSceneNode;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	class CBodyComponent : public entity2::CEntityComponent
	{
	public:
		// MNetworkDisable
		server::CGameSceneNode* m_pSceneNode; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad0010[0x10]; // 0x10
	public:
		// MNetworkDisable
		// MNetworkChangeAccessorFieldPathIndex
		entity2::CNetworkVarChainer __m_pChainEntity; // 0x20		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponent")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponent")->GetStaticFields()[1]->m_pInstance);};
	};
};
