#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xe8
	// Has VTable
	class CCitadel_Modifier_AccuracyTracker : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x18]; // 0xc8
	public:
		float m_flInterval; // 0xe0		
		float m_flProgress; // 0xe4		
		
		// Static fields:
		static float &Get_sm_flHighestAccuracy(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadel_Modifier_AccuracyTracker")->GetStaticFields()[0]->m_pInstance);};
	};
};
