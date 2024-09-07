#pragma once
#include "animlib/CNmSyncTrack__Event_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0xb0
	// 
	// MGetKV3ClassDefaults
	class CNmSyncTrack
	{
	public:
		CUtlLeanVectorFixedGrowable<animlib::CNmSyncTrack__Event_t,10> m_syncEvents; // 0x0		
		int32_t m_nStartEventOffset; // 0xa8		
		
		// Static fields:
		static animlib::CNmSyncTrack &Get_s_defaultTrack(){return *reinterpret_cast<animlib::CNmSyncTrack*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNmSyncTrack")->GetStaticFields()[0]->m_pInstance);};
	};
};
