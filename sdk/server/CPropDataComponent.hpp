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
	// Size: 0x40
	// Has VTable
	// Has Trivial Destructor
	class CPropDataComponent : public entity2::CEntityComponent
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
	public:
		float m_flDmgModBullet; // 0x10		
		float m_flDmgModClub; // 0x14		
		float m_flDmgModExplosive; // 0x18		
		float m_flDmgModFire; // 0x1c		
		CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x20		
		CUtlSymbolLarge m_iszBasePropData; // 0x28		
		int32_t m_nInteractions; // 0x30		
		bool m_bSpawnMotionDisabled; // 0x34		
	private:
		[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
	public:
		int32_t m_nDisableTakePhysicsDamageSpawnFlag; // 0x38		
		int32_t m_nMotionDisabledSpawnFlag; // 0x3c		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPropDataComponent")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPropDataComponent")->GetStaticFields()[1]->m_pInstance);};
	};
};
