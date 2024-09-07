#pragma once
#include "client/C_PointEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x570
	// Has VTable
	class CInfoDynamicShadowHint : public client::C_PointEntity
	{
	public:
		bool m_bDisabled; // 0x558		
	private:
		[[maybe_unused]] uint8_t __pad0559[0x3]; // 0x559
	public:
		float m_flRange; // 0x55c		
		int32_t m_nImportance; // 0x560		
		int32_t m_nLightChoice; // 0x564		
		CHandle<client::C_BaseEntity> m_hLight; // 0x568		
		
		// Static fields:
		static CUtlVector<client::CInfoDynamicShadowHint*> &Get_m_AllHints(){return *reinterpret_cast<CUtlVector<client::CInfoDynamicShadowHint*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->GetStaticFields()[0]->m_pInstance);};
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
