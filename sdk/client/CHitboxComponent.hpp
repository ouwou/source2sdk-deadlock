#pragma once
#include "entity2/CEntityComponent.hpp"
#include "entity2/EntComponentInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// 
	// MNetworkVarNames "uint32 m_bvDisabledHitGroups"
	class CHitboxComponent : public entity2::CEntityComponent
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0x1c]; // 0x8
	public:
		// MNetworkEnable
		uint32_t m_bvDisabledHitGroups[1]; // 0x24		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->GetStaticFields()[1]->m_pInstance);};
	};
};
