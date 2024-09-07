#pragma once
#include "pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "pulse_runtime_lib/CPulseCell_Timeline__TimelineEvent_t.hpp"
#include "pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0xc8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "BaseDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo
	// MPulseCellWithCustomDocNode
	class CPulseCell_Timeline : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
	{
	public:
		CUtlVector<pulse_runtime_lib::CPulseCell_Timeline__TimelineEvent_t> m_TimelineEvents; // 0x48		
		bool m_bWaitForChildOutflows; // 0x60		
	private:
		[[maybe_unused]] uint8_t __pad0061[0x7]; // 0x61
	public:
		pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0x68		
		pulse_runtime_lib::CPulse_ResumePoint m_OnCanceled; // 0x98		
		
		// Static fields:
		static char* &Get_m_pTagName(){return *reinterpret_cast<char**>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CPulseCell_Timeline")->GetStaticFields()[0]->m_pInstance);};
	};
};
