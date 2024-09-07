#pragma once
#include "entity2/CEntityComponent.hpp"
#include "entity2/EntComponentInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	class CScriptComponent : public entity2::CEntityComponent
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0x28]; // 0x8
	public:
		CUtlSymbolLarge m_scriptClassName; // 0x30		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->GetStaticFields()[1]->m_pInstance);};
	};
};
