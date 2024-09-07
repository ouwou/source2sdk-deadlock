#pragma once
#include "pulse_runtime_lib/CBasePulseGraphInstance.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x120
	// Has VTable
	// 
	// MPulseInstanceDomainInfo
	// MPulseDomainHookInfo
	// MPulseLibraryBindings
	// MPulseDomainOptInFeatureTag
	class CPulseGraphInstance_TestDomain : public pulse_runtime_lib::CBasePulseGraphInstance
	{
	public:
		bool m_bIsRunningUnitTests; // 0xf8		
		bool m_bExplicitTimeStepping; // 0xf9		
		bool m_bExpectingToDestroyWithYieldedCursors; // 0xfa		
	private:
		[[maybe_unused]] uint8_t __pad00fb[0x1]; // 0xfb
	public:
		int32_t m_nNextValidateIndex; // 0xfc		
		CUtlVector<CUtlString> m_Tracepoints; // 0x100		
		bool m_bTestYesOrNoPath; // 0x118		
		
		// Static fields:
		static double &Get_s_flExplicitCurTime(){return *reinterpret_cast<double*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CPulseGraphInstance_TestDomain")->GetStaticFields()[0]->m_pInstance);};
	};
};
