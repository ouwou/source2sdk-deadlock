#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0x14
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CFootTrajectory
	{
	public:
		Vector m_vOffset; // 0x0		
		float m_flRotationOffset; // 0xc		
		float m_flProgression; // 0x10		
		
		// Static fields:
		static modellib::CFootTrajectory &Get_Identity(){return *reinterpret_cast<modellib::CFootTrajectory*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CFootTrajectory")->GetStaticFields()[0]->m_pInstance);};
	};
};
