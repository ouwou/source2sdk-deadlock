#pragma once
#include "entity2/CEntityComponent.hpp"
#include "entity2/EntComponentInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	class CTouchExpansionComponent : public entity2::CEntityComponent
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0x40]; // 0x8
	public:
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CTouchExpansionComponent")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CTouchExpansionComponent")->GetStaticFields()[1]->m_pInstance);};
		// No schema binary for binding
	};
};
