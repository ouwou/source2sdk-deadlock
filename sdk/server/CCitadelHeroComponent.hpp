#pragma once
#include "client/HeroID_t.hpp"
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
	// Size: 0x20
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "HeroID_t m_nHeroID"
	// MNetworkVarNames "HeroID_t m_nHeroLoading"
	class CCitadelHeroComponent : public entity2::CEntityComponent
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0xc]; // 0x8
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnHeroChanged"
		client::HeroID_t m_nHeroID; // 0x14		
		// MNetworkEnable
		// MNetworkPriority "32"
		client::HeroID_t m_nHeroLoading; // 0x18		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelHeroComponent")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelHeroComponent")->GetStaticFields()[1]->m_pInstance);};
	};
};
