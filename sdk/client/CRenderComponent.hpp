#pragma once
#include "entity2/CEntityComponent.hpp"
#include "entity2/CNetworkVarChainer.hpp"
#include "entity2/EntComponentInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd8
	// Has VTable
	class CRenderComponent : public entity2::CEntityComponent
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
	public:
		// MNetworkDisable
		// MNetworkChangeAccessorFieldPathIndex
		entity2::CNetworkVarChainer __m_pChainEntity; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0038[0x18]; // 0x38
	public:
		bool m_bIsRenderingWithViewModels; // 0x50		
	private:
		[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
	public:
		uint32_t m_nSplitscreenFlags; // 0x54		
	private:
		[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
	public:
		bool m_bEnableRendering; // 0x60		
	private:
		[[maybe_unused]] uint8_t __pad0061[0x4f]; // 0x61
	public:
		bool m_bInterpolationReadyToDraw; // 0xb0		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->GetStaticFields()[1]->m_pInstance);};
	};
};
