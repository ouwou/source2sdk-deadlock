#pragma once
#include "client/CBaseAnimGraphController.hpp"
#include "client/CBodyComponentSkeletonInstance.hpp"
#include "entity2/EntComponentInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1d20
	// Has VTable
	// 
	// MNetworkVarNames "CBaseAnimGraphController m_animationController"
	class CBodyComponentBaseAnimGraph : public client::CBodyComponentSkeletonInstance
	{
	public:
		// MNetworkEnable
		client::CBaseAnimGraphController m_animationController; // 0x4c0		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->GetStaticFields()[1]->m_pInstance);};
	};
};
